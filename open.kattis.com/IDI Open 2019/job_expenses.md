# Job Expenses

At ACME Corp, the seller Robin is selling software like hotcakes. To sell the software, he arranges meetings all over the country. Of course, he always needs to travel there, and sometimes even stay the night. Other times, he decides that a hot dog on the way to a meeting counts as accommodation.

Because Robin is very busy, he hasn’t been able to file his job expenses this month. Eret, the accountant, told him that he could fix it for him, as long as he got the price of all the expenses along with the receipts. Robin did this but misheard him: He has provided a list of all expenses and incomes he has brought in last month, with incomes as positive integers and expenses as negative integers.

Can you help Eret find out how much expenses Robin has paid for the last month?

## Input

The input consists of two lines: One line with the integer _**N**_, and one line with _**N**_ integers _**kᵢ**_, representing the numbers Robin has written down.

## Output

Output the sum of all the expenses Robin has paid for the last month.

## Limits

* **0** ≤ _**N**_ ≤ **20 000**
* **-50 000** ≤ _**kᵢ**_ ≤ _**500 000**_ and _**kᵢ**_ ≠ **0**

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB

## Examples

Sample Input | Sample Output
-|-
`3`<br>`1 -2 3` | `2`
`5`<br>`129 44 394 253 147` | `0`
`10`<br>`-100 40000 -6500 -230 -18 34500 -450 13000 -100 5000` | `7398`