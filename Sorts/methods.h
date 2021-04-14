#pragma once

int increment(int inc[], int size);

template<class T>
void shellSort(T * a, int size, unsigned long & compare, unsigned long & swap)
{
    int inc, i, j, seq[40];
    int s;

    // вычисление последовательности приращений
    s = increment(seq, size);
    //compare++;
    while (s >= 0)
    {
        // сортировка вставками с инкрементами inc[]
        inc = seq[s--];

        for (i = inc; i < size; i++)
        {
            T temp = a[i];
            for (j = i-inc; (j >= 0) && (a[j] < temp); j -= inc)
            {
                a[j+inc] = a[j];
                compare++;
                swap++;
            }
            a[j+inc] = temp;
            compare++;
            //compare += 2;
            //swap++;
        }
        //compare += 2;
    }
}

template<class T>
void quickSort (T * arr, int left, int right, unsigned long & compare, unsigned long & swap)
{
    int l = left, r = right;
    T temp, pivot = arr[ (left+right)/2 ];

    //compare += 3;
    while (l <= r)
    {
        while (arr[l] > pivot)
        {
            //compare++;
            l++;
        }
        while (arr[r] < pivot)
        {
            //compare++;
            r--;
        }

        if (l <= r)
        {
            compare++;
            if (arr[l] < arr[r])
            {
                temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
                swap++;
            }

            l++; r--;
        }
        //compare += 4;
    }


    if (left < r)
        quickSort (arr, left, r, compare, swap);

    if (l < right)
        quickSort (arr, l, right, compare, swap);
}

template<class T>
void quickSort(T * arr, int size, unsigned long & compare, unsigned long & swap)
{
    quickSort<T>(arr, 0, size-1, compare, swap);
}