# [183. Customers Who Never Order](https://leetcode.com/problems/customers-who-never-order/)

[Database](../README.md) / [All problems](../../README.md)

| Difficulty | Status | Submissions | First tried | Solved on |
| --- | --- | --- | --- | --- |
| Easy | Solved | 1 | 2026-10-18 | 2026-10-18 |

**Topics:** Database

## My code

| Language | Result | Runtime | Memory | Date |
| --- | --- | --- | --- | --- |
| [mysql](solution.sql) | Accepted | 595 ms | 0B | 2026-10-18 |

## Submission history

| Date | Result | Language | Runtime | Memory |
| --- | --- | --- | --- | --- |
| 2026-10-18 | Accepted | mysql | 595 ms | 0B |

## Problem

<details>
<summary>Show description</summary>

<p>Table: <code>Customers</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
+-------------+---------+
id is the primary key (column with unique values) for this table.
Each row of this table indicates the ID and name of a customer.
</pre>

<p>&nbsp;</p>

<p>Table: <code>Orders</code></p>

<pre>
+-------------+------+
| Column Name | Type |
+-------------+------+
| id          | int  |
| customerId  | int  |
+-------------+------+
id is the primary key (column with unique values) for this table.
customerId is a foreign key (reference columns) of the ID from the Customers table.
Each row of this table indicates the ID of an order and the ID of the customer who ordered it.
</pre>

<p>&nbsp;</p>

<p>Write a solution to find all customers who never order anything.</p>

<p>Return the result table in <strong>any order</strong>.</p>

<p>The result format is in the following example.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> 
Customers table:
+----+-------+
| id | name  |
+----+-------+
| 1  | Joe   |
| 2  | Henry |
| 3  | Sam   |
| 4  | Max   |
+----+-------+
Orders table:
+----+------------+
| id | customerId |
+----+------------+
| 1  | 3          |
| 2  | 1          |
+----+------------+
<strong>Output:</strong> 
+-----------+
| Customers |
+-----------+
| Henry     |
| Max       |
+-----------+
</pre>

</details>
