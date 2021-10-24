//    Solution to exercise 2.16 from the book C How to Program.

//    Copyright (C) 2021 Henrik Samuelsson

//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.

//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//    GNU General Public License for more details.

//    You should have received a copy of the GNU General Public License
//    along with this program. If not, see <https://www.gnu.org/licenses/>.

#include <stdio.h>

int main(void)
{
    // Ask user to enter two numbers.
    printf("Enter two integer numbers: ");

    int num1;    // Storage for first number.
    int num2;    // Storage for second number.

    // Obtain the numbers from the user.
    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;           // Calculate sum.
    int product = num1 * num2;       // Calculate product.
    int difference = num1 - num2;    // Calculate difference.
    int quotient = num1 / num2;      // Calculate quotient.
    int remainder = num1 % num2;     // Calculate remainder.

    // Print out the results of all the calculations.
    printf("sum = %d\n", sum);
    printf("product =  %d\n", product);
    printf("difference = %d\n", difference);
    printf("quotient = %d\n", quotient);
    printf("remainder = %d\n", remainder);
}
