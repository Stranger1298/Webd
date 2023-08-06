fn main() {
    // //string slicing
    // let s=String::from("Hello duniya");
    // //for printing hello
    // let hello=&s[0..5];
    // println!("{hello}");

    let rect=Rectangle{
        length:4,
        breadth:3,
    };
    println!("Area of rectangle is {:?}",area(rect));
}

fn area(rect:Rectangle) {
    let _=&rect.length*&rect.breadth;
}


#[derive(Debug)]
struct Rectangle{
    length:u32,
    breadth:u32,
}
