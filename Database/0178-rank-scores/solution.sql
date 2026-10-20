# Write your MySQL query statement below

SELECT score , DENSE_RANK() over (ORDER BY score DESC) as 'rank'
FROM scores
ORDER BY score DESC
