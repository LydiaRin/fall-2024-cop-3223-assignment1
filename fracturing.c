//********************************************************
// fracturing.c
// Author: Lydia Rinderknecht
// Date: 9/5/24
// Class: COP 3223C, Professor Parra
// Purpose: This program calculates the distance, perimeter, 
// area, width, and height of a "city" based on two user-provided points.
// Input: x1, y1, x2, y2 (coordinates of the two points).
// Output: The calculated values of distance, perimeter, area, width, and height.
//********************************************************

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159

// Function prototypes

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();
void GetAndPrintTwoPoints(double *x1, double *y1, double *x2, double *y2);

int main (int argc, char **argv) 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
} //main

//********************************************************
// double askForUserInput()
// Purpose: Reads a double value from the user.
// Output: The user input value.
//********************************************************

double askForUserInput()
{
    double a;
    scanf("%lf", &a);
    return a;
}

//********************************************************
// void GetAndPrintTwoPoints(double *x1, double *y1, 
//                           double *x2, double *y2)
//
// Purpose: Reads two points (x1, y1, x2, y2) from the user 
// and prints them.
// Input: Pointers to x1, y1, x2, y2.
// Output: Prints the entered points.
//
// Precondition: User must provide valid numerical values.
// Postcondition: User's inputs are stored in the locations
//               pointed to by x1, y1, x2, y2
//********************************************************

void GetAndPrintTwoPoints(double *x1, double *y1, double *x2, double *y2)
{
    printf("Enter x1: ");
    *x1 = askForUserInput();
    printf("Enter y1: ");
    *y1 = askForUserInput();
    printf("Enter x2: ");
    *x2 = askForUserInput();
    printf("Enter y2: ");
    *y2 = askForUserInput();
}

//********************************************************
// double calculateDistance()
//
// Purpose: Calculates the distance between two points.
// Output: The calculated distance between the points.
//
// Precondition: User must enter valid numerical values for 
//               x1, y1, x2, y2.
// Postcondition: Distance between the two points is 
//                calculated and returned
//********************************************************

double calculateDistance()
{
    double x1, y1, x2, y2, distance;

    GetAndPrintTwoPoints(&x1, &y1, &x2, &y2);
    
    printf("\nPoint #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n\n", x2, y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
    printf("The distance between the two points is: %.2lf\n", distance); 

    return distance;
}

//********************************************************
// double calculatePerimeter()
//
// Purpose: Calculates the perimeter using the distance between two
//           points as the diameter and prints the result.
//
// Precondition: calculateDistance() must be correctly implemented
//               and return a valid distance value.
//
// Postcondition: The perimeter of the city, based on the distance, 
//                 is calculated and printed.
//********************************************************

double calculatePerimeter()
{
    double x1, y1, x2, y2, perimiter, distance;
    distance = calculateDistance();
    perimiter = PI * distance;

    printf("The perimeter of the city encompassed by your request is %.2lf\n\n", perimiter);
    return 2.0; //difficulty rating
}

//********************************************************
// double calculateArea()
//
// Purpose: Calculates the area of a circle using the distance 
//          between two points as the diameter and prints the
//          results.
//
// Precondition: calculateDistance() must be correctly implemented 
//                and return a valid distance value.
//
// Postcondition: The area of the circle, based on the diameter provided
//                by calculateDistance(), is calculated and printed.
//********************************************************

double calculateArea()
{
    double x1, y1, x2, y2, area, distance;
    distance = calculateDistance();
    area = pow((distance/2), 2) * PI;
    printf("The area of the city encompassed by your request is %.2lf\n\n", area); 
    return 2.0; //difficulty rating
}

//********************************************************
// double calculateWidth()
//
// Purpose: Calculates the width between two points using 
//          their x-coordinates and prints results.
//
// Precondition: The function GetAndPrintTwoPoints() must be 
//               correctly implemented.
//
// Postcondition: The width, defined as the absolute difference 
//                between the x-coordinates of the two points, 
//                is calculated and printed.
//********************************************************

double calculateWidth()
{
    double x1, y1, x2, y2, width;
    GetAndPrintTwoPoints(&x1, &y1, &x2, &y2);
    width = abs(x2 - x1);
    printf("The width of the city encompassed by your request is %.2lf\n\n", width);
    return 1.5; //difficulty rating
}

//********************************************************
// double calculateHeight()
//
// Purpose: Calculates the height between two points using 
//          their y-coordinates and prints results.
//
// Precondition: The function GetAndPrintTwoPoints() must be 
//               correctly implemented.
//
// Postcondition: The height, defined as the absolute difference 
//                between the y-coordinates of the two points, 
//                is calculated and printed.
//********************************************************

double calculateHeight()
{
    double x1, y1, x2, y2, height;
    GetAndPrintTwoPoints(&x1, &y1, &x2, &y2);
    height = abs(y2 - y1);
    printf("The height of the city encompassed by your request is %.2lf\n\n", height);
    return 1.0; //difficulty rating
}
