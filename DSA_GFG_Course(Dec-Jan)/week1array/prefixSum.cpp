//Problem: Prefix Sum: Understanding Purpose

Initially the array looked like: 0 0 0 0 0
We were supposed to add 100 to the range of index given

After I operation -
A : 0 100 0 0 -100 
Prefix Sum Array : 0 100 100 100 0

After II operation -
A : 100 100 0 -100 -100
Prefix Sum Array : 100 200 200 100 0

After III operation -
A : 200 100 -100 -100 -100
Prefix Sum Array : 200 300 200 100 0

Final Prefix Sum Array : 200 300 200 100 0 

The required highest element : 300