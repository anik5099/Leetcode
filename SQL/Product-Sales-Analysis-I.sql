Select Product.product_name, sales.year, sales.price
FROM Sales
JOIN Product ON Product.product_id = Sales.product_id;