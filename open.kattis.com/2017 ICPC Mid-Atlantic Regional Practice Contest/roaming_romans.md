# Roaming Romans

The English word "mile" derives from the Latin "mille passus", meaning "a thousand paces". A Roman mile was the distance a soldier would walk in 1000 paces (a pace being two steps, one with each foot).

Over time, the actual distance referred to as a "mile" has changed. The modern English mile is 5280 (modern) feet. The Roman mile is believed to have been about 4854 (modern) feet. Therefore a distance of _**x**_ English miles would correspond to `1000 * (5280 / 4854)` Roman paces.

Write a program to convert distance in English miles into Roman paces.

## Input

Input will consist of a single line containing a single real number **0** ≤ _**X**_ ≤ **1000** denoting a distance in English miles. The number _**X**_ has at most 3 digits of precision after the decimal point.

## Output

Print an integer denoting the closest number of Roman paces equivalent to _**X**_ Your answer should be rounded to the closest integer (with an exact .5 decimal part rounded up).

## Examples

Sample Input | Sample Output
-|-
`1.0` | `1088`
`20.267` | `22046`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB