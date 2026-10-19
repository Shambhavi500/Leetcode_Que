# Write your MySQL query statement below
SELECT DISTINCT f.user_id , COUNT(DISTINCT follower_id) AS followers_count
FROM Followers f
GROUP BY f.user_id
