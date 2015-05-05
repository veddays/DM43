/*
Подгружаемы модули:
LCM_NN_N //НОК
MUL_ZZ_Z //Умножение
DIV_NN_N // Деление
SUB_ZZ_Z // Вычитание
TRANS_N_Z //Перевод из натурального в целое

Описание переменных:
a - первая дробь
b - вторая дробь
с - новая дробь

Описание значения возвращаемого функцией:
Функция возвращает новую дробь, которая является результатом вычитания.

Создатели:
Молодцова Юлия
Рогачева Екатерина
группа 4305
*/
RATIONAL SUB_QQ_Q(RATIONAL a, RATIONAL b)
{
RATIONAL c;
NATURAL nok, k1, k2;
INTEGER n1, n2, d1, d2;
//Нахождение НОК
nok = LCM_NN_N(a.denominator, b.denominator);

// Нахождение множителей числителей
k1 = DIV_NN_N(nok, a.denominator);
n1 = TRANS_N_Z(k1);
k2 = DIV_NN_N(nok, b.denominator);
n2 = TRANS_N_Z(k2);

// Приведение к общему знаменателю
c.denominator = nok;
d1 = MUL_ZZ_Z(a.numerator, n1);
d2 = MUL_ZZ_Z(b.numerator, n2);

// Вычитание
c.numerator = SUB_ZZ_Z(d1, d2);
return c;
}
