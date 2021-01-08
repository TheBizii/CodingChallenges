# FizzBuzz

According to Wikipedia, FizzBuzz is a group word game for children to teach them about division. This may or may not be true, but this question is generally used to ~~torture~~ screen young computer science graduates during programming interviews.

Basically, this is how it works: you print the integers from **1** to _**N**_, replacing any of them divisible by _**X**_ with _Fizz_ or, if they are divisible by _**Y**_, with _Buzz_. If the number is divisible by both _**X**_ and _**Y**_, you print _FizzBuzz_ instead.

Check the samples for further clarification.

## Input

Input contains a single test case. Each test case contains three integers on a single line, _**X**_, _**Y**_ and _**N**_ (**1** ≤ _**X**_ < _**Y**_ ≤ _**N**_ ≤ **100**).

## Output

Print integers from **1** to _**N**_ in order, each on its own line, replacing the ones divisible by _**X**_ with _Fizz_, the ones divisible by _**Y**_ with _Buzz_ and ones divisible by both _**X**_ and _**Y**_ with _FizzBuzz_.

## Examples

Sample Input | Sample Output
-|-
`2 3 7` | `1`<br>`Fizz`<br>`Buzz`<br>`Fizz`<br>`5`<br>`FizzBuzz`<br>`7`
`2 4 7` | `1`<br>`Fizz`<br>`3`<br>`FizzBuzz`<br>`5`<br>`Fizz`<br>`7`
`3 5 7` | `1`<br>`2`<br>`Fizz`<br>`4`<br>`Buzz`<br>`Fizz`<br>`7`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB