#include <stdio.h>

int main(void) {

    int i; //declaring the type of variable i to int
    float x; //declaring the type of variable x to float
    i = 40; 
    x = 839.21f; 
    
    //the constant and other characters before the format specifier changes the way the output is printed out
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); //indicating the field width of character when printing i
    printf("|%10.3f|%10.3e|%- 10g|\n", x, x, x); //indicating the field width of character when printing j
    
    return 0;

}