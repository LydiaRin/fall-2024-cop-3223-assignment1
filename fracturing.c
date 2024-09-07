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
// Purpose: Reads a double value from the user
// Output:none
// Postcondition: returns a
//********************************************************

double askForUserInput()
{
    double a;
    scanf("%lf", &a);
    return a;
}

//********************************************************
// void GetAndPrintTwoPoints(double *x1, double *y1, double *x2, double *y2)
//
// Purpose: Reads x1, x2, y1, y2 from the user.
// Output: each point's coordinates
// Precondition: pointsStored == 0
// Postcondition: User's inputs are stored in the locations
//               pointed to by x1, y1, x2, y2, 
//********************************************************

void GetAndPrintTwoPoints(double *x1, double *y1, double *x2, double *y2)
{
    static int pointsStored = 0;  // Keeps track of whether points are already stored
    static double storedX1, storedY1, storedX2, storedY2; //stored points from previous call

    if (!pointsStored) {
        printf("\nEnter x1: ");
        *x1 = askForUserInput();
        storedX1 = *x1;
        printf("Enter x2: ");
        *x2 = askForUserInput();
        storedX2 = *x2;
        printf("Enter y1: ");
        *y1 = askForUserInput();
        storedY1 = *y1;
        printf("Enter y2: ");
        *y2 = askForUserInput();
        storedY2 = *y2;
        pointsStored = 1;
    }
    else
    {
        *x1 = storedX1;
        *y1 = storedY1;
        *x2 = storedX2;
        *y2 = storedY2;   
    }
    
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", *x1, *y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", *x2, *y2);
    
}

//********************************************************
// double calculateDistance()
//
// Purpose: Calculates the distance between two points.
// Output: distance between points
// Precondition: Distance == 0.0
// Postcondition: Distance is calculated and returned
//********************************************************

double calculateDistance()
{
    static double distance = 0.0; //stores distance
    double x1, y1, x2, y2;

    GetAndPrintTwoPoints(&x1, &y1, &x2, &y2);

    if(distance == 0)
    {
        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
        printf("The distance between the two points is: %.3lf\n", distance);
    }
    return distance;
}

//********************************************************
// double calculatePerimeter()
//
// Purpose: Calculates the perimeter.
// Output: perimiter
// Precondition: calculateDistance() correctly implemented.
// Postcondition: The perimeter is calculated.
//********************************************************

double calculatePerimeter()
{
    double perimiter, distance;
    distance = calculateDistance();
    perimiter = PI * distance;

    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimiter);
    return 2.0; //difficulty rating
}

//********************************************************
// double calculateArea()
//
// Purpose: Calculates the area of a circle.
// Output: area
// Precondition: calculateDistance() correctly implemented.
// Postcondition: Area of the circle is calculated.
//********************************************************

double calculateArea()
{
    double area, distance;
    distance = calculateDistance();
    area = pow((distance/2), 2) * PI;
    printf("The area of the city encompassed by your request is %.3lf\n", area); 
    return 2.0; //difficulty rating
}

//********************************************************
// double calculateWidth()
//
// Purpose: Calculates the width between two points.
// Output: width
// Precondition: GetAndPrintTwoPoints() correctly implemented.
// Postcondition: The width is calculated.
//********************************************************

double calculateWidth()
{
    double x1, y1, x2, y2, width;
    GetAndPrintTwoPoints(&x1, &y1, &x2, &y2);
    width = abs(x2 - x1);
    printf("The width of the city encompassed by your request is %.3lf\n", width);
    return 1.5; //difficulty rating
}

//********************************************************
// double calculateHeight()
//
// Purpose: Calculates the height between two points.
// Output: height
// Precondition: GetAndPrintTwoPoints() correctly implemented
// Postcondition: The height is calculated,     
//********************************************************

double calculateHeight()
{
    double x1, y1, x2, y2, height;
    GetAndPrintTwoPoints(&x1, &y1, &x2, &y2);
    height = abs(y2 - y1);
    printf("The height of the city encompassed by your request is %.3lf\n", height);
    return 1.0; //difficulty rating
}
