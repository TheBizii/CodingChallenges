# Dice Cup

In many table-top games it is common to use different dice to simulate random events. A "d" or "D" is used to indicate a dice with a specific number of faces, _d4_ indicating a four-sided dice, for example. If several dice of the same type are to be rolled, this is indicated by a leading number specifying the number of dice. Hence, _2d6_ means the player should roll two six-sided dice and sum the result face values.

## Task

Write a program to compute the most likely outcomes for the sum of two dice rolls. Assume each dice has numbered faces starting at 1 and that each face has equal roll probability.

## Input

The input consists of a single line with two integer numbers, _**N**_, _**M**_, specifying the number of faces of the two dice.

## Constraints

**4** ≤ _**N**_, _**M**_ ≤ **20**, number of faces.

## Output

A line with the most likely outcome for the sum; in case of several outcomes with the same probability, they must be listed from lowest to highest value in separate lines.

## Examples

Sample Input | Sample Output
-|-
`6 6` | `7`
`6 4` | `5`<br>`6`<br>`7`
`12 20` | `13`<br>`14`<br>`15`<br>`16`<br>`17`<br>`18`<br>`19`<br>`20`<br>`21`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB
