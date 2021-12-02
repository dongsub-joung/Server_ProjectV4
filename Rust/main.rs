use std::io;

fn main() {
    let pangram: &'static str = "the quick brown fox jumps over the lazy dog";
    // Common
    const UPLOAD: &'static str      = "Up";
    const DOWNLOAD: &'static str    = "Down";
    const SPACE: &'static str       = "Space Usage";
    const LIST_USERS: &'static str  = "Show Up Users";

    // USER_MODE
    const USER_MODE: &'static str   = "{}. Users Mode";
    
    // ADMIN_MODE
    let ADMIN_MODE: &'static str    = "{}. Admin Mode";
    
    // JOIN
    let JOIN: &'static str          = "{}. Join";
    
    // UNJOINED_USER
    let UNJOINED_USER: &'static str = "{}. Unjoined Users";

    // @TODO Result(Ordering) && except (enum && exception)

    // Start Logic Flow
    loop{
        // Scroll up List
        for i in 1..4
        {
            if i == 1 {
                println!(USER_MODE, i);
            } 
            if i == 2 {
                println!(ADMIN_MODE, i);
            } 
            if i == 3 {
                println!(JOIN, i);
            } 
            if i == 4 {
                println!(UNJOINED_USER, i);
            } 
        }

        // Enter User's number
        let mut number= 0;
        
        io::stdin().read_line(&mut guess)
        .expect("Failed to read line");
        
        io::stdin().read_line(&number)
            .expect("Out of Range"); 

        
        self::ShowServerCapacity();
        println!("Hello, world!");
    }
}

// extern "User Mode" function
fn ShowServerCapacity(){

}