// fn main() {
//     //string slicing
//     let s=String::from("Hello duniya");
//     //for printing hello
//     let hello=&s[0..5];
//     println!("{hello}");   
// }
use std::io;
fn main() {
    println!("Enter a number: ");
    let mut a=String::new();
    io::stdin().read_line(&mut a);
    println!("{a}");
}