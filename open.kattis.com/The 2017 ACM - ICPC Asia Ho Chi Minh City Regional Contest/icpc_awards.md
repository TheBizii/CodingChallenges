# ICPC Awards

The ACM International Collegiate Programming Contest has been held in Vietnam for more than 10 years. The contest is a great chance for the students to meet new friends, broaden their knowledge and of course, win prizes.

Every years, universities can send one or multiple teams to the contest and all universities hope to win prizes. The organizers want to define a rule to award the excellent contestants.

The contest director decided to follow the World Finals policy by having 4 first prizes, 4 second prizes and 4 third prizes. 12 winners out of more than a hundred teams is also a good proportion to recognize the best students.

Since universities can send multiple teams, we don’t want one university to swept all the awards. Thus, only the top team from a university can be awarded. It seems harsh for the second best team from one university but do not worry, they will still receive relevant certificates.

The table below is the result of top 10 of Nha Trang Regional Contest 2016. The 4-th (team WINDOWS) and 8-th place (team UBUNTU) did not receive prizes because they were not the top team from University of Engineering and Technology - VNU. Team Metis and team BK.DeepMind are in the same situation.

Place | Institution | Team | Prize
-|-|-|-
1 | Seoul National University | ACGTeam | First Prize
2 | University of Engineering and Technology - VNU | LINUX | First Prize
3 | Shanghai Jiao Tong University | Mjolnir | First Prize
4 | University of Engineering and Technology - VNU | WINDOWS |
5 | National Taiwan University | PECaveros | First Prize
6 | Hanoi University of Science and Technology | BK.Juniors | Second Prize
7 | Ho Chi Minh City University of Science | HCMUS-Serendipity | Second Prize
8 | University of Engineering and Technology - VNU | UBUNTU |
9 | Shanghai Jiao Tong University | Metis |
10 | Hanoi University of Science and Technology | BK.DeepMind |

Given the final scoreboard of the contest, your task is to determine which 12 teams should be awarded prizes.

## Input

* The input starts with the number of teams _**N**_ (**12** ≤ _**N**_ ≤ **200**).
* The _**i**_-th line of the next _**N**_ lines contains information about the team that ranks _**i**_: the university name and the team name separated by a single space. Both names consists of digits, lowercase and uppercase English alphabet letters only. Both names does not exceed 20 letters in length.
* It is guaranteed that there are at least 12 different universities.

## Output

The output should contain 12 lines describing 12 winners. In each line, you should print the university name and the team name separated by a single space. The winners should be listed in the same order as the input.

## Examples

Sample Input | Sample Output
-|-
`30`<br>`Seoul ACGTeam`<br>`VNU LINUX`<br>`SJTU Mjolnir`<br>`VNU WINDOWS`<br>`NTU PECaveros`<br>`HUST BKJuniors`<br>`HCMUS HCMUSSerendipity`<br>`VNU UBUNTU`<br>`SJTU Metis`<br>`HUST BKDeepMind`<br>`HUST BKTornado`<br>`HCMUS HCMUSLattis`<br>`NUS Tourism`<br>`VNU DOS`<br>`HCMUS HCMUSTheCows`<br>`VNU ANDROID`<br>`HCMUS HCMUSPacman`<br>`HCMUS HCMUSGeomecry`<br>`UIndonesia DioramaBintang`<br>`VNU SOLARIS`<br>`UIndonesia UIChan`<br>`FPT ACceptable`<br>`HUST BKIT`<br>`PTIT Miners`<br>`PSA PSA`<br>`DaNangUT BDTTNeverGiveUp`<br>`VNU UNIXBSD`<br>`CanTho CTUA2LTT`<br>`Soongsil Team10deung`<br>`Soongsil BezzerBeater` | `Seoul ACGTeam`<br>`VNU LINUX`<br>`SJTU Mjolnir`<br>`NTU PECaveros`<br>`HUST BKJuniors`<br>`HCMUS HCMUSSerendipity`<br>`NUS Tourism`<br>`UIndonesia DioramaBintang`<br>`FPT ACceptable`<br>`PTIT Miners`<br>`PSA PSA`<br>`DaNangUT BDTTNeverGiveUp`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB