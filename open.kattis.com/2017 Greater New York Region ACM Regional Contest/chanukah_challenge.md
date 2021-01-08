# Chanukah Challenge

The Jewish holiday of Chanukah lasts for eight days and eight nights. On the evening before each day, candles are lit in a menorah. On the first evening, one candle is lit, on the second, two are lit, and so on. However, each evening, an extra candle, called the shammas, is also lit (in fact, this candle is used to light the other candles). Thus, for the entire holiday, 44 candles are necessary.

But what if Chanukah lasted a different number of days? How many candles would be needed?

For this problem, you will write a program that determines how many candles would be necessary for a Chanukah holiday lasting for a given number of days.

## Input

The first line of input contains a single decimal integer _**P**_, (**1** ≤ _**P**_ ≤ **10 000**), which is the number of data sets that follow. Each data set should be processed identically and independently.

Each data set consists of a single line of input. It contains the data set number, _**K**_, followed by a single space, followed by a single decimal integer _**N**_, (**1** ≤ _**N**_ ≤ **10 000**), which gives the number of days to assume for the holiday. The data set number _**K**_ starts at 1 and is increased by 1 for each data set.

## Output

For each data set there is one line of output. The single output line consists of the data set number, _**K**_, followed by a space followed by the number of candles needed for an _**N**_-day Chanukah holiday.

## Examples

Sample Input | Sample Output
-|-
`3`<br>`1 8`<br>`2 1`<br>`3 10` | `1 44`<br>`2 2`<br>`3 65`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB
