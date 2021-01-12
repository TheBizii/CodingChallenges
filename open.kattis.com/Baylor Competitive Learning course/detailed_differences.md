# Detailed Differences

One of the most basic problems in information processing is identifying differences between data. This is useful when comparing files, for example. For this problem, write a program which identifies the differences between pairs of strings to make it easier for humans to see the differences.

Your program should identify those characters which differ between the two given strings in a visually striking way. Output the two input strings on two lines, and then identify the differences on the line below using periods (for identical characters) and asterisks (for differing characters). For example:

ATCCGCTTAGAGGGATT
GTCCGTTTAGAAGGTTT
\*....\*.....\*..\*..

## Input

The first line of input contains an integer **1** ≤ _**n**_ ≤ **500**, indicating the number of test cases that follow. Each test case is a pair of lines of the same length, 1 to 50 characters. Each string contains only letters (a-z, A-Z) or digits (0-9).

## Output

For each test case, output the two lines in the order they appear in the input. Output a third line indicating similarities and differences as described above. Finally, output a blank line after each test case.

## Examples

Sample Input | Sample Output
-|-
`3`<br>`ATCCGCTTAGAGGGATT`<br>`GTCCGTTTAGAAGGTTT`<br>`abcdefghijklmnopqrstuvwxyz`<br>`bcdefghijklmnopqrstuvwxyza`<br>`abcdefghijklmnopqrstuvwxyz0123456789`<br>`abcdefghijklmnopqrstuvwxyz0123456789` | `ATCCGCTTAGAGGGATT`<br>`GTCCGTTTAGAAGGTTT`<br>`*....*.....*..*..`<br>` `<br>`abcdefghijklmnopqrstuvwxyz`<br>`bcdefghijklmnopqrstuvwxyza`<br>`**************************`<br>` `<br>`abcdefghijklmnopqrstuvwxyz0123456789`<br>`abcdefghijklmnopqrstuvwxyz0123456789`<br>`....................................`<br>` `

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB