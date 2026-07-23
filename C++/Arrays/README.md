# Arrays

Arrays are one of the most fundamental data structures in programming and are frequently asked in coding interviews. This section covers essential array-based problems and the patterns used to solve them efficiently.

---

## 📚 Patterns Covered

- HashMap
- HashSet
- Greedy
- Prefix & Suffix
- Kadane's Algorithm
- Moore's Voting Algorithm
- Sorting
- Interval Merging
- Dutch National Flag Algorithm
- Observation
- Custom Sorting
- Two Pointers
- Floyd's Cycle Detection

---

## ✅ Problems Solved

| # | Problem | Pattern | Difficulty |
|---|---------|---------|------------|
| 1 | Two Sum | HashMap | Easy |
| 11 | Container With Most Water | Two Pointers | Medium |
| 15 | 3Sum | Two Pointers + Sorting | Medium |
| 31 | Next Permutation | Observation | Medium |
| 53 | Maximum Subarray | Kadane's Algorithm | Medium |
| 56 | Merge Intervals | Sorting + Greedy | Medium |
| 57 | Insert Interval | Interval Merging | Medium |
| 75 | Sort Colors | Dutch National Flag | Medium |
| 121 | Best Time to Buy and Sell Stock | Greedy | Easy |
| 122 | Best Time to Buy and Sell Stock II | Greedy | Medium |
| 169 | Majority Element | Moore's Voting Algorithm | Easy |
| 179 | Largest Number | Custom Sorting | Medium |
| 217 | Contains Duplicate | HashSet | Easy |
| 238 | Product of Array Except Self | Prefix & Suffix | Medium |
| 287 | Find the Duplicate Number | Floyd's Cycle Detection | Medium |

---

## 🎯 Key Learnings

- HashMap enables constant-time lookups for complement and frequency-based problems.
- Greedy algorithms make locally optimal decisions to achieve the global optimum.
- Prefix and suffix products help eliminate repeated computations.
- Kadane's Algorithm efficiently finds the maximum subarray sum in linear time.
- Moore's Voting Algorithm identifies the majority element using constant space.
- Sorting simplifies interval-related problems significantly.
- Three-pointer partitioning is the core idea behind the Dutch National Flag algorithm.
- Two pointers reduce time complexity by eliminating impossible candidates based on problem-specific observations.
- Combining sorting with two pointers efficiently solves triplet-based problems while naturally handling duplicates.
- Arrays can sometimes be modeled as linked lists, allowing Floyd's Cycle Detection to solve problems in **O(n)** time using **O(1)** extra space.
- Careful observation can reduce seemingly complex problems into elegant in-place solutions.
- Custom comparators allow sorting based on problem-specific conditions.

---

## ⚠️ Common Mistakes

- Forgetting to sort before solving interval problems.
- Incorrectly updating pointers in the Dutch National Flag algorithm.
- Not initializing prefix arrays before accessing indices.
- Mishandling edge cases while finding the next permutation.
- Moving the taller pointer instead of the shorter one in the Container With Most Water problem.
- Forgetting to skip duplicate elements while generating unique triplets in 3Sum.
- Mixing indices and values while implementing Floyd's Cycle Detection.
- Ignoring the case where the final answer becomes `"0"` in Largest Number.

---

## ⏱ Complexity Summary

| Pattern | Time | Space |
|---------|------|-------|
| HashMap | O(n) | O(n) |
| HashSet | O(n) | O(n) |
| Greedy | O(n) | O(1) |
| Prefix & Suffix | O(n) | O(1)* |
| Kadane's Algorithm | O(n) | O(1) |
| Moore's Voting Algorithm | O(n) | O(1) |
| Sorting + Greedy | O(n log n) | O(n) |
| Interval Merging | O(n log n) | O(n) |
| Dutch National Flag | O(n) | O(1) |
| Observation | O(n) | O(1) |
| Two Pointers | O(n) | O(1) |
| Two Pointers + Sorting | O(n²) | O(1)** |
| Custom Sorting | O(n log n) | O(n) |
| Floyd's Cycle Detection | O(n) | O(1) |

> *Excluding the output array where applicable.  
> **Sorting may require O(log n) auxiliary stack space depending on the sorting implementation.
