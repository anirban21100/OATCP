1. **Function:** `count_subgrids(color, n)`
2. **Inputs:**
   - `color`: A 2D array representing the colors in the grid (1 for the same color, 0 for different colors).
   - `n`: The size of the grid (`n x n`).
3. **Output:** Returns the number of subgrids where two rows have the same color in all columns.
4. **Algorithm:**

   - Initialize `subgrids` to 0.
   - Iterate over all pairs of rows `a` and `b` (where `a < b`) in the grid:
     - Initialize `count` to 0.
     - Iterate over all columns `i` in the grid:
       - If both rows `a` and `b` have the same color in column `i`, increment `count`.
     - Add `((count - 1) * count) / 2` to `subgrids` to count the number of subgrids formed by rows `a` and `b`.
   - Return `subgrids`.

5. **Function:** `main()`
6. **Algorithm:**
   - Read the size of the grid `n`.
   - Dynamically allocate memory for a 2D array `arr` of size `n x n`.
   - Read the values into the `arr`.
   - Call `count_subgrids(arr, n)` and store the result in `res`.
   - Print `res`.
