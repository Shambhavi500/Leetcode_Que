# [182. Duplicate Emails](https://leetcode.com/problems/duplicate-emails/)

[Database](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 1 | 2026-10-28 | 2026-10-28 |

**Topics:** Database

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [mysql](solution.sql) | Accepted | 498 ms | 0B | 2026-10-28 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2026-10-28 | Accepted | mysql | 498 ms | 0B |

## Problem

<details>
<summary>Show description</summary>

<p>Table: <code>Person</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| email       | varchar |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table contains an email. The emails will not contain uppercase letters.
</pre>

<p>&nbsp;</p>

<p>Write a solution to report all the duplicate emails. Note that it&#39;s guaranteed that the email&nbsp;field is not NULL.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The&nbsp;result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Person table:
+----+---------+
| id | email   |
+----+---------+
| 1  | a@b.com |
| 2  | c@d.com |
| 3  | a@b.com |
+----+---------+
<strong>Output:</strong> 
+---------+
| Email   |
+---------+
| a@b.com |
+---------+
<strong>Explanation:</strong> a@b.com is repeated two times.
</pre>

</details>
