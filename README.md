# Social Media Application - Fixed-Length ID Sorting

## Problem
Sort the fixed-length IDs:
324, 125, 456, 218, 102, 389, 275, 147

The assignment implements:
1. Merge Sort
2. Quick Sort

## Final sorted sequence
102, 125, 147, 218, 275, 324, 389, 456

## Repository Content
- `src/` - C source programs
- `input/` - input data
- `output/` - program outputs
- `trace/` - important intermediate steps
- `analysis/` - complexity and comparison analysis

## Conclusion
Merge Sort guarantees O(n log n) worst-case time and requires O(n) additional space.
Quick Sort has O(n log n) average time but O(n^2) worst-case time and generally uses less
additional memory. For large datasets where predictable performance is required, Merge Sort
is suitable because its O(n log n) worst-case performance is guaranteed.

Note: "digit position" processing normally describes Radix Sort. Merge Sort is traced by
merge passes/subarray sizes.
