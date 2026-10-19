# Write your MySQL query statement below

SELECT 'Low Salary' AS category,
(SELECT COUNT(*) FROM Accounts WHERE income < 20000) AS accounts_count

UNION ALL

SELECT 'Average Salary',
(SELECT COUNT(*) FROM Accounts WHERE income BETWEEN 20000 AND 50000)

UNION ALL

SELECT 'High Salary',
(SELECT COUNT(*) FROM Accounts WHERE income > 50000);
