# Write your MySQL query statement below

SELECT firstName , lastName , city , state 
FROM PERSON p LEFT JOIN Address a
ON p.personId=a.personId
