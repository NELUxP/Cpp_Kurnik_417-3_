#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочный файл дл€ функции setlocale()
#include<iomanip> // заголовочный файл дл€ cout, Ђ и много чего еще
#include<cmath>
#include<stdio.h> //в C
#include<cstdio> //в C++
#include<fstream> 

int main()
{
    setlocale(LC_ALL, "Russian");
    double Matrix1[3][3];

    std::cout << "¬водите матрицу 3 x 3 " << std::endl;
    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            std::cin >> Matrix1[c][r];//ввод в консоль
        }
    }

    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            std::cout << Matrix1[c][r] + 1;
        }
        std::cout << std::endl;
    }

    std::system("pause"); // вызов функции system() из стандартной библиотеки 
    return 0;
}