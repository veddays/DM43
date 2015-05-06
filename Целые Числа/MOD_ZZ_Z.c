/*MOD_ZZ_Z
Описание:
	Функция возвращает остаток от деления большего целого числа на меньшее или равное натуральное с остатком (делитель отличен от нуля)
Подключаемые модули:
DIV_ZZ_Z
TRANS_N_Z
MULL_ZZ_Z
SUB_Z_Z
	
Описание переменных:
	a - Делимое
	b - Делитель
	k - Вспомогательная переменная
	result - Остаток от деления
Бурыкин Емельян
Мясоедова Елизавета
4306
*/

INTEGER MOD_ZZ_Z(struct INTEGER a, struct NATURAL b)
{
  INTEGER result, k;
  k=DIV_ZZ_Z(a, b);
  b=TRANS_N_Z(b);
  k=MULL_ZZ_Z(k, b);
  result=SUB_Z_Z(a, k);
  return result;
}
