# Nasty Hacks

You are the CEO of Nasty Hacks Inc., a company that creates small pieces of malicious software which teenagers may use to fool their friends. The company has just finished their first product and it is time to sell it. You want to make as much money as possible and consider advertising in order to increase sales. You get an analyst to predict the expected revenue, both with and without advertising. You now want to make a decision as to whether you should advertise or not, given the expected revenues.

## Input

The input consists of _**n**_ cases, and the first line consists of one positive integer giving _**n**_. The next _**n**_ lines each contain **3** integers, _**r**_, _**e**_ and _**c**_. The first, _**r**_, is the expected revenue if you do not advertise, the second, _**e**_, is the expected revenue if you do advertise, and the third, _**c**_, is the cost of advertising. You can assume that the input will follow these restrictions: **1** <= _**n**_ <= 100, **-10⁶** <= _**r**_, _**e**_ <= **10⁶** and **0** <= _**c**_ <= **10⁶**.

## Output

Output one line for each case: "advertise", "do not advertise" or "does not matter", indicating whether it is most profitable to advertise or not, or whether it does not make any difference.

## Examples

Sample Input | Sample Output
-|-
`3`<br>`0 100 70`<br>`100 130 70`<br>`-100 -70 40` | `advertise`<br>`does not matter`<br>`do not advertise`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB
