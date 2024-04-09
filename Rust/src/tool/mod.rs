use std::fs::{self, File};
use std::io::Write;

// 创建文件夹的函数
fn create_folder(folder_name: &str) {
    match fs::create_dir(folder_name) {
        // 如果成功创建文件夹
        Ok(_) => println!("成功创建文件夹: {}", folder_name),
        // 如果创建失败
        Err(err) => eprintln!("创建文件夹失败: {}", err),
    }
}

// 在文件夹内创建100个文件的函数
fn create_files_in_folder(folder_name: &str, start: i32, end: i32) {
    for i in start..=end {
        // 根据当前数字计算文件名
        let file_name = format!("{}/solution{}.rs", folder_name, i);
        // 创建文件并写入内容
        if let Ok(mut file) = File::create(&file_name) {
            if let Err(err) = writeln!(file, "// This is solution {} code", i) {
                eprintln!("写入文件失败: {}", err);
            }
        } else {
            eprintln!("创建文件失败: {}", file_name);
        }
    }
}


pub fn generate_folder_file(start: i32, end: i32) {
    // 循环1000次，每次生成一个文件夹
    for i in start..=end {
        // 检查是否需要生成一个新的文件夹
        if (i - 1) % 100 == 0 {
            // 根据当前数字计算文件夹名称
            let folder_name = format!("solution{}_{}", i, i + 99);
            // 调用创建文件夹的函数
            create_folder(&folder_name);
            // 在文件夹内创建100个文件
            create_files_in_folder(&folder_name, i, i + 99);
        }
    }
}
