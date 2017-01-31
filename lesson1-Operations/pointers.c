#include<stdio.h>


void inc(int* i);

void main(){
    //Pointers:
    //Pointers are one of the things that make C/++ special. Other languages have similar
    //devices, but they abstract away from the memory model. This is one of the most
    //complex parts of C, so if you don't get it immediately, don't worry.
    //
    //A pointer is a variable that contains the address of a variable. Let's look at an example

    int a = 5; //This is a normal variable
    int* pointer = &a; //This is a pointer being assigned the address of a.

    //Here we make a normal variable named a and tell it to hold onto the value 5.
    //We then make a pointer called pointer. You can tell it's a pointer because when it's
    //type is declared it's not just "int" but rather "int*", meaning an integer pointer.
    //That means the value of pointer isn't 5, but rather whatever is in 'a'.
    
    printf("The value in a is: %i\n", a);
    printf("It's address is: 0x%x\n", pointer);
    printf("It's address is: 0x%x\n", &a); //the & symbol means "address of"

    printf("The value in a is: %i\n", *pointer); //* means "value of"

    //Hexadecimal:
    //As you probably are aware most computers are either 32 or 64 bit in 2017. As a result
    //in C we use 32 or 64 bit pointers. Now this number could be represented in decimal
    //(base 10), but that isn't too helpful when computers are in binary (base 2). But if
    //we were to show this number in binary it would be 32/64 digits long (that's long).
    //The solution is hexadecimal (base 16). The numbers go from 0 to E for any given digit.
    //So for example, 12 in decimal becomes C in hexadecimal.
    //Don't worry, for the most part you won't even worry about what the value of an address
    //is, the important thing is having the address. This is just a bit of information for
    //you to keep aware of if you ever delve deeper (e.g. into security).

    //Referencing:
    //The & and * operators are both important to pointers. The & operator get's the
    //address of a variable, and the * operator uses the address of a variable to
    //look at what it's pointing to. This is known as referencing (&) and dereferencing(*).
    
    //Pointers and functions:
    //One of the most basic use of pointers is to pass a pointer into a function, so that
    //that function can change a variable. See for example the function "inc" below.
    
    int b = 4;
    inc(&b);
    printf("b was 4, but is now: %i\n", b);

    //As you will learn in the next section, functions are their own island. They have no
    //understanding of any variables used anywhere else (so it doesn't know about 'b' explicitly).
    //By using a pointer we allow the funciton to manipulate data it doesn't have direct
    //access to.
    
    //Pointers and Structs:
    //The primary purpose of pointers is to keep track of large groupings of data. 
    //These groups of data are known as "struct"s, and later evolve into the concept
    //of objects (which are used in all modern Object Oriented Languages). We will discuss
    //structs and pointers in more detail later, but for now know that the only way to access
    //a struct is via a pointer.



}

void inc(int* i){
    (*i)++;
}
