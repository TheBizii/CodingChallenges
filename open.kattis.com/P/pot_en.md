# Pot

The teacher has sent an e-mail to her students with the following task: "Write a program that will determine and output the value of _**X**_ if given the statement:

![](https://i.imgur.com/N8kK1gN.png)

and it holds that _number₁_, _number₂_... are integers, and _pow₁_, _pow₂_... are one-digit integers." Unfortunately, when the teacher downloaded the task to her computer, the text formatting was lost so the task transformed into a sum of _**N**_ integers:

![](https://i.imgur.com/IqrRZia.png)

For example, without text formatting, the original task in the form of _**X = 21² + 125³**_ became a task in the form of _**X = 212 + 1253**_. Help the teacher by writing a program that will, for given _**N**_ integers from P₁ to Pn determine and output the value of _**X**_ from the original task.

## Input
The first line of input contains an integer _**N**_ (_**1**_ <= _**N**_ <= _**10**_), the number of the addends from the task. Each of the following _**N**_ lines contains the integer _**Pi**_ (_**10**_ <= _**Pi**_ <= _**9999**_, _**i**_ = _**1**_, ..., _**N**_) from the task.

## Output
The first and only line of output must contain the value of _**X**_ (_**X**_ <= _**1.000.000.000**_) from the original task.

## Examples

Sample Input | Sample Output
-|-
`2`<br>`212`<br>`1253` | `1953566`
`5`<br>`23`<br>`17`<br>`43`<br>`52`<br>`22` | `102`
`3`<br>`213`<br>`102`<br>`45` | `10385`

