fn main() {
    input_output();
    tuple();
    loops();
    scope();
    clone();
    try_run();
}

use std::io;
fn input_output() {
    println!("Enter the number: ");
    let mut bob=String::new();
    io::stdin().read_line(&mut bob);
    println!("{bob}");
}

//Loops Tuples and scope
fn tuple() {
    let tup=[1,2,3,4,5];
    let x=tup[1];
    println!("{x}");
}

fn loops() {
    let mut a=5;
    while  a<=10 {
        println!("Infinite Bob");
        a=a+1;
    }
    let b=[1,2,3,4,5,6];
    for i in 0..b.len() {
        println!("{}",b[i]);
    }
}

fn scope() {
    let  a=10;
    {
        let  a = 12.5; //scope under flower braces only
        println!("{}",a);
    }
    println!("{}",a)
}

fn clone() {
    let name=String::from("Bob");
   // let name2=name;  //gives error
    let name2=name.clone();
    println!("{}",name);
    println!("{}",name2);
}

fn try_run() {
    let s1=String::from("Hello");
    let length=&s1.len();
    println!("{}",length)
}
