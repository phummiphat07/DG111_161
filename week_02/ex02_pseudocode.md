BEGIN
INPUT score
IF score >= 80 THEN

    grade = "A"
ELSE IF score >= 70 THEN

    grade = "B"
ELSE IF score >= 60 THEN

    grade = "C"
ELSE IF score >= 50 THEN

    grade = "D"
ELSE grade = "F"
END IF
OUTPUT grade.

END

---



BEGIN

INPUT  a,b -> a และ b

IF a > b THEN
 ...
ELSE
 ...
END IF

END

---

BEGIN

INPUT n

i = 1

IF i <= N THEN

 ...

ELSE

 i = i + 1

END IF

END
