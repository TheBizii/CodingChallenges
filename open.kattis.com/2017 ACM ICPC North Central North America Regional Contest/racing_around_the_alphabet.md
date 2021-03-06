# Racing Around the Alphabet

Soccer coach Joe has invented a new fitness game that he thinks will help his players’ agility and fitness. The center circle of the soccer pitch has a diameter of 60 feet. He marks 28 evenly-spaced points on the circumference of the circle. On the first point (arbitrarily chosen) he places a pile of tokens all inscribed with the letter ’A’. On the second point he places a pile of ’B’ tokens, and so on, covering 26 of the 28 points. He places a pile of blanks (or space-characters) on the 27th point and a pile of disks imprinted with single quotation marks, on the last point.

He gives each player a slip of paper containing an aphorism, such as “WINNING ISN’T EVERYTHING IT’S THE ONLY THING” Notice that the only punctuation marks allowed are spaces and single quotation marks. Each player gets a different aphorism.

A player starts outside the circle next to the first letter of his aphorism and, on Joe’s “GO” signal, the player picks up his first disk and then takes off running around the outside of the circle, picking up the remaining disks in the order that the corresponding letters appear in the aphorism. A smart player will take the shortest route, possibly changing direction, between consecutive letters of his aphorism.

One of the assistant coaches makes a note of the player’s time. Although Joe initially envisioned all of his 20 players running around the circle simultaneously, this idea was scrapped due to contusions and fractures.

Joe wants you to write a program to estimate the expected time for one smart player to complete each of the aphorisms. Assume for simplicity that the player runs at 15 feet per second between stops for pickups and that each pickup takes 1 second.

## Input

The input begins with a number _**N**_, (**1** ≤ _**N**_ ≤ **20**) giving the number of aphorisms to follow. _**N**_ lines follow, each one containing an aphorism made up of upper-case letters, single quotation marks, and spaces. Each aphorism will be between 8 and 120 characters inclusive.

## Output

For each aphorism give the time for a smart player to complete the task. Your answer should be accurate to within **10⁻⁶** seconds.

## Examples

Sample Input | Sample Output
-|-
`3`<br>`WINNING ISN'T EVERYTHING IT'S THE ONLY THING`<br>`WINNERS DON'T WAIT FOR CHANCES THEY TAKE THEM`<br>`PAIN IS ONLY TEMPORARY BUT VICTORY IS FOREVER` | `187.6156641641`<br>`190.4108599662`<br>`193.1036536692`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB