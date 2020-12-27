# I've Been Everywhere, Man

Alice travels a lot for her work. Each time she travels, she visits a single city before returning home. 

Someone recently asked her "how many different cities have you visited for work?" Thankfully Alice has kept a log of her trips. Help Alice figure out the number of cities she has visited at least once.

## Input

The first line of input contains a single positive integer _**T**_ <= **50** indicating the number of test cases. The first line of each test case also contains a single positive integer _**n**_ indicating the number of work trips Alice has taken so far. The following _**n**_ lines describe these trips. The _**i**_-th such line simply contains the name of the city Alice visited on her _**i**_-th trip.

Alice's work only sends her to cities with simple names: city names only contain lowercase letters, have at least one letter, and do not contain spaces.

The number of trips is at most **100** and no city name contains more than **20** characters.

## Output

For each case, simply output a single line containing a single integer that is the number of distinct cities that Alice has visited on her work trips.

## Examples

Sample Input | Sample Output
-|-
`2`<br>`7`<br>`saskatoon`<br>`toronto`<br>`winnipeg`<br>`toronto`<br>`vancouver`<br>`saskatoon`<br>`toronto`<br>`3`<br>`edmonton`<br>`edmonton`<br>`edmonton` | `4`<br>`1`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB
