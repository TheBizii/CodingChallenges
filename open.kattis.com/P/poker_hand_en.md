# Poker Hand

You are given a five-card hand drawn from a standard 52-card deck. The strength of your hand is the maximum value _**k**_ such that there are _**k**_ cards in your hand that have the same rank.

Compute the strength of your hand.

## Input

The input will consist of a single line, with five two-character strings separated by spaces.

The first character in each string will be the rank of the card, and will be one of _A23456789TJQK_. The second character in the string will be the suit of the card, and will be one of _CDHS_.

You may assume all the strings are distinct.

## Output

Output, on a single line, the strength of your hand.

## Examples

Sample Input | Sample Output
-|-
`AC AD AH AS KD` | `4`
`2C 4D 4H 2D 2H` | `3`
`AH 2H 3H 4H 5H` | `1`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB