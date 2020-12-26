# Take Two Stones

Alice and Bob are playing a new game of stones. There are *N* stones placed on the ground, forming a sequence. The stones are labeled from **1** to _**N**_.

Alice and Bob in turns take exactly two consecutive stones on the ground until there are no consecutive stones on the ground. That is, each player can take stone _i_ and stone _i_ + 1, where <img src="https://i.imgur.com/QYDRnah.png"/>. If the number of stone left is odd, Alice wins. Otherwise, Bob wins.

Assume both Alice and Bob play optimally and Alice plays first, do you know who the winner is?

## Input

The input contains an integer <img src="https://i.imgur.com/OCwqSNX.png"/>, the number of stones.

## Output

Output the winner, "Alice" or "Bob" (without the quotes), on a line.

## Examples

Sample Input | Sample Output
-|-
`1` | `Alice`
`2` | `Bob`
`5` | `Alice`

## Limits

**CPU Time limit**: 1 second
**Memory limit**: 1024 MB
