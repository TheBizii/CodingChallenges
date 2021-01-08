# Heart Rate

A common method for determining your own heart rate is to place your index and third finger on your neck to the side of your windpipe. You then count how many beats you feel in a span of 15 seconds, multiply that number by four and that gives you a measure of your heart rate in beats per minute (BPM). This method gives you a good estimate, but is not quite accurate. In general, if you measure _b_ beats in _p_ seconds the BPM is calculated as (60\*_b_)/_p_.

For this problem, we assume that all heart rates are constant and do not change. If _t_ is the amount of time (in seconds) between each beat of your heart, we define Actual Beats Per Minute (ABPM) as 60/_t_.

## Input

The input starts with an integer _**N**_ (**1** <= _**N**_ <= **1000**) indicating the numberof cases to follow. Each of the next _**N**_ lines specify one case, consisting of the integer _**b**_ (**2** <= _**b**_ <= **1000**) as well as _**p**_ (**0** < _**p**_ < **1000**) as described above. The value of _**p**_ is a real number specified to 4 decimal places.

## Output

For each case, print on a single line the minimum possible ABPM, the calculated BPM, and the maximum possible ABPM, separated by a space. Your answer will be considered correct if its absolute or relative error does not exceed **10^-4**.

## Examples

Sample Input | Sample Output
-|-
`2`<br>`6 5.0000`<br>`2 3.1222` | `60.0000 72.0000 84.0000`<br>`19.2172 38.4344 67.6517`

## Limits

**CPU Time limit**: 1 second

**Memory Limit**: 1024 MB