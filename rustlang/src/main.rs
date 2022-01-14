

use std::io;

fn user_mode(){
    auth();
    menu();
}

fn admin_mode(){
    auth();
    menu();
}

fn join(){
    
}

fn show_up_unjoined(){

}

fn main() {
    const USER_MODE: &'static str   = "1.. Users Mode";
    const ADMIN_MODE: &'static str    = "2.. Admin Mode";
    const JOIN: &'static str          = "3.. Join";
    const UNJOINED_USER: &'static str = "4.. Unjoined Users";
    
    loop{
        println!("{}", USER_MODE);
        println!("{}", ADMIN_MODE);
        println!("{}", JOIN);
        println!("{}", UNJOINED_USER);

        let mut buf= String::new();
        io::stdin().read_line(&mut buf).unwrap();
        let number: u8= buf.trim().parse().unwrap();
        match number {
            1 => {
                println!("{}", USER_MODE);
                user_mode();
            },
            2 => {
                println!("{}", ADMIN_MODE);
                admin_mode();
            },
            3 => {
                println!("{}", JOIN);
                join();
            },
            4 => {
                println!("{}", UNJOINED_USER);
                show_up_unjoined();
            },
            _ => panic!("out of range")
        }
    }
}

