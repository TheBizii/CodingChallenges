# Speed Limit

Bill and Ted are taking a road trip. But the odometer in their car is broken, so they don’t know how many miles they have driven. Fortunately, Bill has a working stopwatch, so they can record their speed and the total time they have driven. Unfortunately, their record keeping strategy is a little odd, so they need help computing the total distance driven. You are to write a program to do this computation.

For example, if their log shows

Speed in miles per hour | Total elapsed time in hours
-|-
20 | 2
30 | 6
10 | 7

this means they drove 2 hours at 20 miles per hour, then `6 − 2 = 4` hours at 30 miles per hour, then `7 − 6 = 1` hour at 10 miles per hour. The distance driven is then `2 * 20 + 4 * 30 + 1 * 10 = 40 + 120 + 10 = 170` miles. Note that the total elapsed time is always since the beginning of the trip, not since the previous entry in their log.

## Input

The input consists of one or more data sets (at most 10). Each set starts with a line containing an integer _**n**_, **1** ≤ _**n**_ ≤ **10**, followed by _**n**_ pairs of values, one pair per line. The first value in a pair, _**s**_, is the speed in miles per hour and the second value, _**t**_, is the total elapsed time. Both _**s**_ and _**t**_ are integers, **1** ≤ _**s**_ ≤ **90** and **1** ≤ _**t**_ ≤ **12**. The values for t are always in strictly increasing order. A value of −1 for n signals the end of the input.

## Output

For each input set, print the distance driven, followed by a space, followed by the word “miles”.

## Examples

Sample Input | Sample Output
-|-
`3`<br>`20 2`<br>`30 6`<br>`10 7`<br>`2`<br>`60 1`<br>`30 5`<br>`4`<br>`15 1`<br>`25 2`<br>`30 3`<br>`10 5`<br>`-1` | `170 miles`<br>`180 miles`<br>`90 miles`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB