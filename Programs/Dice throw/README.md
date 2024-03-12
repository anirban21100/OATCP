1. Define an array DP of size MAXN to store the number of ways to reach a sum of i using the dice.

2. Initialize DP[0] = 1 because there is only one way to reach a sum of 0 (by not throwing the dice at all).

3. Define a function compute that takes the remaining sum left and calculates the number of ways to reach that sum.

4. If DP[left] is already calculated (not 0), return its value.

5. Otherwise, iterate through all possible outcomes of throwing the dice (from 1 to 6) and recursively calculate the number of ways to reach left - i for each outcome i.

6. Update DP[left] by adding the number of ways to reach left - i for each outcome i, taking the result modulo MOD.

7. Return the value of DP[left].

8. In the main function, read the value of n, reset the DP array to 0, and call the compute function with n.

9. Print the result modulo MOD.
