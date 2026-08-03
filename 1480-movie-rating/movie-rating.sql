# Write your MySQL query statement below
select results from

(select u.name as results 
from Users u 
join Movierating as mr
on u.user_id=mr.user_id
group by u.user_id,u.name
order by count(*) desc,u.name
limit 1) t1

UNION ALL

select results from 
(select m.title as results
from Movies as m
join MovieRating as mr
on m.movie_id=mr.movie_id
where created_at between '2020-02-01' and '2020-02-29'
group by m.movie_id,m.title
order by avg(rating) desc,m.title
limit 1) t2;
