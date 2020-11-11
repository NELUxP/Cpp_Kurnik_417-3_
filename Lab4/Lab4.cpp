#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>
////стеком(stack))локальная память
int main()
{
    setlocale(LC_ALL, "Russian");
    //Задание 1
    double * X = new double;

    //задание 2
    double XOX[1] = { 10 };
    double* ptr0_double = new double[*XOX];

    for (int i = 0; i < 100; i++)//цикл прохода по колонкам и заполняет возрастающими
    {
        std::cout << *XOX << std::endl;
    }
    //Задание 3
    double num_of_cols = 10, num_of_rows = 10;
    double** ptr_double_2Darray = new double* [num_of_rows]; // указатель на массив указателей на строки (1D массивы)
    
    for (int i = 0; i < 10; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            std::cout << (num_of_rows+=num_of_cols) << std::endl;
        }
    }
    //задание 4
    for (;;)
    {
        double * Y = new double;
    }





    //void- пустой тип 
    std::system("pause"); // вызов функции system() из стандартной библиотеки 
    return 0;
}