# Cudoviste

Mirko got his driver’s license! To celebrate that joyous occasion, his parents bought him his first car: a monster truck! Mirko found out that even though having a car that can squash all other cars is nice in traffic jams, parking a car that is the size of 4 normal cars can be a bit tricky.

His friend, Slavko, works part time in the city parking company. He periodically sends Mirko a map of the city with occupied parking spaces marked. The map can be represented as a table with R rows, C columns each. Each cell can contain a building (symbol ‘#’), a parked car (symbol ‘X’) or a free parking space (symbol ‘.’). A monster truck is quite huge, 2 by 2 cells to be exact.

Help Mirko calculate the number of possible parking spaces grouped by the number of cars he needs to squash to park in them. We are only interested in the number of cars Mirko will squash on the parking space, not the number of cars he will squash on the way over. However, Mirko can’t park on a building. Not even a monster truck is large enough to squash buildings!

## Input

The first line of input contains two integers, _**R**_ and _**C**_ (**2** ≤ _**R**_, _**C**_ ≤ **50**), the number of rows and columns of the map. The next _**R**_ lines contain _**C**_ characters each. Only characters ‘#’, ‘X’ and ‘.’ appear in the input. Note that ‘X’ will always be capital.

## Output

The output consists of five lines, the total number of parking spaces Mirko can park on if he squashes **0** cars (first line), **1** car (second line), **2** cars (third line), **3** cars (fourth line), **4** cars (fifth line).

## Examples

Sample Input | Sample Output
-|-
`4 4`<br>`#..#`<br>`..X.`<br>`..X.`<br>`#XX#` | `1`<br>`1`<br>`2`<br>`1`<br>`0`
`4 4`<br>`....`<br>`....`<br>`....`<br>`....` | `9`<br>`0`<br>`0`<br>`0`<br>`0`
`4 5`<br>`..##.`<br>`.#XX.`<br>`..#..`<br>`.....` | `2`<br>`1`<br>`1`<br>`0`<br>`1`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB