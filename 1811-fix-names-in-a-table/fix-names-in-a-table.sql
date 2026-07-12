SELECT
    user_id,
    CONCAT(
        UPPER(LEFT(name, 1)),
        lower(SUBSTRING(name, 2))
    ) AS name
FROM Users
order by user_id;