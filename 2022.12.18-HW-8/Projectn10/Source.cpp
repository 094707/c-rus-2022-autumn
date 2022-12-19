#include <iostream>

int del(int n, int* st_1, int* st_2, int k)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (st_1[i] == k)
        {
            count += 1;
        }
        if (st_2[i] == k)
        {
            count += del(n, st_1, st_2, st_1[i]);
        }
    }
    return count;
}

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;

    std::cin >> n;
    int* st_1{ 0 };
    st_1 = new int [n];
    int* st_2{ 0 };
    st_2 = new int [n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> st_1[i] >> st_2[i];
    }
    std::cin >> k;

    std::cout << del(n, st_1, st_2, k) << std::endl;

    delete[] st_1;
    delete[] st_2;

    return EXIT_SUCCESS;
}