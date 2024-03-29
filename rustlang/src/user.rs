use std::collections::HashMap;


pub struct User{
    pub id: String,
    pub pw: String,
    pub pass: i8,
    pub admin: i8,
    pub node: u128,
}

impl User {
    pub fn dummy() -> User{
        User { id: String::from("jds")
            , pw: String::from("123")
            , pass: 1
            , admin: 2
            , node: 0 
        }
    }
    pub fn new(id: String, pw: String, pre_node: u128) -> User{
        User { id, pw, pass: 0, admin: 0, node: pre_node+1 }
    }
}

pub struct DB{
    pub users: HashMap<String, User>,
}

impl DB {
    pub fn new(user: User)-> DB{
        let mut user_db= HashMap::new();
        user_db.insert(user.id, user);

        DB{ users: user_db }
    }
}