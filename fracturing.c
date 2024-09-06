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

#define PI 3.14159


double calculateDistance();
double calculatePerimeter();
double calculateArea();
double askForUserInput();
void GetAndPrintTwoPoints(double *x1, double *y1, double *x2, double *y2);


int main (int argc, char **argv) 
{
    calculatePerimeter();
    calculateArea();
    //double calculateWidth();
    //double calculateHeight();

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

    printf("The distance between the two points is: %.2lf\n", distance);

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

/*• Disclaimer: Must use a function (like calculateDistance)
within to avoid repeating code.
double calculateWidth();
• Arguments: This function have no arguments.
• Output: This function should output three lines of text
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The width of the city encompassed by your request
is -whatever is computed-
• Return: A double indicating how difficult you found to
do this function on a scale of 1.0 through 5.0 where 1 is
easy and 5 is hard
double calculateHeight();
• Arguments: This function have no arguments.
• Output: This function should output three lines of text
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The height of the city encompassed by your request
is -whatever is computed-
• Return: A double indicating how difficult you found to
do this function on a scale of 1.0 through 5.0 where 1 is
easy and 5 is hard */