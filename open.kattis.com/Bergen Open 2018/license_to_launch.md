# License to Launch

Birk has made a new shiny rocket and just received his licence from the Bluesky Global Order (BGO) to launch anytime within the next _**n**_ days. He is, however, worried that the rocket will hit space junk on its way. In order minimize the risk of a collision, Birk has made a model of how many pieces of space junk there will be for each of the next _**n**_ days. He decided that he will launch his rocket on the day with the least space junk, and if there are multiple days with the same amount of space junk he of course wants to send his rocket up as early as possible.

Can you help Birk find out how many days he has to wait until he sends up his rocket?

## Input

On the first line there is a single integer _**n**_ (**1** ≤ _**n**_ ≤ **100 000**) the number of days for which the launch license is valid. On the second line follows _**n**_ integers between 0 and 10^9 where _**i**_'th integer is the amount of space junk on the _**i**_'th day. The first day is day _**i**_ = 0.

## Output

Output a single integer, the number of days Birk needs to wait before he launches his rocket.

## Examples

Sample Input | Sample Output
-|-
`5`<br>`3 4 1 7 2` | `2`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB