1. Read the number of ice cream flavors, n, from input.
2. Read the costs of the n ice cream flavors into a vector, costs.
3. Sort the costs vector in non-decreasing order.
4. Initialize a variable coins with the total number of coins.
5. Initialize a variable count to 0 to keep track of the number of ice creams bought.
6. Iterate over the costs vector:
7. If coins is greater than or equal to the current cost, subtract the cost from coins and increment count.
8. If coins is less than the current cost, break out of the loop.
9. Output the value of count as the result.
