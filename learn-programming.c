/*
 Module:	1
 Topic:		Tokens
 */


#include <stdio.h>

int main() {

	/*variable : it is the memory location where a data is stored.
	 It may change its value during the program. It is also known as Identifier in C.

	data type : it specifies the type of data that a variable can store.
	 It determines how much memory a variable will occupy in storage.

	 literals: it is a constant value.
	 */

	// Write a C program to find out the area of a circle
	// Formula to calculate area:Pi*radius*radius


	const float PI = 3.14;

	int radius = 30;
    radius = 54;
	float area = PI * radius * radius;

    printf("The area of the circle is %.2f sq units", area);

    /*constant : it is the name of the memory location where a fixed value is stored.
    Constants do not change their values during program execution.
    Similar to variable but with fixed value.*/

    return 0;
}
