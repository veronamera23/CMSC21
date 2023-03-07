#include <stdio.h> 

int main(void){
    
    // declaring all variables that will be used in the main function as integer
    int num1, denom1, num2, denom2, result_num, result_denom; 
    
    //printf function is used to guide the user what to input
    printf ("Enter first fraction: ") ; 
    scanf ("%d/%d", &num1, &denom1) ; 
    
    //scanf function collects the input from user and stores it on indicated variables
    printf ( "Enter second fraction: ") ;
    scanf ("%d/%d", &num2, &denom2) ;
    
    //formula used to solve the input encoded by user
    result_num = num1 * denom2 + num2 * denom1; //arithmetic operators are used for formulas
    result_denom = denom1 * denom2; 
    
    //printf here is used to print the output 
    //that will be computed in the variables containing the formulas
    printf ("The sum is %d/%d\n", result_num, result_denom); 
    
    return 0; 
}