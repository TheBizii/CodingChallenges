# Quick Estimates

Let’s face it... you are not that handy. When you need to make a major home repair, you often need to hire someone to help. When they come for the first visit, they make an estimate of the cost. Here they must be careful: if they overestimate the cost, it might scare you off, but if they underestimate, the work might not be worth their time.

Because the worker is so careful, it can take a long time for them to produce the estimate. But that’s frustrating — when you ask for an estimate, you really are asking for the magnitude of the cost. Will this be $10 or $100 or $1000? That’s all you really want to know on a first visit.

Please help the worker make the type of estimate you desire. Write a program that, given the worker’s estimate, reports just the magnitude of the cost — the number of digits needed to represent the estimate.

## Input

Input begins with a line containing an integer _**N**_ (**1** ≤ _**N**_ ≤ **100**). The next _**N**_ lines each contain one estimated cost, which is an integer between **0** and **10^100**. (Some of the workers overcharge quite a bit.)

## Output

For each estimated cost, output the number of digits required to represent it.

## Examples

Sample Input | Sample Output
-|-
`5`<br>`314`<br>`1`<br>`5926`<br>`5`<br>`35897` | `3`<br>`1`<br>`4`<br>`1`<br>`5`
`3`<br>`0`<br>`10`<br>`100` | `1`<br>`2`<br>`3`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB