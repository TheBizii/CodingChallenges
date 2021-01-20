# School Spirit

As the coach of your university’s ICPC teams, you encourage your students to solve as many Kattis problems as possible. This has numerous benefits — for example, it helps improve students’ competitive programming skills, and it also creates a strong sense of school spirit. The main reason for the latter is that each time a student solves a problem, not only does that student’s individual Kattis score increase, but so does the group score for your university. It is fun and motivating for your students (and you) to watch your university move up in the Kattis rankings.

The collective score for a group of n Kattis users is calculated as follows: Let _**s₀**_, _**s₁**_, …, _**sₙ₋₁**_ be the the _**n**_ individual scores in non-increasing order (i.e., _**s₀**_ ≥ _**s₁**_ ≥ _**s₂**_ ≥ … ≥ _**sₙ₋₁**_). Then the group score is

![](https://i.imgur.com/IFp12hn.png)

So, for example, if _**n**_ = 3 and the individual scores are _**s₀**_ = 500 , _**s₁**_ = 120, _**s₂**_ = 75, then the group score is

`1/5 * (500 * 1 + 120 * (4/5) + 75 * (16/25)) = 128.8`

Thanks to Kattis, being an ICPC coach seems pretty easy, but sometimes you worry that the school spirit fostered by the Kattis ranking system is not enough to retain all your students. What if one of your students transfers to another university and, as a result, changes university affiliation on Kattis? How will this affect the group score for your university?

Actually, what you really want to know is the average new group score if exactly one of your students leaves. More precisely, if your students’ scores are _**s₀**_ ≥ _**s₁**_ ≥ _**s₂**_ ≥ … ≥ _**sₙ₋₁**_, let _**gᵢ**_ be the new group score for your university if the student with score si leaves (and the other (n − 1) students remain). What is the average value of _**gᵢ**_ over all all _**n**_ students?

## Input

The first line of input contains an integer, _**n**_ (**2** ≤ _**n**_ ≤ **50**), the number of student competitive programmers at your university (all of whom use Kattis, of course). This is followed by _**n**_ lines, each containing one of your students’ Kattis scores. These scores are listed in non-increasing order, and each score is an integer between 1 and 10000, inclusive.

## Output

Output two lines. On the first line, print your university’s current Kattis group score. On the second line, print the average of the _**gᵢ**_ values as described above. Your output will be considered correct if each value is within **10⁻⁶** of the corresponding official value. (Note that although Kattis reports every score with exactly one digit after the decimal point, you should not round your answers.)

## Examples

Sample Input | Sample Output
-|-
`3`<br>`500`<br>`120`<br>`75` | `128.8`<br>`89.06666666666666`
`2`<br>`100`<br>`100` | `36.0`<br>`20.0`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB