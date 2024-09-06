//********************************************************
// fracturing.c
// Author: Lydia Rinderknecht
// Date: 9/5/24
// Class: COP 3223C, Professor Parra
// Purpose: 
// Input: 
//
// Output: 
// //********************************************************

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.14159


double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();
void GetAndPrintTwoPoints(double *x1, double *y1, double *x2, double *y2);


int main (int argc, char **argv) 
{
    double distance = calculateDistance();
    printf("The distance between the two points is: %.2lf\n", distance);

    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
} //main

double askForUserInput()
{
    double a;
    scanf("%lf", &a);
    return a;
}

void GetAndPrintTwoPoints(double *x1, double *y1, double *x2, double *y2)
{
    printf("Enter x1:");
    *x1 = askForUserInput();
    printf("Enter y1:");
    *y1 = askForUserInput();
    printf("Enter x2:");
    *x2 = askForUserInput();
    printf("Enter y2:");
    *y2 = askForUserInput();
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", *x1, *y1);
    printf("Point #2 entered: x1 = %.2lf; y2 = %.2lf\n", *x1, *y2);
}

double calculateDistance()
{
    double x1, y1, x2, y2, distance;

    GetAndPrintTwoPoints(&x1, &y1, &x2, &y2);

    distance = sqrt(pow(x2-x1,2)+pow(y2-y1, 2));

    return distance;
}
double calculatePerimeter()
{
    double x1, y1, x2, y2, perimiter, distance;
    distance = calculateDistance();
    perimiter = PI * distance;

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimiter);
    return 2;
}


double calculateArea()
{
    double x1, y1, x2, y2, area, distance;
    distance = calculateDistance();
    area = pow((distance/2), 2) * PI;
    printf("The area of the city encompassed by your request is %.2lf\n", area); 
    return 1;
}

double calculateWidth()
{
    double x1, y1, x2, y2, width;
    GetAndPrintTwoPoints(&x1,&y1, &x2, &y2);
    width = abs(x2 - x1);
    printf("The area of the city encompassed by your request is %.2lf\n", width);
    return 1;
}
double calculateHeight()
{
    double x1, y1, x2, y2, height;
    GetAndPrintTwoPoints(&x1,&y1, &x2, &y2);
    height = abs(y2-y1);
    printf("The height of the city encompassed by your request is %.2lf\n", height);
    return 1;
}
