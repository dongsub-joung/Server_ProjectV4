use std::{vec, fs::File};

fn main() {
    let mut files= vec!["asd","abc"];
    let mut id= vec!["asdf","basd"];
    let mut pw= vec!["123","3253as"];
    
    id.push("value");
    pw.push("value2");

// DW
    // let ex= String::from("some");
    // files.

// Upload
    // files.push("value");

    // remove
    let removed= String::from("abc");
    let mut index= 0;
    for value in files.iter(){
        if value.eq(&removed) {
            break;
        }
        index += 1;
    }
    files.remove(index);

    
// TEst
    print!("{}", files[0])

    // for i in 0..{
    //     print!("id: {}, pw: {}, file: {}\n", id[i], pw[i]);
    // }
}