# 🚀 Data Structures & Algorithms (DSA) Series

Welcome to my DSA repository! I am **Krish Raj**, a B.Tech Computer Science and Engineering student. This repository serves as a structured tracker for my daily problem-solving journey, showcasing code implementations from naive approaches to highly optimized solutions.

---

## 🔗 Connect With Me

* **💼 LinkedIn:** [Krish Raj](https://www.linkedin.com/in/krish-raj-4932a6322/)
* **🌐 Personal Portfolio:** [rajkrish.netlify.app](https://rajkrish.netlify.app/)
* **🎯 LeetCode Profile:** [@raj_kishu0821](https://leetcode.com/u/raj_kishu0821/)

---

## 📂 Problem-Wise Code Directory

### 📋 Problem 1: Contiguous Subarray Generation
* **Objective:** Print all possible contiguous subarrays for a given array.
* **Implementations:**
  1. **`bruthforce.cpp` / `tempCodeRunnerFile.cpp` ($O(N^3)$ Complexity):** Uses three nested loops to fix the start pointer, end pointer, and iterate to print the elements.

---

### 📋 Problem 2: Maximum Subarray Sum (O(N²) Approach)
* **Objective:** Find the maximum sum among all possible subarrays using optimized nested loops.
* **Implementations:**
  1. **`maxOfSubstring.cpp` ($O(N^2)$ Complexity):** Eliminates the innermost printing loop. It tracks and accumulates the running sum directly as the ending pointer moves forward, comparing it with `INT_MIN` at each step.

---

### 📋 Problem 3: Maximum Subarray Sum (Optimal O(N) Approach)
* **Objective:** Solve the maximum subarray sum problem in linear time with a single pass.
* **Implementations:**
  1. **`kadanes_Algo.cpp` ($O(N)$ Complexity — Kadane's Algorithm):** * Implemented using a standard standard loop and an optimized **for-each loop** pattern.
     * Discards negative prefix sum contributions instantly by resetting the current sum to `0` if it falls below zero, ensuring optimal performance.

---

## 🛠️ Tech Stack

* **Language:** C++ (`.cpp`)
* **Compiler:** GCC / MinGW Runtime

*Every day is a step closer to mastering problem-solving!*
