/*
Подгружаемы модули:
MUL_ZZ_Z

Описание переменных:
a - первая дробь
b - вторая дробь
с - новая дробь

Описание значения возвращаемого функцией:
Функция возвращает новую дробь, которая является результатом умножения.

Создатели:
Самсонов Вячеслав
Сыромятников Михаил
группа 4306
*/
RATIONAL MUL_QQ_Q (RATIONAL a, RATIONAL b)
  {
  	RATIONAL c;
  	c.numerator = MUL_ZZ_Z(a.numerator, b.numerator);
  	c.denominator = MUL_ZZ_Z(a.denominator, b.denominator);
  	if(a.sign == 1 && b.sign == 1)
  	  c.sign = 0;
  	else
  	  if(a.sign == 1 || b.sign == 1)
  	    c.sign = 1;
  	  else
  	    c.sign = 0;
  	return c;
  }
