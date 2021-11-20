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

Intention is here to find the largest number by updating the variable `largest` if the value of the variable `number` is larger or equal to the value that `largest` holds.

First error is that there is a semicolon after the `if` statement causing the second statement to always be executed regardless of the result of the comparison in the if statement.

Second error is that comparison operator `==` is used instead of the assignment operator `=`.

A corrected version can be the following.

```C
if (number >= largest)
    largest = number;
```