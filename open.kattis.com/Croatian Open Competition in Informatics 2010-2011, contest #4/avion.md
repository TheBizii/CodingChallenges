# Avion

Mirko and Slavko are USKOK agents tracking the movements of an unnamed corrupt government official. Anonymous sources have tipped them about his upcoming escape attempt. They now know he plans to use his diplomatic liaisons to try and hitch a ride on a CIA blimp leaving from Severin na Kupi blimp port.

It is common knowledge that all CIA blimps have the string “FBI” somewhere in their registration codes. They obtained a list of all blimps scheduled for the designated day. There are exactly 5 blimps on the list. Write a program that will point out all CIA blimps.

## Input

There are exactly 5 rows of input, each row representing one blimp registration code from the list. A registration code is a sequence of at most 11 uppercase letters of the English alphabet, digits ‘0’ to ‘9’, or dashes ‘-’.

## Output

The first and only line of output must contain a space separated list of integers, sorted in increasing order, indicating the corresponding input rows containing registrations of CIA blimps.

If there are no CIA blimps, output the string “HE GOT AWAY!”.

## Examples

Sample Input | Sample Output
-|-
`N-FBI1`<br>`9A-USKOK`<br>`I-NTERPOL`<br>`G-MI6`<br>`RF-KGB1` | `1`
`N321-CIA`<br>`F3-B12I`<br>`F-BI-12`<br>`OVO-JE-CIA`<br>`KRIJUMCAR1` | `HE GOT AWAY!`
`47-FBI`<br>`BOND-007`<br>`RF-FBI18`<br>`MARICA-13`<br>`13A-FBILL` | `1 3 5`