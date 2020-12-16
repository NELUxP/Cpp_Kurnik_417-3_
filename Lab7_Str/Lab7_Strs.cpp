#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<cmath>
#include<stdio.h> //в C
#include<cstdio> //в C++
#include<fstream> 
#include<cstring>
#include<string>

int main()
{
    setlocale(LC_ALL, "Russian");
    ///2. работа с файлами на c++ 



    std::fstream ifs; ///создание объекта Класса
    ifs.open("file2.txt", std::fstream::in
        | std::fstream::out
        | std::fstream::ate
    );

    //std::fstream::in - только для чтения
    //std::fstream::out - только для записи
    //std::fstream::trunc - перезапись если было содержимое
    //std::fstream::app - Запись в конце файла
   // std::fstream::binary - открыть файл ,не регируя на \n \r на разделители

    if (!ifs.is_open())
    {
        std::cout << "Не удалось открыть файл" << std::endl;
        return -1;
    }

    ifs << "\n*************Демонстрация работа с Файлами*************" << std::endl;
     double Kexe = 15.6;
    double Kexe1 = 15.4;
    ifs << "round(15.6) = " << round(Kexe) << std::endl;
    ifs << "round(15.4) = " << round(Kexe1) << std::endl;
    ifs << "ceil(15.6) = " << ceil(Kexe) << std::endl;
    ifs << "ceil(15.4) = " << ceil(Kexe1) << std::endl;
    ifs << "floor(15.6) = " << floor(Kexe) << std::endl;
    ifs << "floor(15.4) = " << floor(Kexe1) << std::endl;

    /// ifs.seekg() "seek gor get position"
 /// ifs.seekp() "seek for put position"

    ifs.flush();///отдать команду принудительно
    char buffer[512] = { 0 };
    ifs.seekg(-100, std::fstream::end);
    ifs.read(buffer, 20);
    ifs.flush();

    char buffer2[100] = { 0 };
    ifs.seekp(100, std::fstream::beg);
    ifs.write(buffer2, 100);
    ifs.flush();
    ifs.close();

	std::system("pause"); // вызов функции system() из стандартной библиотеки 
	return 0;
}