// fn tp(n: &mut Vec<u32>) -> Vec<u32>{
//     n.push(4);
//     n.push(5);

//     n
// }

fn dd(b: Vec<T>){
    for i in b{
        println!("{}", i);
    }
}

fn main() {
    let mut a= vec![1,2,3];
    // let mut b: Vec<u32>;
    
    // b= tp(&a);
    dd(a);
}

// let mut files= Box::new(vec!["asd","abc"]);
// // let files= vec!["asd","abc"];

// {
//     *files.remove(1)
// }

// for i in files.iter(){
//     println!("{}", i);
// }