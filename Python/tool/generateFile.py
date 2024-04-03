import os


# 创建文件夹的函数
def create_folders(start, end, step):
    for i in range(start, end, step):
        folder_name = f"solution{i}_{i + step - 1}"  # 根据当前的范围生成文件夹名称
        os.makedirs(folder_name)  # 创建文件夹
        create_files(folder_name, i, i + step - 1)  # 调用创建文件的函数


# 创建文件的函数
def create_files(folder_name, start, end):
    for i in range(start, end + 1):
        file_name = os.path.join(folder_name, f"solution{i}.py")  # 根据当前的编号生成文件名
        with open(file_name, 'w') as f:
            f.write(f"# Solution {i}")  # 写入文件内容


if __name__ == '__main__':
    # 设置范围和步长
    start = 1
    end = 4001
    step = 100

    # 调用函数创建文件夹和文件
    create_folders(start, end, step)
