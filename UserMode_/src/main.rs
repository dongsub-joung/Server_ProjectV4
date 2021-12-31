use std::io;

fn main() {
    list_up_user_mode();

    let mut input= String::new();
    io::stdin().read_line(&mut input).expect("failed to read from stdin");
    let number= input.trim();

    match number.parse::<u8>() {
        Ok(i) =>{
            if i == 1 { download(); }
            if i == 2 { upload(); }
            if i == 3 { delete(); }
            if (i>3) {
                print!("return to menu");
            }
        },
        Err(_) => {
            print!("Not Integer!\r\n");
        },
    }
    
}


pub fn download(){
    print!("DW");
}
pub fn upload(){
    println!("UP");
}
pub fn delete(){
    println!("DL");
}

pub fn list_up_user_mode(){
    println!("1. Download File \r\n");
	println!("2. Upload File   \r\n");
	println!("3. Delete File   \r\n");
	println!("Select a Service you use \r\n");
}