1. **Function:** `bfs(rGraph, s, t, parent)`
2. **Inputs:**
   - `rGraph`: The residual graph representing remaining capacities of edges.
   - `s`: Source vertex.
   - `t`: Sink vertex.
   - `parent`: An array to store the augmenting path.
3. **Output:** Returns true if there is a path from source `s` to sink `t` in the residual graph `rGraph`.
4. **Algorithm:**

   - Initialize an array `visited` to mark visited vertices and a queue `q`.
   - Enqueue the source vertex `s` and mark it as visited.
   - While the queue is not empty:
     - Dequeue a vertex `u`.
     - For each adjacent vertex `v` of `u`:
       - If `v` is not visited and there is a residual capacity on edge `u-v`:
         - If `v` is the sink `t`, update `parent` and return true.
         - Otherwise, enqueue `v`, mark it as visited, update `parent`, and continue.
   - If the sink `t` is not reachable, return false.

5. **Function:** `fordFulkerson(graph, s, t)`
6. **Inputs:**
   - `graph`: The original graph with capacities.
   - `s`: Source vertex.
   - `t`: Sink vertex.
7. **Output:** Returns the maximum flow from `s` to `t` in the given graph.
8. **Algorithm:**
   - Initialize `rGraph` as a copy of `graph`.
   - Initialize `parent` array.
   - While there is an augmenting path from `s` to `t`:
     - Find the minimum residual capacity `path_flow` along the path.
     - Update the residual capacities of the edges and reverse edges along the path.
     - Add `path_flow` to the max flow.
   - Return the max flow.
