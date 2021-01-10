# Judging Moose

When determining the age of a bull moose, the number of tines (sharp points), extending from the main antlers, can be used. An older bull moose tends to have more tines than a younger moose. However, just counting the number of tines can be misleading, as a moose can break off the tines, for example when fighting with other moose. Therefore, a point system is used when describing the antlers of a bull moose.

The point system works like this: If the number of tines on the left side and the right side match, the moose is said to have the even sum of the number of points. So, “an even 6-point moose”, would have three tines on each side. If the moose has a different number of tines on the left and right side, the moose is said to have twice the highest number of tines, but it is odd. So “an odd 10-point moose” would have 5 tines on one side, and 4 or less tines on the other side.

Can you figure out how many points a moose has, given the number of tines on the left and right side?

## Input

The input contains a single line with two integers _**l**_ and _**r**_, where **0** ≤ _**l**_ ≤ **20** is the number of tines on the left, and **0** ≤ _**r**_ ≤ **20** is the number of tines on the right.

## Output

Output a single line describing the moose. For even pointed moose, output “Even x” where x is the points of the moose. For odd pointed moose, output “Odd x” where x is the points of the moose. If the moose has no tines, output “Not a moose”.

## Examples

Sample Input | Sample Output
-|-
`2 3` | `Odd 6`
`3 3` | `Even 6`
`0 0` | `Not a moose`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB