# The Amazing Human Cannonball

The amazing human cannonball show is coming to town, and you are asked to double-check their calculations to make sure no one gets injured! The human cannonball is fired from a cannon that is a distance _x₁_ from a vertical wall with a hole through which the cannonball must fly. The lower edge of the hole is at height _h₁_ and the upper edge is at height _h₂_. The initial velocity of the cannonball is given as _v₀_ and you also know the angle _θ_ of the cannon relative to th ground.

![](https://i.imgur.com/s5mF7yV.png)

Thanks to their innovative suits, human cannonballs can fly without air resistance, and thus their trajectory can be modeled using the following formulas:

![](https://i.imgur.com/FtDt0VL.png)

where _x(t)_, _y(t)_ provides the position of a cannon ball at time _t_ that is fired from point (0, 0). _g_ is the acceleration due to gravity (_g_ = 9.81 m/s²).

Write a program to determine if the human cannonball can make it safely through the hole in the wall. To pass safely, there has to be a vertical safety margin of 1 m both below and above the point where the ball's trajectory crosses the centerline of the wall.

## Input

The input will consist of up to 100 test cases. The first line contains an integer _**N**_, denoting the number of test cases that follow. Each test case has 5 parameters: _**v₀_ _**θ**_ _**x₁**_ _**h₁**_ _**h₂**_, separated by spaces. _**v₀**_ (**0** < _**v₀**_ ≤ **200**) represents the ball’s initial velocity in m/s. _**θ**_ is an angle given in degrees (**0** < _**θ**_ < **90**), _**x₁**_ (**0** < _**x₁**_ < **1000**) is the distance from the cannon to the wall, _**h₁**_ and _**h₂**_ (**0** < _**h₁**_ < _**h₂**_ < **1000**) are the heights of the lower and upper edges of the wall. All numbers are floating point numbers.

## Output

If the cannon ball can safely make it through the wall, output “Safe”. Otherwise, output “Not Safe”!

## Examples

Sample Input | Sample Output
-|-
`11`<br>`19 45 20 9 12`<br>`20 45 20 9 12`<br>`25 45 20 9 12`<br>`20 43 20 9 12`<br>`20 47.5 20 9 12`<br>`20 45 17 9 12`<br>`20 45 24 9 12`<br>`20 45 20 10 12`<br>`20 45 20 9 11`<br>`20 45 20 9.0 11.5`<br>`20 45 18.1 9 12` | `Not Safe`<br>`Safe`<br>`Not Safe`<br>`Not Safe`<br>`Not Safe`<br>`Not Safe`<br>`Not Safe`<br>`Not Safe`<br>`Not Safe`<br>`Safe`<br>`Safe`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB
