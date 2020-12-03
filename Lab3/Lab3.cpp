#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>

int main()
{
	setlocale(LC_ALL, "Russian");
	// нельзя распечатать не инициализированную переменную
	int * ptr_int;
	int a = 1337;
	ptr_int = &a;

	std::cout <<"Скомпилируйте приложение в режиме  и распечатайте sizeof(ptr_int) = " << sizeof(ptr_int) << std::endl;
	std::cout <<"Скомпилируйте приложение в режиме  и распечатайте sizeof(*ptr_int) = " << sizeof(*ptr_int) << std::endl;
	std::cout << "Распечатайте значение ptr_int = "<< system("color 27")<< ptr_int << std::endl;
	std::cout << "Распечатайте значение *ptr_int = "<<*ptr_int << std::endl;

	int array_of_int[20];
	char array_of_char[10];
	double array_of_double[15];

	int A = 5;
	double array_of_int0x00[5];
	//double array_of_int0x00[A]; // должна стоять только константа и так так делать нельзя

	int array_of_int2[1][1];
	int array_of_intA[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

		for (int i = 0; i < 3; i++)
		{
			std::cout << array_of_intA[3][3]<< std::endl;
		}

		int check_[2][2];
		std::cout << "\nВывод check = " << *check_ << std::endl;

		int array10[3][3];
		for (int row = 0; row < 3; row++)
		{
			for (int col = 0; col <=  row ; col++)//цикл прохода по колонкам и заполняет возрастающими
			{
				array10[row][col] = col + 1;
				std::cout << array10[row][col] << "\t";
			}
			std::cout << std::endl;
		}


	//pointer - переменная которое содержат адрес
	//Массив (array) – блок из нескольких однотипных переменных, доступ к которым по отдельности осуществляется по индексу.
	// если в проект появится какой либо новый файл то его необходимо добавить по расширению
	//1верися в гите называется commit
	// 2git remote add "имя репозиторий.git"
	// 3git remote -v проверить что ссылка 
	//4 синхрониз локальный репозитории с удаленным git push короткое_имя master
	//5 git status / git log диагностировать возможные ошибки
	//6 в конце каждой лобараторной с помощью git add добавляем новые файлы
	// git clone "ссылка имя репоситории" копирует репоситории в папку
	// git checkout "название ветки" для переключение ветки

	std::system("pause"); // вызов функции system() из стандартной библиотеки 
	return 0;
}