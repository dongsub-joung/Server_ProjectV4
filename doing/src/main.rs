use std::io::{self, Read};

fn input_user() -> (String, String){
    let mut buf1= String::new();
    let mut buf2= String::new();
    
    println!("ID");
    io::stdin().read_line(&mut buf1).unwrap();
    
    println!("PW");
    io::stdin().read_line(&mut buf2).unwrap();
    
    ( buf1, buf2 )
}

fn main() {
    let (a, b)= input_user();
    println!("{}{}", &a, &b);

}