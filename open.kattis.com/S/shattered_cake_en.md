# Shattered Cake

A rectangular cake is transported via a truck to a restaurant. On the way to the destination, the truck hits a pothole, which shatters the cake into _**N**_ perfectly rectangular pieces of width _**wᵢ**_ and length _**lᵢ**_, for **1** ≤ _**i**_ ≤ _**N**_.

At the destination, the damage is assessed, and the customer decides to order a replacement cake of the same dimensions. Unfortunately, the original order form was incompletely filled and only the width _**W**_ of the cake is known. The restaurant asks for your help to find out the length _**L**_ of the cake. Fortunately, all pieces of the shattered cake have been kept.

## Input

The input consists of the following integers:

* on the first line, the width _**W**_ of the cake;
* on the second line, the number _**N**_ of shattered pieces;
* on each of the next _**N**_ lines, the width _**wᵢ**_ and length _**lᵢ**_ of each piece.

## Limits

* **1** ≤ _**N**_ ≤ **5 000 000**;
* **1** ≤ _**W**_, _**L**_ ≤ **10 000**;
* for each **1** ≤ _**i**_ ≤ _**N**_, **1** ≤ _**wᵢ**_, _**lᵢ**_ ≤ **10 000**.

**CPU Time limit**: 6 seconds

**Memory limit**: 1024 MB

## Output

The output should be the integer _**L**_.

## Examples

Sample Input | Sample Output
-|-
`4`<br>`7`<br>`2 3`<br>`1 4`<br>`1 2`<br>`1 2`<br>`2 2`<br>`2 2`<br>`2 1` | `6`