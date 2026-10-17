with rnk as (
    select score,DENSE_RANK() over(order by score DESC) as `rank`
    from Scores
)
select * 
from rnk
order by score DESC;