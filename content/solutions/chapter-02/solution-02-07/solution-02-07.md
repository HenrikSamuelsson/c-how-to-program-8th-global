# Solution 2.7

Exercise where a series of statements with errors are to be corrected. First the erroneous statement is presented. Then follows a discussion. And finally a corrected version is suggested.

## a)

```C
scanf("&d", %value);
```

Intention is here to get an integer input into a variable called value.

The error in the code is that the usage of the % (format specifier) and the & (address-of operator) have been mixed up.

A corrected version can be the following.

```C
scanf("%d", &value);
```
