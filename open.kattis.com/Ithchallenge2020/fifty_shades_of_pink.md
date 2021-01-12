# Fifty Shades of Pink

Thore is a fashionable man. Every time he meets up with his programming team, he wears his hot pink team hoodie over a salmon colored shirt with shirt buttons in a dashing rose or pink shade. Of course, he can’t show up to two training sessions with the same buttons on his shirt, that would cause unbearable ridicule. If he can’t find buttons for this perfect color combination, he will come up with some poor excuse for not showing up. He has a box full of different colored buttons in labeled packages. Unfortunately, Thore is color blind, so his helpful daughter has labeled each package with the color of the buttons. Her writing is terrible though, she mixes uppercase and lowercase arbitrarily and has no spacing between words, so Thore needs your help to decipher the names on the labels and select buttons with either “pink” or “rose” somewhere in the name, ignoring case.

## Input

Input starts with an integer **1** ≤ _**N**_ ≤ **1000**, the number of button packages in the box. The following _**N**_ lines each has a color name, one for each package. The names consist of up to 30 characters of letters A - Z, a - z.

## Output

Print one integer, the number of training sessions Thore can attend. If he can’t attend any session because there are no pink buttons, output his standard excuse “I must watch Star Wars with my daughter”.

## Examples

Sample Input | Sample Output
-|-
`12`<br>`pink`<br>`tequilaSunrose`<br>`mExicanPInK`<br>`Coquelicot`<br>`turqrose`<br>`roSee`<br>`JETblack`<br>`pink`<br>`babypink`<br>`pInKpinkPinK`<br>`PInkrose`<br>`lazerlemon` | `9`
`6`<br>`roose`<br>`rosse`<br>`pinnk`<br>`screw`<br>`cerise`<br>`magenta` | `I must watch Star Wars with my daughter`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB