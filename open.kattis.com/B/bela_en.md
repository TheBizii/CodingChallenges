# Bela

Young Mirko is a smart, but mischievous boy who often wanders around parks looking for new ideas. This time he's come across pensioners playing the card game Belote. They've invited him to help them determine the total number of points in a game.

Each card can be uniquely determined by its number and suit. A set of four cards is called a hand. At the beginning of a game one suit that "trumps" any other is chosen, and it is called the dominant suit. The number of points in a game is equal to the sum of values of each card from each hand in the game. Mirko has noticed that the pensioners have played _**N**_ hands and that suit _**B**_ was the dominant suit.

The value of each card depends on its number and whether its suit is dominant, and is given in Table 1.

| ![](https://i.imgur.com/pkuaYmk.png) |
|:--:|
| **Table 1**: Scores |

Write a programme that will determine and output the number of points in the game.

## Input

The first line contains the number of hands _**N**_ (**1** ≤ _**N**_ ≤ **100**) and the value of suit _**B**_ (S, H, D, C) from the task. Each of the following **4_N_** lines contains the description of a card (the first character is the number of the _i_-th card (A, K, Q, J, T, 9, 8, 7) and the second is the suit (S, H, D, C)).

## Output

The first and only line of output must contain the number of points from the task.

Sample Input | Sample Output
-|-
`2 S`<br>`TH`<br>`9C`<br>`KS`<br>`QS`<br>`JS`<br>`TD`<br>`AD`<br>`JH` | `60`
`4 H`<br>`AH`<br>`KH`<br>`QH`<br>`JH`<br>`TH`<br>`9H`<br>`8H`<br>`7H`<br>`AS`<br>`KS`<br>`QS`<br>`JS`<br>`TS`<br>`9S`<br>`8S`<br>`7S` | `92`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB