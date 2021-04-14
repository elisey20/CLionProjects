#include <iostream>
#include "methods.h"

const int N = 6;

int main()
{

    int mas[N] = {1, 2, 3, 4, 5, 6};

    gen<int>(N, 10, mas);

    char str[] = "privet";

    gen<char>(6, 4, str);

}


/*
 *
 * В ОТЧЕТЕ
 * 1. Описание алгоритма
 * 2. Спецификация
 *      заголовок ф-ции с указанием параметров и что она делает
 * 3. Тесты
 *
 */