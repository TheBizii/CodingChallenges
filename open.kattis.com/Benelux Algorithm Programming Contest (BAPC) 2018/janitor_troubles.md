# Janitor Troubles

While working a night shift at the university as a janitor, you absentmindedly erase a blackboard covered with equations, only to realize afterwards that these were no ordinary equations! They were the notes of the venerable Professor E. I. N. Stein who earlier in the day solved the elusive maximum quadrilateral problem! Quick, you have to redo his work so no one noticed what happened.

The maximum quadrilateral problem is quite easy to state: given four side lengths _**s₁**_, _**s₂**_, _**s₃**_ and _**s₄**_, find the maximum area of any quadrilateral that can be constructed using these lengths. A quadrilateral is a polygon with four vertices.

## Input

The input consists of a single line with four positive integers, the four side lengths _**s₁**_, _**s₂**_, _**s₃**_, and _**s₄**_.

It is guaranteed that **2**_**sᵢ**_ < **∑⁴ⱼ₌₁** _**sⱼ**_, for all _**i**_, and that **1** ≤ _**sᵢ**_ ≤ **1000**.

## Output

Output a single real number, the maximal area as described above. Your answer must be accurate to an absolute or relative error of at most **10⁻⁶**.

## Examples

Sample Input | Sample Output
-|-
`3 3 3 3` | `9`
`1 2 1 1` | `1.299038105676658`
`2 2 1 4` | `3.307189138830738`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB