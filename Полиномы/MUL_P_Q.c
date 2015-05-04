/*
Подгружаемы модули:
MUL_ZZ_Z

Описание переменных:
a - исходный многочлен
b - рациональный коэффициент
с - возвращаемый многочлен

Описание значения возвращаемого функцией:
Функция возвращает новый многочлен, который является результатом умножения исходного многочлена на рациональное число.

Создатели:
Самсонов Вячеслав
Сыромятников Михаил
группа 4306
*/

POLYNOMIAL MUL_P_Q (POLYNOMIAL a, RATIONAL b)
  {
  	POLYNOMIAL c;
  	for(int i=0; i<degree, i++)
  	  c.(factors+i).numerator = MUL_ZZ_Z (a.(factors+i).numerator, b.numerator);
  	  c.(factors+i).denominator = MUL_ZZ_Z (a.(factors+i).denominator, b.denominator);
  	  if(a.(factors+i).sign == 1 && b.(factors+i).sign == 1)
  	    c.(factors+i).sign = 0;
  	  else
  	    if(a.(factors+i).sign == 1 || b.(factors+i).sign == 1)
  	      c.(factors+i).sign = 1;
  	    else
  	      c.(factors+i).sign = 0;
  	return c;
  }
