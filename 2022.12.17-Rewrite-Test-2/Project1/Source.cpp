#include<iostream>

void spir_down(int** mas, int k, int a, int b, int n, int a1, int b1);
void spir_up(int** mas, int k, int a, int b, int n, int a1, int b1);

void spir_down(int** mas, int k, int a, int b, int n, int a1, int b1)
{
    for (int i = 0; i < k; ++i)
    {
        n++;
        mas[a + 1 + i][b] = n;
    }
    for (int i = 0; i < k; ++i)
    {
        n++;
        mas[a + k][b - 1 - i] = n;
        b1 = b - 1 - i;
    }
    a1 = a + k;
    if (k > 1)
    {
        spir_up(mas, k - 1, a1, b1, n, a1, b1);
    }
    return;
}
void spir_up(int** mas, int k, int a, int b, int n, int a1, int b1)
{
    for (int i = 0; i < k; ++i)
    {
        n++;
        mas[a - 1 - i][b] = n;
    }
    for (int i = 0; i < k; ++i)
    {
        n++;
        mas[a - k][b + 1 + i] = n;
        b1 = b + 1 + i;
    }
    a1 = a - k;
    if (k > 1)
    {
        spir_down(mas, k - 1, a1, b1, n, a1, b1);
    }
    return;
}

int main(int argc, char* argv[])
{
    int b1 = 0;
    int n = 0;
    std::cin >> n;
    int** arr = nullptr;
    arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; ++i)
    {
        arr[0][i] = i + 1;
        b1 = i;
    }

    spir_down(arr, n - 1, 0, b1, n, 0, 0);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return EXIT_SUCCESS;
}