use std::io;

fn main() {
    // Common
    let UPLOAD= String::new("Up");
    let DOWNLOAD= String::new("Down";);
    let SPACE= String::new("Space Usage"); 
    let LIST_USERS= String::new("Show Up Users");

    // USER_MODE
    let USER_MODE= String::new("{}. Users Mode");
    
    // ADMIN_MODE
    let ADMIN_MODE= String::new("{}. Admin Mode");
    
    // JOIN
    let JOIN= String::new("{}. Join");
    
    // UNJOINED_USER
    let UNJOINED_USER= String::new("{}. Unjoined Users");

    // @TODO Result(Ordering) && except (enum && exception)

    // Start Logic Flow
    loop{
        loop{ // Scroll up List
            let i= 0;
            println(USER_MODE, i++);
            println(ADMIN_MODE, i++);
            println(JOIN, i++);
            println(UNJOINED_USER, i++);
            break;
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