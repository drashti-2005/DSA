# Write your MySQL query statement below
select p.product_id, round(ifnull(sum(p.Price*u.Units)/sum(units),0),2) as average_price
from Prices as p
left join UnitsSold As u
on p.product_id = u.product_id
and purchase_date between p.start_date and p.end_date
group by  p.product_id;