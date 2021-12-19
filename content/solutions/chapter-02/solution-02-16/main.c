// Exercise solution 2.16, C How to Program, Global Edition, 8th Edition.
//
// Copyright (c) 2021 Henrik Samuelsson.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 3.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.
//
#include <stdio.h>

int main(void)
{
    // Prompt user to enter two numbers.
    printf("%s", "Enter two integer numbers: ");

    int num1;    // Storage for first number.
    int num2;    // Storage for second number.

    // Obtain the numbers from the user.
    scanf_s("%d %d", &num1, &num2);

    int sum = num1 + num2;           // Calculate sum.
    int product = num1 * num2;       // Calculate product.
    int difference = num1 - num2;    // Calculate difference.
    int quotient = num1 / num2;      // Calculate quotient.
    int remainder = num1 % num2;     // Calculate remainder.

    // Print out results of all the calculations.
    printf("sum = %d\n", sum);
    printf("product =  %d\n", product);
    printf("difference = %d\n", difference);
    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", remainder);
}
