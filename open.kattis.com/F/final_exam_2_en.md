# Final Exam

The Vietnamese High School graduation exam is in progress! For most Vietnamese high school students, this is their most important exam, as its result not only decides whether they can graduate from high school, but is also used for their university applications.

Today, Hanh finished his final exam, Math, which is Hanh's strongest subject. In this exam, there are _**n**_ questions, numbered from **1** to _**n**_. Each one is a multiple choice question, with **4** answers, **A**, **B**, **C**, and **D**. The students have to write the answers on an answer sheet with _**n**_ lines, the _**i**_-th line should contain the answer for the _**i**_-th question. Each question has only one correct answer, and the student will receive one point if their answer matches the correct one.

Hanh started checking his results with his friends confidently. After few minutes, Hanh's confidence turned into fright: Most of Hanh's answers are different from his friends'.

Hanh quickly realized that he made a terrible mistake: Hanh wrote the answer for the **2**nd question on the **1**st line of the answer sheet, the answer for the **3**rd question on the **2**nd line, the answer for the **4**th question on the **3**rd line, and so on. Hanh left the _**n**_-th line of the answer sheet empty, and did not write the answer to the **1**st question anywhere!

Please help Hanh check what will be his final score. Given that Hanh is a great Math student, his answers for all _**n**_ questions would be correct if they were on the correct line of the answer sheet. 

## Input

* The first line of the input contains a single integer _**n**_ (**1** ≤ _**n**_ ≤ **1000**) - the number of questions.
* _**n**_ lines follow, the _**i**_-th line contains a single character, **A**, **B**, **C**, or **D** - the correct answer for _**i**_-th question.

## Output

Print a single integer - Hanh's final score.

## Explanation of the first sample input

Fortunately for Hanh, all **4** questions have **A** as correct answer. So Hanh wrote **A** on the first three lines, and left the **4**-th line empty. Hanh's final score is **3**.

## Examples

Sample Input | Sample Output
-|-
`4`<br>`A`<br>`A`<br>`A`<br>`A` | `3`
`6`<br>`A`<br>`D`<br>`B`<br>`B`<br>`C`<br>`A` | `1`

## Limits

**CPU Time limit**: 1 second

**Memory limit**: 1024 MB
