//Подружаемые модули отсутствуют
//Прототип: size_t DEG_P_N (struct POLYNOMIAL st); st - структура с массивом коэффициентов factors и старшей степенью degree
//Возвращает степень многочлена по данному набору коэффициентов
//Необходимо подключение malloc.h
//Мясоедова, гр.4306

#include <malloc.h>

size_t DEG_P_N (struct POLYNOMIAL st)
  {
    return (_msize(st.factors)/sizeof(st.factors)-1); 
  }
