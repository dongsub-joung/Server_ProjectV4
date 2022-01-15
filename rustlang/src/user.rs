use std::collections::HashMap;


pub struct User{
    id: String,
    pw: String,
    pass: i8,
    admin: i8,
    node: u128,
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
    users: HashMap<u128, User>,
}

impl DB {
    pub fn new(user: User)-> DB{
        let mut user_db= HashMap::new();
        user_db.insert(user.node, user);

        DB{ users: user_db }
    }
}