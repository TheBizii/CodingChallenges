# Sibice

Young Mirko threw matches all over the floor of his room.

His mom did not like that and ordered him to put all the matches in a box. Mirko soon noticed that not all of the matches on the floor fit in the box, so he decided to take the matches that don’t fit and throw them in the neighbour’s garbage, where his mom (hopefully) won’t find them.

Help Mirko determine which of the matches fit in the box his mom gave him. A match fits in the box if its entire length can lie on the bottom of the box. Mirko examines the matches one by one.

## Input

The first line of input contains an integer _**N**_ (**1** ≤ _**N**_ ≤ **50**), the number of matches on the floor, and two integers _**W**_ and _**H**_, the dimensions of the box (**1** ≤ _**W**_ **100**, **1** ≤ _**H**_ ≤ **100**). 

Each of the following _**N**_ lines contains a single integer between **1** and **1000** (inclusive), the length of one match.

## Output

For each match, in the order they were given in the input, output on a separate line “DA” if the match fits in the box or “NE” if it does not.

## Examples
-|-
`5 3 4`<br>`3`<br>`4`<br>`5`<br>`6`<br>`7` | `DA`<br>`DA`<br>`DA`<br>`NE`<br>`NE`
`2 12 17`<br>`21`<br>`20` | `NE`<br>`DA`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB