
#include <stdio.h>
#include <math.h>

int main()
{
    //Programming Lab 1: My Name
    printf("Programming Lab 1: My Name\n");
    
    printf("+-------------+\n");
    printf("|             |\n");
    printf("|    Ayden    |\n");
    printf("|             |\n");
    printf("+-------------+\n");

    //Programming Assignment 1: Make a Circle!
    printf("\n\nProgramming Assignment 1: Make a Circle!\n");

    printf("Welcome to my program!\n");
    
    double circleRadius;
    
    printf("Enter Circle Radius: ");
    scanf("%lf", &circleRadius);
    
    printf("Circle Radius: %f\n", circleRadius);
    printf("Circle Diameter: %f\n", 2 * circleRadius);
    printf("Circle Circumference: %f\n", 3.1415 * 2 * circleRadius);
    printf("Circle Area: %f\n", 3.1415 * pow(circleRadius, 2));

    //Programming Assignment 2: Miles Per Gallon
    printf("\n\nProgramming Assignment 2: Miles Per Gallon\n");


    printf("Welcome to my program!\n");
    
    double usedGallons;
    double drivenMiles;
    
    printf("Enter the gallons used (-1 to end): ");
    scanf("%lf", &usedGallons);

    printf("Enter the miles driven: ");
    scanf("%lf", &drivenMiles);

    printf("The miles / gallon for this tank was %f\n", drivenMiles / usedGallons);

    return 0;
}

