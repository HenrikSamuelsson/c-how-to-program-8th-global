# Solution 2.2

Self-review exercise solution about basic introductory C programming concepts.

## a)

The function `printf` will not automatically always begin printing at the beginning of a new line. Assume for example the following statements.

``` C
printf("%s", "part 1");
printf("%s", "part 2");
```

The output of part 2 will not end on a new line, the output will instead become:

```bash
part 1part 2
```

## b)

Text on a line after the comment prefix `//` have no effect on the program execution. Comments are only used to explain and clarify how and what the code does.

## c)

The escape sequence `\n` when used in a `printf` format control string causes the cursor to position to the beginning of the next line on the screen.

## d)

In C all variables must be defined before they are used.

## e)

In C all variables must be given a type when they are defined.

## f)

The casing matters in C hence so will the variables `number` and `NuMbEr` not be identical.

## g)

Variable definitions can appear anywhere in the body of a function as long as the variable is not used until after the definition. Note that this holds for newer versions of the C standard but was not the case for older versions.

## h)

All arguments following the format control string `printf` function must not be preceded by an ampersand (&). Take for example the following `printf` statement that will compile just fine.

``` C
printf("Your age is %d", age);
```

## i)

The arithmetic operators `*`, `/`, `%`, `+` and `-` does not have the same level of precedence.

The set of arithmetic operators `*`, `/`, and `%` have the same level of precedence. And the set of arithmetic operators `+` and `-` have the same level of precedence. The first mentioned set have higher level of precedence than the second set.

## j)

There is no relation between the number of lines of output and the number of `printf` statements because each `/n` in the printf will cause the cursor to move to a new line and a `printf` statement can have multiple of these.
