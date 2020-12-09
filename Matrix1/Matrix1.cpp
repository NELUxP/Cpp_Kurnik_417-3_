#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>

//				ЗАДАНИЕ

				/*транспонирование матрицы c++*/

class Matrix_
{
public:
	void Transp()
	{
		int i, j, N, M;
		int a [10][10];
		int b [10][10];
		std::cout << "Вводите количество строк для матрицы "; //ввод количества строк
		std::cin >> N;
		std::cout << "Вводите количество столбцов для матрицы "; //ввод количества столбцов
		std::cin >> M;
		std::cout << "Вводите Матрицу \n";
		//цикл по переменной i, в которой перебираем строки матрицы
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				std::cin >> a[i][j]; //ввод очередного элемента матрицы
		}
		//цикл по переменной j, в котором перебираем толбцы матрицы
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				b[i][j] = a[j][i]; //Транспонирование матрицы
			std::cout << "\n" << std::endl;

		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				std::cout << a[i][j] + 1<< "\t";//вывод НЕ Транспонированой Матрицы!
			std::cout << std::endl;
			std::cout << "\n\n"<<std::endl;

		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				std::cout << b[i][j] << "\t";//вывод матрицы после Транспонирование
			std::cout << "\n" << std::endl;

			std::cout<< std::endl;
		}

		
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	Matrix_ Tomain;
	Tomain.Transp();
	std::system("pause"); // вызов функции system() из стандартной библиотеки 
	return 0;
}
