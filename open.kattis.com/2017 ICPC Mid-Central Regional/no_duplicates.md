# No Duplicates

There is a game in which you try not to repeat a word while your opponent tries to see if you have repeated one.

"THE RAIN IN SPAIN" has no repeats.

"IN THE RAIN AND THE SNOW" repeats THE.

"THE RAIN IN SPAIN IN THE PLAIN" repeats THE and IN.

Write a program to test a phrase.

## Input

Input is a line containing words separated by single spaces, where a word consists of one or more uppercase letters. A line contains no more than 80 characters.

## Output

The output is "yes" if no word is repeated, and "no" if one or more words repeat.

## Examples

Sample Input | Sample Output
-|-
`THE RAIN IN SPAIN` | `yes`
`IN THE RAIN AND THE SNOW` | `no`
`THE RAIN IN SPAIN IN THE PLAIN` | `no`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB