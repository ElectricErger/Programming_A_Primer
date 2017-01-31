#include<stdio.h>

void main(){
    //Variables
    //Variables have:
    //  a type (number, character, decimal, logical, car, etc)
    //  a name (e.g. x, player1, Steve, house, etc)
    //      the name can't start with a number or special character
    int a=6, b=3;
   
    //Operations:
    //Operations are the bread and butter of programming, they are how
    //data get's processed and changes into something else.
    //  e.g. When you press "vol +" on your remote, you're sending a signal
    //  to the TV to tell it to perform vol = vol + 1;

    //Add
    int add = a+b;
    //Subtract
    int subtract = a-b;
    //Multiply
    int multiply = a*b;
    //Divide
    int divide = a/b;
    //Modulo
    int modulo = a%b;

    //NOTE: There are more operations and it is possible to define these
    //opterations for more complicated variables as we will see later.

    //There are also other ways to perform these operations. Namely that each
    //of these operations can take the form x+=y which is short for x = x + y.
    //Addition and Subtraction also have 2 additional short forms each:
    //x++, x--, ++x, --x. Which corrospond to "increment/decrement by 1".
    //x++ means use the value of x then increment, where ++x means increment
    //then use x; (This will be easier to explain later)


   //Displaying information
   //When you program it's important to remember that you're not producing
   //results that are expliticly tangable to you directly. Namely, by this
   //point in the program you don't know what the value of divide is
   //(explicitly). The value of divide is held in computer memory somewhere,
   //and in order to get it out, you'll need to tell the computer to display
   //it for you.
   
   //printf
   //printf() is a function that displays information according to a format
   //we will cover this in more detail in the next lesson.
   printf("A is %i and B is %d:\n", a, b);
   printf("When added together we get\n%u+%i=%d\n", a,b,add);
   printf("Similarly we get the following results:\n");
   printf("%i-%i=%i\n",a,b,subtract);
   printf("%i*%i=%i\n",a,b,multiply);
   printf("%i/%i=%i\n",a,b,divide);
   printf("%i%%%i=%i\n",a,b,modulo);
   
   //Modulo as you can probably tell after running this program several times
   //while tweaking a and b is the remainder operation. It produces the
   //remainder of a/b. Useful for things like determining even vs odd.

}
