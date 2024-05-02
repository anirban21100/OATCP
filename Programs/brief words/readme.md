1. **Function:** `genSubsequences(str, current, index, length)`
2. **Inputs:**
   - `str`: The original string.
   - `current`: The current subsequence being generated.
   - `index`: The current index in the original string.
   - `length`: The length of subsequences to generate.
3. **Output:** A vector of strings containing all subsequences of length `length` of the original string `str`.
4. **Algorithm:**
   - If `length` is 0, add `current` to the result vector and return.
   - If `index` reaches the end of `str`, return an empty vector.
   - Recursively call `genSubsequences` with the current character added to `current` and `length` decremented by 1, and append the result to `result`.
   - Recursively call `genSubsequences` without adding the current character to `current` and with the index incremented by 1, and append the result to `result`.
   - Return `result`.
