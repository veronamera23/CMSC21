#include <stdio.h>
#include <math.h>

//creating a structure and naming its tag as point 
struct Point {
    float x; //declaring member x and y as float
    float y;
} point1, point2; //creating variables point1 and point2

//creating a function to solve for midpoint
float solveMidpoint(struct Point point1, struct Point point2)
{
    float midpoint1, midpoint2;
    //separating values while calling on data from structure to solve for midpoint 1 and 2
    //inclcuding midpoint formula
    midpoint1=((point1.x + point2.x)/2);
    midpoint2=((point1.y + point2.y)/2);
    printf("Midpoint: %lf, %lf\n", midpoint1, midpoint2); //print results
}

//creating a function to solve for slope
float solveSlope(struct Point point1, struct Point point2)
{
    //inclcuding slope formula while calling on data from structure point
    float slope;
    slope = ((point1.y-point2.y)/point1.x - point2.x);
    return slope;
}

//creating a function to solve for distance
float solveDistance(struct Point point1, struct Point point2)
{
    float distance;
    //inclcuding distance formula while calling on data from structure point
    //utilize sqrt from math.h library to solve faster
    distance = sqrt((point1.x - point2.x) * (point1.x - point2.x) + (point1.y-point2.y) *(point1.y-point2.y));
    return distance;
}

//creating a function to get Slope Intercept Form
void getSlopeInterceptForm (struct Point point1, struct Point point2)
{
    float m, b;
    //include formula of slope and keep it in variable m
    //include formula of getting y-int in variable b
    m = ((point1.y-point2.y)/point1.x - point2.x);
    b = point1.y - ((point1.y-point2.y)/point1.x - point2.x) * point1.x;
    printf("y = %lfx+(%lf)", m,b); //print results
}

int main()
{
    struct Point; //call on structure Point
    //ask for user inputs for both points
    printf("Enter x and y for point 1: ");
    scanf("%f%f", &point1.x, &point1.y);
    printf("Enter x and y for point 2: ");
    scanf("%f%f", &point2.x, &point2.y);
    printf("\n");

    //call on all variables created earlier while carrying user input as arguments then print
    printf("Slope: %lf\n", solveSlope(point1, point2));
    solveMidpoint(point1, point2);
    printf("Distance between 2 points: %lf\n", solveDistance(point1, point2));
    getSlopeInterceptForm(point1, point2);
    printf("\n");
    return 0;//terminate program
}