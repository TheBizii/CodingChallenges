# Transit Woes

Everyday Yraglac relies on his city’s local transit system to get to and from campus. Since this is routine for him, he’s memorized exactly what time will let him leave his house and make it in time to his first morning class. Of course transit being transit, they decided to change around the schedules for some of the routes Yraglac takes.

Yraglac leaves his house everyday at time _s_ to make it to his first class which starts at time _t_. To get there, he takes _n_ transit routes, one after the other. When transferring from one transit route to another, going from his house to the first transit stop, and going from the last transit stop to his class, he must walk for _dᵢ_ time. Yraglac rides the _i_−th bus for _bᵢ_ time before getting off and walking to the `i + 1`-th bus stop. Last but not least, each bus only comes at an interval of every _cᵢ_. The first one always leaving at time 0.

Given the new schedules for the routes Yraglac takes, can you find out if he can make it to class on time?

## Input

The first line contains **3** space separated integers, **0** ≤ _**s**_ ≤ _**t**_ ≤ **1000**, and **1** ≤ _**n**_ ≤ **20**.

The second line contains `n + 1` space separated integers _**dᵢ**_ (**0** ≤ _**dᵢ**_ ≤ **1000**) denoting the time it takes to walk from the _i_-th bus’ drop-off point to the `i + 1`-th bus stop. Note that _d₀_ is the time it takes to walk from Yraglac’s house to the first bus stop, and _dₙ_ is the time it takes to walk from the last bus’ drop-off point to his class.

The third line contains _**n**_ space separated integers _**bᵢ**_ (**1** ≤ _**bᵢ**_ ≤ **1000**) denoting the amount of time Yraglac rides the _i_-th bus.

The fourth line contains _**n**_ space separated integers _**cᵢ**_ (**1** ≤ _**cᵢ**_ ≤ **1000**) denoting the intervals the _i_-th bus arrives.

## Output

Output “yes” if Yraglac will be able to get to class in time, and “no” otherwise.

## Examples

Sample Input | Sample Output
-|-
`0 20 2`<br>`2 2 2`<br>`5 5`<br>`3 5` | `yes`
`0 10 1`<br>`3 3`<br>`1`<br>`8` | `no`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB
