CREATE TABLE Ketan_Table (
    id SERIAL PRIMARY KEY,
    name TEXT NOT NULL,
    age INTEGER,
    email TEXT
);

select * from Ketan_Table
ORDER BY name DESC

INSERT INTO Ketan_Table (id ,name, age, email)
VALUES 
    (1,'Alice Johnson', 21, '56'),
    (2,'Bob Smith', 23, 'bob@example.com'),
    (3,'Charlie Nguyen', 20, NULL),
	(4,'Praneetha', 26,'shadapraneethareddy@gmail.com');

UPDATE Ketan_Table
SET age = 27
WHERE name = 'Alice Johnson'
ORDER BY name [DESC];

DELETE FROM Ketan_Table
WHERE id = 1;

