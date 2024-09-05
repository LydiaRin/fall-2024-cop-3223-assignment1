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


double calculateDistance();
double askForUserInput();

int main (int argc, char **argv) {

    calculateDistance();
    //double calculatePerimeter();
    //double calculateArea();
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
double calculateDistance()
{
    
    double x1 = askForUserInput();
    double y1 = askForUserInput();
    double x2 = askForUserInput();
    double y2 = askForUserInput();
    double distance;
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1, 2));
    printf("Point #1 entered: x1 = %.2fl; y1 = %.2lf", x1, y1);
    printf("Point #1 entered: x1 = %.2fl; y2 = %.2lf", x1, y2);

    printf("The distance between the two points is: %.2lf", distance);

    return distance;
}

/*double calculateDistance();
• Arguments: This function have no arguments.
• Output: This function should output three lines of text.
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The distance between the two points is -whatever is
computed-
• Return: A double representing the distance.
double calculatePerimeter();
• Arguments: This function have no arguments.
• Output: This function should output two lines of text.
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The perimeter of the city encompassed by your request
is -whatever is computed-
• Return: A double indicating how difficult you found to
do this function on a scale of 1.0 through 5.0 where 1 is
easy and 5 is hard
• Disclaimer: Must use a function (like calculateDistance)
within to avoid repeating code.
double calculateArea();
5
• Arguments: This function have no arguments.
• Output: This function should output three lines of text
– Point #1 entered: x1 = -whatever was entered-; y1
= -whatever was entered-
– Point #2 entered: x2 = -whatever was entered-; y2
= -whatever was entered-
– The area of the city encompassed by your request is
-whatever is computed-
• Return: A double indicating how difficult you found to
do this function on a scale of 1.0 through 5.0 where 1 is
easy and 5 is hard
• Disclaimer: Must use a function (like calculateDistance)
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