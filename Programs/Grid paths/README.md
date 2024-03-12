ALGORITHM :
The algorithm uses memoization to avoid recalculating paths for already visited cells. Here's a step-by-step explanation of the algorithm:

1. Define a function gridpath that takes the current position (i, j), the dimensions of the grid (r, c), the grid A with obstacles, and a memoization grid paths.

2. Check if the current position (i, j) is out of bounds or if it is an obstacle. If so, return 0.

3. Check if the current position is at the bottom-right corner. If so, return 1 (found a valid path).

4. Check if the path from (i, j) to the bottom-right corner (r-1, c-1) has already been calculated. If so, return the precalculated value from paths.

5. Recursively calculate the number of paths from the current position to the bottom-right corner by moving either down (i+1, j) or right (i, j+1). Add these two values and store the result in paths[i][j].

6. Finally, return the number of paths from the top-left corner (0, 0) to the bottom-right corner (r-1, c-1).

7. The numpath function initializes the memoization grid and calls the gridpath function to find the total number of paths, modulo INF, and returns the result.
