# Tetration

Anthony is just now learning basic math, how exciting! He first learns about addition

![](https://i.imgur.com/ZDQ91U5.png)

then multiplication

![](https://i.imgur.com/g2WI73X.png)

exponentiation

![](https://i.imgur.com/5nAYL9o.png)

and finally, _tetration_

![](https://i.imgur.com/aq8Kibt.png)

Very quickly, Anthony becomes interested in infinite tetrations, namely

![](https://i.imgur.com/VFZQpLU.png)

Anthony wonders, given an arbitrary real number _**N**_, what is the solution to ![](https://i.imgur.com/pReI5aX.png)? Unable to figure it out, Anthony has asked you to write a program to help him!

Here's a fun fact: A solution only exists for **(1/e)** ≤ _**N**_ ≤ **e**.

## Input

The first line of input contains one real number _**N**_, **0.36788** ≤ _**N**_ ≤ **2.718281**.

## Output

Output a single line containing a real number _**a**_, such that ![](https://i.imgur.com/pReI5aX.png). Your answer will be considered correct if its absolute or relative error doesn't exceed **10⁻⁵**.

## Examples

Sample Input | Sample Output
-|-
`2.000000` | `1.414214`
`1.000000` | `1.000000`
`1.500000` | `1.310371`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB