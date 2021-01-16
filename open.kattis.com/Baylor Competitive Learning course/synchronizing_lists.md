# Synchronizing Lists

It is so difficult to keep everything in order! For this problem, you have two lists of numbers, each list having length n. Each number in one list has a corresponding number in the other list. The correspondence is that if both lists were in sorted and placed side by side, each pair of numbers would correspond. For example, in the lists (48,10,97) and (7,46,20), the corresponding numbers are 10 with 7, 48 with 20, and 97 with 46.

You want to keep the lists synchronized, but you know that the second list has gotten out of order. So you want to put it in the same order as the first list, according to the correspondences.

For example, given the two lists above, the second list should be reordered as (20,7,46) to be in order with the first list.

## Input

Input consists at most 100 test cases. Each test case begins with an integer **1** ≤ _**n**_ ≤ **5000**, followed by _2**n**_ lines. The first _**n**_ lines are the first list (which is in a fixed order), and the second _**n**_ lines are from the second list (which may be out of sync with the first list). All integers given in the lists are in the range [−10000, 10000]. Input ends when _**n**_ = 0. No list contains duplicates.

## Output

For each test case, print out the second list so that it has the same ordering as the first list. Print a blank line between lists.

## Examples

Sample Input | Sample Output
-|-
`4`<br>`10`<br>`67`<br>`68`<br>`28`<br>`55`<br>`73`<br>`10`<br>`6`<br>`7`<br>`98`<br>`23`<br>`61`<br>`49`<br>`1`<br>`79`<br>`9`<br>`1`<br>`15`<br>`32`<br>`47`<br>`68`<br>`39`<br>`24`<br>`0` | `6`<br>`55`<br>`73`<br>`10`<br>` `<br>`68`<br>`24`<br>`39`<br>`32`<br>`1`<br>`47`<br>`15`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB