package main

import (
	"fmt"
	"os"
)

// HasDir 判断文件夹是否存在
func HasDir(path string) (bool, error) {
	_, _err := os.Stat(path)
	if _err == nil {
		return true, nil
	}
	if os.IsNotExist(_err) {
		return false, nil
	}
	return false, _err
}

// CreateDir 创建文件夹
func CreateDir(path string) {
	_exist, _err := HasDir(path)
	if _err != nil {
		fmt.Printf("获取文件夹异常 -> %v\n", _err)
		return
	}
	if _exist {
		fmt.Println("文件夹已存在！")
	} else {
		err := os.Mkdir(path, os.ModePerm)
		if err != nil {
			fmt.Printf("创建目录异常 -> %v\n", err)
		} else {
			fmt.Println("创建成功!")
		}
	}
}

func CreateAndWriteFile(path string, data string) {
	file, error := os.Create(path)
	if error != nil {
		fmt.Println(error)
	}
	//写入字符串
	file.WriteString(data)
	file.Close()
}

func main() {
	for i := 1; i < 100; i += 100 {
		var urlTemplate = "src/main/QuestionBank/solution%d_%d"
		var path = fmt.Sprintf(urlTemplate, i, i+99)
		var data = "package main\n\nfunc main() {\n\t\n}"
		fmt.Println(path)
		CreateDir(path)
		for j := i + 1; j < i+100; j++ {
			var fileTemplate = path + "/" + "Solution%d.go"
			var file = fmt.Sprintf(fileTemplate, j)
			fmt.Println(file)
			CreateAndWriteFile(file, data)
		}
	}
}
