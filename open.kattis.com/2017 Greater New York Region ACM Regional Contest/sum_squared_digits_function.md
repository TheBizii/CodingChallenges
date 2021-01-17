# Sum Squared Digits Function

The Sum Squared Digits function, `SSD(b,n)` of a positive integer _**n**_, in base _**b**_ is defined by representing _**n**_ in base _**b**_ as in:

_**n**_ = _**a₀**_ + _**a₁**_ \* _**b**_ + _**a₂**_ \* _**b²**_ + ...

then:

SSD(_**b**_, _**n**_) = _**a₀²**_ + _**a₁²**_ + _**a₂²**_ + ...

is the sum of squares of the digits of the representation.

Write a program to compute the Sum Squared Digits function of an input positive number.

## Input

The first line of input contains a single decimal integer _**P**_, (**1** ≤ _**P**_ ≤ **1000**), which is the number of data sets that follow. Each data set should be processed identically and independently.

Each data set consists of a single line of input. It contains the data set number, _**K**_, followed by the base, _**b**_ (**3** ≤ _**b**_ ≤ **16**) as a decimal integer, followed by the positive integer, _**n**_ (as a decimal integer) for which the Sum Squared Digits function is to be computed with respect to the base _**b**_. _**n**_ will fit in a **32** bit unsigned integer. The data set number _**K**_ starts at 1 and is incremented by 1 for each data set.

## Output

For each data set there is a single line of output.

The single line of output consists of the data set number, _**K**_, followed by a single space followed by the value of SSD(_**b**_, _**n**_) as a decimal integer.

## Examples

Sample Input | Sample Output
-|-
`3`<br>`1 10 1234`<br>`2 3 98765`<br>`3 16 987654321` | `1 30`<br>`2 19`<br>`3 696`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB