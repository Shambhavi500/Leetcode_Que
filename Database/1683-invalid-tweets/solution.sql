# Write your MySQL query statement below

SELECT tweet_id
FROM TWeets
WHERE CHAR_LENGTH(content) > 15;
