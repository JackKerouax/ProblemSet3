## Problem 3.3
- Create a file named `ProblemSet3.3.c`.
- Write a function called `findPrimeNumber` that finds all prime numbers less than 1000.
- Test the function in the `main()` function.
- Print the prime numbers using `printf()`.

In this problem, I created a function first to check if a number is prime number or not. I used the if statement inside a for loop to detect the remainder of number divided by any number from 2 to number/2, if number (num) is divisble by any number from 2 to num/2. Then the number will not be prime.

Then I created another if statement inside a for loop to actually printout all the prime number from 1 to the input value.