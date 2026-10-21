# Write your MySQL query statement below

SELECT d.name AS department ,e.name AS employee , e.salary AS Salary
FROM Employee e JOIN Department d
ON e.departmentId=d.id
WHERE (e.departmentId , e.salary) IN (
    SELECT departmentId , MAX(salary)
    FROM Employee
    GROUP BY departmentId
)
