# Zamka

The impossible has happened. Bear G, has fallen into his own trap. Lured by a delicious box of Domaćica, without even thinking, he rushed and fell into his trap. In order to get out of the trap, he must solve the following task with your help. You are given three integers _**L**_, _**D**_ and _**X**_.

* determine the minimal integer _**N**_ such that _**L**_ ≤ _**N**_ ≤ _**D**_ and the sum of its digits is _**X**_
* determine the maximal integer _**M**_ such that _**L**_ ≤ _**M**_ ≤ _**D**_ and the sum of its digits is _**X**_

Bear will be able to escape from the trap if he correctly determines numbers _**N**_ and _**M**_. The numbers _**N**_ and _**M**_ will always exist.

## Input

The first line of input contains the integer _**L**_ (**1** ≤ _**L**_ ≤ **10 000**), the number from the task. The second line of input contains the integer _**D**_ (**1** ≤ _**D**_ ≤ **10 000**, _**L**_ ≤ _**D**_), the number from the task. The third line of input contains the integer _**X**_ (**1** ≤ _**X**_ ≤ **36**), the number from the task.

## Output

The first line of output must containt integer _**N**_ from the task. The second line of output must contain the integer _**M**_ from the task.

## Examples

Sample Input | Sample Output
-|-
`1`<br>`100`<br>`4` | `4`<br>`40`
`100`<br>`500`<br>`12` | `129`<br>`480`
`1`<br>`10000`<br>`1` | `1`<br>`10000`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB
