# Write your MySQL query statement below
with CTE as (
    select email,count(*) as c
    from Person
    group by email
    having c>1
)
select email as Email
from CTE