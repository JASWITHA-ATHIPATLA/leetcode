# Write your MySQL query statement below
with employeeTotals as(select e.id,e.name,e.salary,d.name as Department 
from Employee e 
Join Department d 
on e.departmentId=d.id),
RankedEmployees as(
    select id,name,salary,Department,Rank() over(
        partition by Department 
        order by salary desc
    )as rank_num
    from employeeTotals
)
select Department,name as Employee,salary as Salary
from RankedEmployees where rank_num=1;