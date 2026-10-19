# [976. Largest Perimeter Triangle](https://leetcode.com/problems/largest-perimeter-triangle/)

[Array](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 2 | 2026-07-29 | 2026-07-29 |

**Topics:** Array, Math, Greedy, Sorting, Quicksort, Polygons

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [cpp](solution.cpp) | Accepted | 5 ms | 25.5 MB | 2026-07-29 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2026-07-29 | Accepted | cpp | 5 ms | 25.5 MB |
| 2026-07-29 | Accepted | cpp | - | - |

## Problem

<details>
<summary>Show description</summary>

<p>Given an integer array <code>nums</code>, return <em>the largest perimeter of a triangle with a non-zero area, formed from three of these lengths</em>. If it is impossible to form any triangle of a non-zero area, return <code>0</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2,1,2]
<strong>Output:</strong> 5
<strong>Explanation:</strong> You can form a triangle with three side lengths: 1, 2, and 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [1,2,1,10]
<strong>Output:</strong> 0
<strong>Explanation:</strong> 
You cannot use the side lengths 1, 1, and 2 to form a triangle.
You cannot use the side lengths 1, 1, and 10 to form a triangle.
You cannot use the side lengths 1, 2, and 10 to form a triangle.
As we cannot use any three side lengths to form a triangle of non-zero area, we return 0.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>3 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>6</sup></code></li>
</ul>

</details>
