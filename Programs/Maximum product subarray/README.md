1. Initialize variables maxi to store the maximum product found so far, neg to store the product of negative numbers encountered so far (to handle cases where two negative numbers make a positive product), and prefProd to store the product of elements in the current subarray (initialized to 1).

2. Iterate through each element in the input array nums.

3. Update prefProd by multiplying it with the current element.
   Update maxi with the maximum of maxi and prefProd.
   If prefProd becomes 0, reset prefProd to 1 and neg to 0.
   If prefProd becomes negative, update maxi with the maximum of maxi and prefProd/neg (this handles cases where there are two negative numbers in the subarray that can make a positive product).

4. Return the final result maxi % INF (to avoid integer overflow).
