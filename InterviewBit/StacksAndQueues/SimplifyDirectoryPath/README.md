Given a string A representing an absolute path for a file (Unix-style).

Return the string A after simplifying the absolute path.

**Note:**

1. Absolute path always begin with ’/’ ( root directory ).
2. Path will not have whitespace characters.



**Input Format**
```
The only argument given is string A.
```
**Output Format**
```
Return a string denoting the simplified absolue path for a file (Unix-style).
```
**For Example**
```
Input 1:
    A = "/home/"
Output 1:
    "/home"

Input 2:
    A = "/a/./b/../../c/"
Output 2:
    "/c"
```
