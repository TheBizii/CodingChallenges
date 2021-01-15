# Tai's formula

Have you heard about the mastermind Tai? He found a way to calculate the area under a glucose curve, given discrete measurement points. He even validated his formula against the approximate technique of counting the number of squares below the graph, when printed on graph paper.

Can you, just like Tai, reinvent the wheel and calculate the area under a glucose curve? Instead of publishing a paper, you need to implement the algorithm. You need this algorithm in your new app, that logs your glucose values that comes from a continuous glucose monitor. You have also figured out the trick of the device. It’s not actually continuous, it just samples the glucose value frequently, automatically.

## Input

Input contains several lines of numbers separated by spaces. The first line contains the integer _**N**_, **2** ≤ _**N**_ ≤ **104**, the number of glucose samples.

The following _**N**_ lines describe each glucose sample.

Each line contains two numbers _**tᵢ**_, _**vᵢ**_, where _**tᵢ**_ is the time of the sample, and _**vᵢ**_ is the glucose value at time _**tᵢ**_.

The glucose values _**vᵢ**_ are inside the measurement domain: **2.0** ≤ _**vᵢ**_ ≤ **23.0** mmol/L.

Each glucose value is given with exactly one decimal digit.

Since you are working with a computer program, the time of each sample is given as an integer, the number of milliseconds since the first of January 1970.

The samples are always given in increasing order by time, meaning **0** < _**t1**_ < _**t2**_ < ... < _**tₙ**_ < **10¹⁴** ms.

Note that a second is a thousand milliseconds.

## Output

The area under the glucose curve in the unit mmol/L·s

Answers within a relative or absolute error of 10⁻⁶ will be accepted.

## Sample Explanation

In Sample Input 1 there are three data points, where the area between the t-axis and the curve is formed by two [Trapezoids](https://en.wikipedia.org/wiki/Trapezoid). The first trapezoid have the area of `(2+12)/2⋅(2000−1000) = 7000 mmol/L⋅ms`, making 7 mmol/L⋅s. The second has an area of 17 mmol/L⋅s, making the total area 24 mmol/L⋅s.

## Examples

Sample Input | Sample Output
-|-
`3`<br>`1000 2.0`<br>`2000 12.0`<br>`3000 22.0` | `24`
`3`<br>`1000 4.0`<br>`2000 8.0`<br>`3001 7.3` | `13.65765`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB