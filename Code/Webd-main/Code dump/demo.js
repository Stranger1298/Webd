console.log("hello there")
let x=1;
console.log(x);
//array
let arr=['apple' , 'banana' , 'guava']
let arr2=["ant" , "dog" , "lizard"]
console.log(arr)

// push method-----added the element
arr.push('pear')
//arr.push("pear")
console.log(arr)

// pop method----removes the element
arr.pop('pear')
console.log(arr)

// unshift method------adds element at the 0th index
arr.unshift('papaya')
console.log(arr)

//shift method-----removes element from 0th index
arr.shift()
console.log(arr)

//objects
let obj={
    name:'Rohan', //string values are must be inside single/double quotes
    class:'fifth',
    roll: 17,
    contact:8745987434
}

//dot notation
console.log(obj)
console.log(obj.name)

//bracket notation
console.log(obj['contact'])

//nested object
let Animals={
    types:['wild','domestic'],
    domestic:{
        Name:'cat',
        Name2:'dog'
    }
}
console.log(Animals.types)
console.log(Animals.types[1])
console.log(Animals.domestic)

//adding something in object
Animals.wild=['zebra','tiger','lion']
console.log(Animals)

//delete something from object
delete Animals.wild
console.log(Animals)

//Function
function greet(){
    console.log('Hellow world,from inside function')
}
greet()

//input in function
function add(a,b){
    console.log(a+b)
}
add(5,2)

//function expression---first class citizens
let func=function add(a,b){
    console.log(a+b)
}
add(2,2)

//IIFE----[Immediately invoked function expression]
let addition= (function add(a,b) {
    console.log(a+b)
}) (5,4)