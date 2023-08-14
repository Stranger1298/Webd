// fn main() {
//     let rect=Rectangle{
//         length:4,
//         breadth:3,
// };
// println!("The length of rectangle is {}",rect.length);
// println!("The breadth of rectangle is {}",rect.breadth);        
// area(&rect);
    
// }
// fn area(rect:&Rectangle) {
//     let ar=rect.length*rect.breadth;
//     println!("Area of rectangle is {}",ar);
// }

// // #[warn(non_snake_case)]
// // #[derive(Debug)]
// struct Rectangle{
//     length:u64,
//     breadth:u64,
// }


fn main() {
    let user1=One{
        name:String::from("Aman"),
        usn:String::from("1sg22cs006"),
        email:String::from("demo@gmail.com"),
        marks:52,
    };
    let user2=One{
        name:user1.name,
        ..user1
    };
    println!("{}",user1.name);
    println!("{}",user1.usn);
    println!("{}",user1.email);
    println!("{}",user1.marks);

    println!("{}",user2.name);
    println!("{}",user2.usn);
    println!("{}",user2.email);
    println!("{}",user2.marks);
}


struct One{
    name:String,
    usn:String,
    email:String,
    marks:u64
}