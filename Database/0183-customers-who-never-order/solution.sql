# Write your MySQL query statement below

SELECT name as Customers
FROM Customers c LEFT JOIN Orders r
ON c.id=r.customerid
WHERE customerId is NULL
