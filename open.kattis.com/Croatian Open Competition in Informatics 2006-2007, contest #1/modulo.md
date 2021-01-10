# Modulo

Given two integers _**A**_ and _**B**_, _**A**_ modulo _**B**_ is the remainder when dividing _**A**_ by _**B**_. For example, the numbers **7**, **14**, **27** and **38** become **1**, **2**, **0** and **2**, modulo **3**. Write a program that accepts 10 numbers as input and outputs the number of distinct numbers in the input, if the numbers are considered modulo **42**.

## Input

The input will contain 10 non-negative integers, each smaller than **1000**, one per line.

## Output

Output the number of distinct values when considered modulo **42** on a single line.

## Explanation of Sample Inputs

In sample input 1, the numbers modulo 42 are 1, 2, 3, 4, 5, 6, 7, 8, 9 and 10.

In sample input 2, the numbers modulo 42 are 0.

In sample input 3, the numbers modulo 42 are 39, 40, 41, 0, 1, 2, 40, 41, 0 and 1. There are 6 distinct values.

## Examples

Sample Input | Sample Output
-|-
`1`<br>`2`<br>`3`<br>`4`<br>`5`<br>`6`<br>`7`<br>`8`<br>`9`<br>`10` | `10`
`42`<br>`84`<br>`252`<br>`420`<br>`840`<br>`126`<br>`42`<br>`84`<br>`420`<br>`126` | `1`
`39`<br>`40`<br>`41`<br>`42`<br>`43`<br>`44`<br>`82`<br>`83`<br>`84`<br>`85` | `6`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB