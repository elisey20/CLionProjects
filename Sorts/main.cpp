#include <iostream>
#include <ctime>
#include <random>
#include "methods.h"

#define SAY std::cout <<

const int SIZEE = 16;

int main()
{
    srand(time(NULL));
    int * a1 = new int[SIZEE];
    double * a2 = new double[SIZEE];

    for (int i = 0; i < SIZEE; i++)
    {
        a1[i] = 1;
        a2[i] = rand() * 0.00001;
    }

    unsigned long compare = 0;
    unsigned long swap = 0;

    double time1 = clock() / 1000.0;
    shellSort<int>(a1, SIZEE, compare, swap);
    double time2 = clock() / 1000.0;
    SAY "\nshellSort\n";
    SAY "Время выполнения: " << time2 - time1;
    SAY "\nЧисло сравнений: " << compare;
    SAY "\nЧисло обменов: " << swap;

//    SAY "\nSorted array: ";
//    for (int i = 0; i < SIZEE; i++)
//        SAY a1[i] << ' ';
//    SAY std::endl;

    time1 = clock() / 1000.0;
    quickSort<double>(a2, SIZEE, compare, swap) ;
    time2 = clock() / 1000.0;
    SAY "\n\nquickSort\n";
    SAY "Время выполнения: " << time2 - time1;
    SAY "\nЧисло сравнений: " << compare;
    SAY "\nЧисло обменов: " << swap;

//    SAY "\nSorted array: ";
//    for (int i = 0; i < SIZEE; i++)
//        SAY a2[i] << ' ';
//    SAY std::endl;

    return 0;
}
