pub fn tp(n: vec<u8>) -> vec<u8>{
// or heap Box<vec>
    let c= n.clone();
    c.push(4);
    c.push(5);
    
    c
}

fn main() {
    let a= vec![1,2,3];
    let mut b: Vec<u8>;
    
    b= tp(a);

    for i in b.iter(){
        println!("{}", i);
    }

}
// let mut files= Box::new(vec!["asd","abc"]);
// // let files= vec!["asd","abc"];

// {
//     *files.remove(1)
// }

// for i in files.iter(){
//     println!("{}", i);
// }