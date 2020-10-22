#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл дл€ функции setlocale()
#include<iomanip> // заголовочный файл дл€ cout, Ђ и много чего еще
#include<bitset>
/*транспонирование матрицы c++
* ”множение ,деление и пр со скол€ром
* ”множение двух матриц поэлементное
*/

/*
* умножение двух матриц матричное
* умножение матрицы на вектор
* скал€рное умножение двух векторов
* векторное умножение двух векторов
*/

int main()
{
	setlocale(LC_ALL, "Russian");
    double Matrix1[3][3];

    std::cout << "¬водите матрицу 3x3 " << std::endl;
    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            std::cin>> Matrix1[c][r];//ввод в консоль
        }
    }

    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            std::cout << Matrix1[c][r]<<" ";
        }
        std::cout << std::endl;
        std::cout << system("color 27")<< std::endl;

    }

	std::system("pause"); // вызов функции system() из стандартной библиотеки 
	return 0;
}