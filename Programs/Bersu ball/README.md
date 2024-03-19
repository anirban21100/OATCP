1. Read the sizes n and m of the two arrays.
2. Read the elements of the first array a of size n.
3. Read the elements of the second array b of size m.
4. Sort both arrays a and b.
5. Initialize a variable pairs to 0 to count the number of pairs.
6. Initialize a boolean array used of size m to keep track of matched elements in array b, initialized to all false.
7. For each element x in array a:
8. For each index j in array b:
9. If b[j] has not been used and the absolute difference between x and b[j] is less than 2:
10. Mark b[j] as used by setting used[j] to true.
11. Increment pairs by 1.
12. Break out of the inner loop.
13. Print the value of pairs.
