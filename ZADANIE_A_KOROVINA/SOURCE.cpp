#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще

int fibonacci(int number)
{
    if (number == 0)
        return 0;
    if (number == 1)
        return 1;
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int ZADANINE_2(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return num * ZADANINE_2(num - 1);
}

int bynom_00(int m, int n);
int bynom_00(int m, int n)
{
    if (m == 0 || m == n || n == 0) return 1;
    else return bynom_00(m, n - 1) + bynom_00(m - 1, n - 1);
}

int main(void)
{
    setlocale(LC_ALL, "Russian");
    int m, n;

    for (int i = 0; i < 14; ++i)
        std::cout << fibonacci(i) << " " << std::endl;

    std::cout << "\n REKURSIVNYA FUNCTYA 4NCLO = " << ZADANINE_2(12)<< std::endl;
    std::cout << "Введите m и n:\n" << std::endl;
    std::cin>> n ;
    std::cin >> m;
    std::cout << "Ответ \n" << bynom_00(m ,n) << std::endl;
    return 0;

std::system("pause");
}
