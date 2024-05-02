1. **Function:** `hammingDistance(x, y)`
2. **Inputs:**
   - `x`: First integer.
   - `y`: Second integer.
3. **Output:** Returns the Hamming distance between `x` and `y`, which is the number of positions at which the corresponding bits are different.
4. **Algorithm:**

   - Initialize `count` to 0.
   - Iterate from the 31st bit to the 0th bit (assuming integers are 32-bit).
   - For each bit position `i`:
     - Get the `i`-th bit of `x` and `y` using bitwise AND with `(1 << i)`.
     - If the bits are different, increment `count`.
   - Return `count`.

5. **Function:** `main()`
6. **Algorithm:**
   - Read the integer `n` from input.
   - Initialize a vector `nums` to store `n` integers.
   - Read `n` integers and store them in `nums`.
   - Initialize `res` to 0.
   - Iterate over all pairs of indices `i` and `j` (where `i < j`) in `nums`:
     - Add the Hamming distance between `nums[i]` and `nums[j]` to `res`.
   - Print the value of `res`.
