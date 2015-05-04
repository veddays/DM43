/*DIV_ZZ_Z
Описание:
	Функция возвращает частное от деления большего целого числа на меньшее или равное натуральное с остатком(делитель отличен от нуля)
Подключаемые модули:
	DIV_NN_N
Описание переменных:
	num - Первое число
	den - Второе число
	buff - Вспомогательная переменная
	result - Результат деления

Голубев Гордей
Хабаров Артем
4306
*/
INTEGER DIV_ZZ_Z(struct INTEGER num, struct NATURAL den)
	{
		INTEGER result;
		NATURAL buff; 
		buff.index=num.index;
		buff.number=num.number;
		buff=DIV_NN_N(buff,den);
		result.index=buff.index;
		result.number=buff.number;
		result.sign=num.sign;
		return result;
	}