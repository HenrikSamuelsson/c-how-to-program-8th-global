# Solution 2.7

Exercise where a series of statements with errors are to be corrected. First the erroneous statement is presented. Then follows a discussion. And finally a corrected version is suggested.

## a)

```C
scanf("&d", %value);
```

Intention is here to get an integer input into a variable called `value`.

The error in the code is that the usage of the `%` (format specifier) and the `&` (address-of operator) have been mixed up.

A corrected version can then be the following.

```C
scanf("%d", &value);
```

## b)

```C
printf("The sum of %c and %c is %c /n", x, y);
```

Intention here is to present the result of an addition that have been calculated.

Main error is that three values are to be printed but only two are provided. Besides `x` and `y` so will a third value holding the sum be needed.

Secondary error is the usage of format specifier `%c`. This is used to print characters but since the sum of an addition is to be presented so are `x` and `y` probably some kind of number. Lets assume that `x` and `y` are integers and use the format specifier `%d` instead.

A corrected version can then be the following.

```C
printf("The sum of %d and %d is %d /n", x, y, sum);
```

## c)

```C
a + b + c = sum;
```

Intention here is to add up values and place the result in a variable called `sum`.

The error is that order have been mixed up. The `sum` shall be on the left side of the `=` and the calculation goes on the right side.

A corrected version can be the following.

```C
sum = a + b + c;
```

## d)

```C
if (number >= largest);
    largest == number;
```

Intention is here to find the largest number by updating the variable `largest` if the value of the variable `number` is larger.

First error is that there is a semicolon after the `if` statement causing the second statement to always be executed regardless of the result of the comparison in the if statement.

Second error is that comparison operator `==` is used instead of the assignment operator `=`.

Finally it can be argued that the comparison in the if statement can use `>` instead of `>=` since there is no need to do the assignment if the two variables are already equal.

A corrected version can be the following.

```C
if (number > largest)
    largest = number;
```

## e)

```C
\\ Program to determine the largest of three integers
```

Intention is here to add a comment to the source code but back slashes have been used instead of forward slashes.

It is unfortunately common to not use punctuation in comments. This is just due to plain laziness. Comments are written in English and should hence use punctuation because this is part of the English language.

A corrected version can be the following.

```C
// Program to determine the largest of three integers.
```

## f)

```C
scanf("%f", float);
```

Intention is here to get input in the form of a floating point number. The input shall be stored in a variable called `float`.

First error is tha `float` is a reserved keyword in C used to declare a variable as a floating point number. It is not possible to name a variable to any of the reserved keywords.

Second error is that 'scanf' takes the address of an variable as argument and not the name of the variable, the address of operator will hence need to be added.

A corrected version can be the following.

```C
scanf("%f", &myFloat);
```
