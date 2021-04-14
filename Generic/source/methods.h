
template<class T>
void gen(int n, int k, T mas[])
{
    if (k > n)
        return;
    int c[k+1];
    c[0] = -1;
    for (int j = 1; j <= k; j++)
        c[j] = j;
    int j = 1;

    while (j != 0)
    {
        bool flag = true;
        for (int i = 0; i < c[1] && flag; i++)
            if (mas[i] == mas[c[1] - 1] && i != c[1] - 1)
                flag = false;
        if (flag)
        {
            for (int i = 1; i <= k; i++)
                std::cout << mas[c[i] - 1] << ' ';
            std::cout << std::endl;
        }
        j = k;
        while (c[j] == n - k + j)
            j = j - 1;
        c[j] = c[j] + 1;
        for (int i = j + 1; i <= k; i++)
            c[i] = c[i-1] + 1;

    }
}