# Sum Kind of Problem

For this problem you will compute various running sums of values for positive integers.

## Input

The first line of input contains a single integer _**P**_, (**1** ≤ _**P**_ ≤ **10 000**), which is the number of data sets that follow. Each data set should be processed identically and independently. Each data set consists of a single line of input. It contains the data set number, _**K**_, followed by an integer _**N**_, (**1** ≤ _**N**_ ≤ **10 000**).

## Output

For each data set there is one line of output. The single output line consists of the data set number, _**K**_, followed by a single space followed by three space separated integers _**S₁**_, _**S₂**_ and _**S₃**_ such that:

* _**S₁**_ = The sum of the first _**N**_ positive integers.
* _**S₂**_ = The sum of the first _**N**_ odd integers.
* _**S₃**_ = The sum of the first _**N**_ even integers.

## Examples

Sample Input | Sample Output
-|-
`3`<br>`1 1`<br>`2 10`<br>`3 1001` | `1 1 1 2`<br>`2 55 100 110`<br>`3 501501 1002001 1003002`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB