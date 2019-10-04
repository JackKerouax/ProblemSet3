# Problem Set 3

Start Date and Time| Due Date and Time | Cut-off Date and Time |
---|---|---|
10:50:00 AM on September 27, 2019 | 11:59:59 PM on October 3, 2019 | 12:00:00 AM on October 11, 2019 |

## Reading
- Read the C Programming Language book:
	- Chapter 3.1 ~ 3.7
	- Chapter 4.1, 4.3, 4.4, 4.6, 4.7, 4.8
	- Chapter 1.7, 1.10
		
## Problem 3.1
- Create a file named `ProblemSet3.1.c`.
- Write a switch statement that translates pitch classes A through G, represented with character data type, into corresponding integer intervals. A note `'C'` should be `0` and a note `'B'` should be  11. (*Hint: Chapter 0 in the Audio Programming Book)
- Print the result using `printf`.
- Notes with `#` and `b` does not need to be implemented in this problem. Only the white keys on piano need to be implemented.

## Problem 3.2
- Create a file named `ProblemSet3.2.c`.
- Include `math.h` in the program.
- Use the `sin` function and `for` loop to generate a single cycle (period) of a sine wave. The loop should stop when the increment variable reaches 1000. The phase of the sine wave should increment every step until it reaches 2π radians. (*Hint: Chapter 1.9.2 in the Audio Programming book)
- Use `printf` to print out the value of sine wave every step.

## Problem 3.3
- Create a file named `ProblemSet3.3.c`.
- Write a function called `findPrimeNumber` that finds all prime numbers less than 1000.
- Test the function in the `main()` function.
- Print the prime numbers using `printf()`.

## Grading Rubric
Description|Grade
---|---:|
No compilation warning or error| 10%
Clean, understandable, commented, and organized | 20%
Thoroughly documented in README.md | 20%
Correctly implemented | 50%
**Total** | **100%**

## Submission Guideline
- Make sure you have a folder with your name at the root directory of the repository.
- Create a folder name with the right problem set number (i.e. `Problem Set 1`) within the folder that has your name.
- Please follow the example `README.md` file in `Akito van Troyer/Problem Set 1/` for documenting your problem set.
- Commit and push C files and README.md for this problem set into the newly created folder to complete the problem set.

## Submission policy:
- All problem must be submitted to: https://github.com/navreyort/EP-353-FA2019
- Late projects will incur a penalty of 10% for each day it is late.
- Problem sets and projects are due by 11:59:59pm on the date specified
- After 12:00:00am (the next day after the due day), your problem sets/projects is one day late (-10%).
- After the next 12:00:00am cycle (two days after the due day), your problem sets/projects is two days late (-20%).
- Problem sets and projects will not be accepted after 12:00:00am at one week after the deadline

--- 
**Berklee College of Music**  
Electronic Production and Design  
EP-353: Audio Programming in C  
Fall 2019