# Solution 2.15

Below follows a series of C statements that are sequentially evaluated following the order of evaluation in C.

## a)

```C
x = 8 + 15 * ( 6 - 2 ) - 1;
x = 8 + 15 * 4 - 1;
x = 8 + 60 - 1;
x = 68 - 1;
x = 67;
```

Answer:  
Value of x will be 67.

## b)

```C
x = 5 % 5 + 5 * 5 - 5 / 5;
x = 0 + 5 * 5 - 5 / 5;
x = 0 + 25 - 5 / 5;
x = 0 + 25 - 1;
x = 25 - 1;
x = 24;
```

Answer:  
Value of x will be 24.

## c)

```C
x = ( 5 * 7 * ( 5 + ( 7 * 5 / ( 7 ) ) ) );
x = ( 5 * 7 * ( 5 + ( 7 * 5 / 7 ) ) );
x = ( 5 * 7 * ( 5 + ( 35 / 7 ) ) );
x = ( 5 * 7 * ( 5 + ( 5 ) ) );
x = ( 5 * 7 * ( 5 + 5 ) );
x = ( 5 * 7 * ( 10 ) );
x = ( 5 * 7 * 10 );
x = ( 35 * 10 );
x = ( 350 );
x = 350
```

Answer:  
Value of x will be 350.
