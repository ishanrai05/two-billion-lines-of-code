Given a 2D board containing 'X' and 'O', capture all regions surrounded by 'X'.

A region is captured by flipping all 'O's into 'X's in that surrounded region.

**Input Format:**
```
    First and only argument is a N x M character matrix A
```
**Output Format:**
```
    make changes to the the input only as matrix is passed by reference.
```
**Constraints:**
```
    1 <= N,M <= 1000
```
**For Example:**
```
Input 1:
    A = [ [X, X, X, X],
          [X, O, O, X],
          [X, X, O, X],
          [X, O, X, X] ]
Output 1:
    After running your function, the board should be:
    A = [ [X, X, X, X],
          [X, X, X, X],
          [X, X, X, X],
          [X, O, X, X] ]
Explanation:
    O in (4,2) is not surrounded by X from below.
```