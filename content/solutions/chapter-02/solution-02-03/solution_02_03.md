# Solution 2.3

Solution for exercise where single C statements shall be constructed that will accomplish a given task.

## a)

Definition of the variables c, thisVariable, q76354 and number of type int.

```C
int c, thisVariable, q76354, number;
```

Note that it is often considered bad programming style to define more than one variable in a statement. It would hence be better to split this definitions into four different lines.

```C
 int c;
 int thisVariable; 
 int q76354; 
 int number;
```

## b)

Code to instruct an user to enter an integer, without new line after the prompt.

```C
printf("%s", "Enter an integer: ");
```

Alternative solution.

```C
printf("Enter an integer: ");
```
