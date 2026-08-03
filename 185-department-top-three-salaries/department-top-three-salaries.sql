# Write your MySQL query statement below
with CTE as(
    select d.name as Department,e.name as Employee,Salary,
    dense_rank()over(partition by d.name order by Salary desc)as rnk
    from Employee as e
    join department as d
    on e.departmentId=d.id 
)
select Department,Employee,Salary 
from CTE
where rnk<=3;