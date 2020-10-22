#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>

int main()
{
    setlocale(LC_ALL, "Russian");
   

    std::system("pause"); // вызов функции system() из стандартной библиотеки 
    return 0;
}