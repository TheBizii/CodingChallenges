# Grass Seed Inc.

Many years ago after another unfruitful day in Cubicle Land, banging her head against yet another cutting edge, marketing buzzword-filled JavaScript framework, Janice the engineer looked out of the window and decided that time was ripe for a change.

So swapping her keyboard and mouse for a fork and a spade, she started her own gardening company.

After years of hard outdoor work Janice now has biceps like Van Damme and owns the premiere landscaping company in the whole of the South West, and has just been lucky enough to broker a large contract to sow lawns for landed gentry.

Each contract details the size of the lawns that need to be seeded, and the cost of seed per square metre. How much do you need to spend on seed?

## Input

* One line containing a real number _**C**_ (**0** ≤ _**C**_ ≤ **100**), the cost of seed to sow one square metre of lawn.
* One line containing an integer _**L**_ (**0** ≤ _**L**_ ≤ **100**), the number of lawns to sow.
* _**L**_ lines, each containing two positive real numbers: _**wᵢ**_ (**0** ≤ _**wᵢ**_ ≤ **100**), the width of the lawn, and _**lᵢ**_ (**0** ≤ _**lᵢ**_ ≤ **100**), the length of the lawn.

All real numbers are given with at most 8 decimals after the decimal point.

## Output

* One line containing a real number: the cost to sow all of the lawns.

All output must be accurate to an absolute or relative error of at most **10^-6**.

## Examples

Sample Input | Sample Output
-|-
`2`<br>`3`<br>`2 3`<br>`4 5`<br>`5 6` | `112.0000000`
`0.75`<br>`2`<br>`2 3.333`<br>`3.41 4.567` | `16.6796025`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB