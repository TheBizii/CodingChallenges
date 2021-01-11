# Honour Thy (Apaxian) Parent

While breaking ground for the Obama Presidential Center, which will be located just a few blocks from campus in Jackson Park, archeologists from the Oriental Institute have made an astounding discovery: a new set of scrolls from the ancient and certainly not made-up Apaxian civilization!

It seems that the Apaxian civilization, which the Oriental Institute is starting to suspect may have been way too concerned with string manipulation, provided a way for young Apaxians to extend their name using the name of one of their parents. The basic principle was to take an Apaxian name _**Y**_, add ex, and then the name _**P**_ of one of the parents. For example, if _**Y**_ is menolaxios and _**P**_ is mox, the extended name is **menolaxios** + **ex** + **mox** = **menolaxiosexmox**

However, there were a few exceptions to this rule:

* If _**Y**_ ends with e, then the extended name is _**Y**_ + **x** + _**P**_

* If _**Y**_ ends with any other vowel (a,i,o, or u), we remove that final vowel from _**Y**_, and then extend _**Y**_ with **ex** + _**P**_

* If _**Y**_ already ends with ex, then the extended name is simply _**Y**_ + _**P**_.

As usual, the Oriental Institute has asked us to help them apply the power of computation to generating these extended names.

## Input

The input contains two strings separated by a single space: _**Y**_ and _**P**_, as defined above. Each string contains only lowercase English letters, and is at least **2** characters long and at most **10** characters long.

## Output

The output is a single string containing the extended name, as defined above.

## Examples

Sample Input | Sample Output
-|-
`menolaxios mox` | `menolaxiosexmox`
`alemaxe maxos` | `alemaxexmaxos`
`pamoli toxes` | `pamolextoxes`
`andrex naxos` | `andrexnaxos`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB