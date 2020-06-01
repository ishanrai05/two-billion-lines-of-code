
Validate if a given string is numeric.

#### Examples:
```
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true
```
Return 0 / 1 ( 0 for false, 1 for true ) for this problem


1. Is 1u ( which may be a representation for unsigned integers valid?
For this problem, no.
2. Is 0.1e10 valid?
Yes
3. -01.1e-10?
Yes
4. Hexadecimal numbers like 0xFF?
Not for the purpose of this problem
4. 1. (. not followed by a digit)?
No
5. Can exponent have decimal numbers? 3e0.1?
Not for this problem.
6. Is 1f ( floating point number with f as prefix ) valid?
Not for this problem.
7. How about 1000LL or 1000L ( C++ representation for long and long long numbers )?
Not for this problem.
8. How about integers preceded by 00 or 0? like 008?
Yes for this problem