# Relocation

In the faraway country of Lineland, tech companies are starting to take over! Every week, it seems that tech companies sprout from the ground, merge, get acquired, or go under. For software engineers looking for new jobs in Lineland, it can be difficult to even find the companies where they’re interviewing.

To solve this issue, you’re going to make a new tech company! The product is simple: using deep neural blockchains in the cloud, your app finds the distance between any two tech companies in Lineland. This is supremely useful, as companies change offices all the time and it’s difficult to stay completely up to date. By centralizing this information, your company is going to make the world a better place.

Since Lineland is organized around a single line, the location of a company can be given by a single coordinate. The distance between any two companies is equal to the distance between their two coordinates.

Your job is to handle two kinds of user requests to the company’s flagship app. One kind of request updates the address of a company, the other requests the shortest distance between two companies.

## Input

The first line has two positive space-separated integers _**N**_ and _**Q**_: the number of companies the app tracks (**2** ≤ _**N**_ ≤ **100 000**), and the number of requests to process (**1** ≤ _**Q**_ ≤ **100 000**). The next line has _**N**_ space-separated integers **1** ≤ _**Xᵢ**_ ≤ **10⁹**, which are the initial locations of the _**N**_ companies, given in order from _**i**_ = 1 to _**i**_ = _**N**_.

Each of the next _**Q**_ lines has 3 space-separated integers, taking one of the following forms:

* **1** _**C**_ _**X**_, which means that company _**C**_ moves its location to _**X**_, or
* **2** _**A**_ _**B**_, which is a query for the distance between companies _**A**_ and _**B**_.

It is guaranteed that **1** ≤ _**A**_, _**B**_, _**C**_ ≤ _**N**_ and **1** ≤ _**X**_ ≤ **10⁹**. It is possible two companies can share the same location. It is also guaranteed there is at least one query of type 2.

## Output

For each query of type **2**, print the distance between companies _**A**_ and _**B**_.

## Sample Explanation

In the first query, Company 2 moves to location 10. Then the app is asked for the distance between company 4 and company 5, which is 3. The next query is the distance between companies 1 and 3, which is also 3. A number of updates and queries follow.

## Examples

Sample Input | Sample Output
-|-
`5 10`<br>`5 2 8 1 4`<br>`1 2 10`<br>`2 4 5`<br>`2 1 3`<br>`1 4 3`<br>`2 1 5`<br>`2 5 2`<br>`1 4 1`<br>`2 2 4`<br>`1 3 15`<br>`2 4 1` | `3`<br>`3`<br>`1`<br>`6`<br>`9`<br>`4`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB