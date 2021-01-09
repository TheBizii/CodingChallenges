# Number Fun

Ms. Greene is trying to design a game for her third-grade class to practice their addition, subtraction, multiplication, and division. She would like for every student in her class to be able to “think mathematically” and determine if any two given numbers can be added, subtracted, multiplied, or divided in any way to produce a third given number. However, she would like to be able to check her students’ work quickly without having to think about it herself.

Help Ms. Greene by writing a program that inputs two given numbers and determines whether or not it is possible to add, subtract, multiply, or divide those two numbers in any order to produce the third number. Only one operation may be used to produce the third number.

## Input

Each input file will start with a single integer _**N**_ (**1** ≤ _**N**_ ≤ **10 000**) denoting the number of test cases. The following _**N**_ lines will contain sets of 3 numbers _**a**_, _**b**_, _**c**_ (**1** ≤ _**a**_, _**b**_, _**c**_ ≤ **10 000**).

## Output

For each test case, determine whether or not it is possible to produce the third number, _**c**_, using the first two numbers, _**a**_ and _**b**_, using addition, subtraction, multiplication, or division.

## Examples

Sample Input | Sample Output
-|-
`6`<br>`1 2 3`<br>`2 24 12`<br>`5 3 1`<br>`9 16 7`<br>`7 2 14`<br>`12 4 2` | `Possible`<br>`Possible`<br>`Impossible`<br>`Possible`<br>`Possible`<br>`Impossible`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB