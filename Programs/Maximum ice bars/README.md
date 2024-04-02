Read the number of ice cream flavors, n, from input.
Read the costs of the n ice cream flavors into a vector, costs.
Sort the costs vector in non-decreasing order.
Initialize a variable coins with the total number of coins.
Initialize a variable count to 0 to keep track of the number of ice creams bought.
Iterate over the costs vector:
If coins is greater than or equal to the current cost, subtract the cost from coins and increment count.
If coins is less than the current cost, break out of the loop.
Output the value of count as the result.
