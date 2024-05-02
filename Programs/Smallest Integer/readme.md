1. **Function:** `removeKdigits(num, k)`
2. **Inputs:**
   - `num`: A string representing a non-negative integer.
   - `k`: An integer indicating the number of digits to remove.
3. **Output:** Returns a string representing the smallest possible number after removing `k` digits from `num`.
4. **Algorithm:**

   - Initialize a stack `st` to store digits.
   - Iterate over each digit in `num`:
     - While the stack is not empty, the top digit is greater than the current digit, and `k` is greater than 0, pop digits from the stack and decrement `k`.
     - Push the current digit onto the stack.
   - After the loop, if there are still digits to be removed (`k > 0`), pop digits from the stack until `k` becomes 0.
   - Construct the smallest number from the remaining digits in the stack:
     - Initialize an empty string `s`.
     - While the stack is not empty, pop digits from the stack and prepend them to `s`.
     - Reverse `s`.
   - Remove leading zeros from `s`.
   - Return `s`.

5. **Function:** `main()`
6. **Algorithm:**
   - Read the input number `s` as a string.
   - Read the number of digits to remove `k`.
   - Call `removeKdigits(s, k)` and store the result in `res`.
   - Print `res`.
