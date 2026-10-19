# Write your MySQL query statement below
SELECT q.query_name , ROUND(AVG(rating/position),2) AS quality , ROUND(SUM(rating < 3) * 100.0 / COUNT(result), 2)
AS  poor_query_percentage
FROM Queries q
GROUP BY query_name
