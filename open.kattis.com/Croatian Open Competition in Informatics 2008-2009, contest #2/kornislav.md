# Kornislav

Kornislav the turtle never has anything interesting to do. Since he’s going to live for three hundred years, he keeps trying to find way to kill time. This weekend he started playing "enclose the largest rectangle".

To start with, Kornislav needs four positive integers. He tries to enclose a rectangle by moving in one direction, then turning 90 degrees, then walking in the new direction etc. Kornislav makes a total of three 90-degree turns and walks four segments.

When walking in some direction, the number of steps he takes must be equal to one of the four chosen integers and each integer must be used exactly once. Depending on the order in which Kornislav uses the integers, his walk will make various shapes, some of which don’t contain enclosed rectangles. Write a program that calculates the largest rectangle the turtle can enclose with its walk.

## Input

The first line contains four positive integers _**A**_, _**B**_, _**C**_ and _**D**_ (**0** < _**A**_, _**B**_, _**C**_, _**D**_ < **100**), the four chosen integers.

## Output

Output the largest area.

## Examples

Sample Input | Sample Output
-|-
`1 2 3 4` | `3`
`4 4 3 4` | `12`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB