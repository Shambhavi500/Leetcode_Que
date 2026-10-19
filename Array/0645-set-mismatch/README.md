# [645. Set Mismatch](https://leetcode.com/problems/set-mismatch/)

[Array](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 1 | 2026-07-29 | 2026-07-29 |

**Topics:** Array, Hash Table, Bit Manipulation, Sorting

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [cpp](solution.cpp) | Accepted | 0 ms | 25.2 MB | 2026-07-29 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2026-07-29 | Accepted | cpp | 0 ms | 25.2 MB |

## Problem

<details>
<summary>Show description</summary>

<p>You have a set of integers <code>s</code>, which originally contains all the numbers from <code>1</code> to <code>n</code>. Unfortunately, due to some error, one of the numbers in <code>s</code> got duplicated to another number in the set, which results in <strong>repetition of one</strong> number and <strong>loss of another</strong> number.</p>

<p>You are given an integer array <code>nums</code> representing the data status of this set after the error.</p>

<p>Find the number that occurs twice and the number that is missing and return <em>them in the form of an array</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [1,2,2,4]
<strong>Output:</strong> [2,3]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [1,1]
<strong>Output:</strong> [1,2]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>2 &lt;= nums.length &lt;= 10<sup>4</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

</details>
