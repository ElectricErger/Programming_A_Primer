#include<stdio.h>

int pow2(int x, int y);

void main(){
    //Before we begin let's talk about this #include<stdio.h> that you see
    //at the top of the page. We use this line because functions like "printf"
    //aren't included in C by default. In fact without any #include statements
    //we don't have access to any functions. stdio.h is what we call a "library"
    //it's a group of functions that are packaged together so that we can
    //import them and use their functionality. Making these libraries requires
    //a bit of extra work for C, so we won't discuss them at this time.
    
    //Functions:
    //Just like in mathematics, programming functions are a black box that take
    //input and produce output. In C you specify the types of variables that 
    //you can pass into a function, and the order they are passed. You also 
    //specify the type of the output. This can be any variable type or no type
    //at all. To specify no output we use the "void" keyword.
    //
    //Some examples of functions:
    //printf(): Printf takes a variable number of inputs and produces no output
    //  0 inputs are valid (nothing happens
    //  1 input is valid (just a string with no % signs)
    //  1+n inputs are used when you have n % signs in your string.
    //      This is best explained by example
    //  e.g.
    int userID=1000, computerID=1;
    printf("HELLO USER #%u, I AM COMPUTER #%u\n", userID, computerID);
    //  The sentence has 2 % signs, these will be replaced with the results of
    //  the variables userID for the first and computerID for the second
    //pow(x,y): Pow is the power operation it takes 2 integers returns an
    //  integer
    //  e.g.
    float a = pow2(3,2);
    printf("3^2=%f\n", a);
        //Note: The output of a function is a variable, so we can keep hold of
        //that value in another variable.
    //main(): This method can take as inputs several inputs and returns an
    //  integer or nothing. This method is called when you execute the program
    //  and cannot be called from within the program.
    
    //Defining Functions:
    //Now that you know how to use (call) a function, it's time to write one.
    //If you look bellow the "}" you'll see some example code.
    //In this code the following is required:
    //<type> <name>(<input parameters>){ return <variable> }
    //so for this function we know it's:
    //  return type is integers
    //  name is pow
    //  it takes 2 integers as parameters
    //The code between the curly braces "{" and "}" are the bits of code that
    //will be run when the function is called. Don't worry about the specifics
    //of this example, we will discuss that in the next lesson.
    //
    //Lastly, if you look to the top of this document you'll notice "int pow"
    //again. This is necissary for compilation, which will be discussed later.
}

int pow2(int x, int y){
    int total = 1;
    while(y>0){
        total *= x;
        y--;
    }
    return total;
}
