#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<cmath>
#include<stdio.h> //в C
#include<cstdio> //в C++
#include<fstream> 

////стеком(stack))локальная память
int main()
{
    setlocale(LC_ALL, "Russian");
  /// эти C a ТАКЖЕ  C++
  /// из библиотеки #include<cmath>
    ////std::cout << 15.0/7.0 << std::endl; // результат - 2.14....
    /// "round()" - стандартное округление к ближайшему целому
    /// "floor()" - округление к меньшему
    /// "ceil()" - округление к большему целому.
    /// static_cast<требуемый_тип>(операнд)  
    /// 
    /// std::cout << static_cast<float>(int_val)/2; // печатает 7.5 


    double x1 = 15.6;
    double x2 = 15.4;
    std::cout << "round(15.6) = " << round(x1) << std::endl;
    std::cout << "round(15.4) = " << round(x2) << std::endl;
    std::cout << "ceil(15.6) = " << ceil(x1) << std::endl;
    std::cout << "ceil(15.4) = " << ceil(x2) << std::endl;
    std::cout << "floor(15.6) = " << floor(x1) << std::endl;
    std::cout << "floor(15.4) = " << floor(x2) << std::endl;

    int int_val_static = 15;
    int* ptr_int_val = new int;
    *ptr_int_val = 15;

    ///std::cout << reinterpret_cast<double>(int_val_static) / 2 << std::endl;

   std::cout << "\n\n  static_cast = " << static_cast<float>(int_val_static) / 2 << std::endl;

   /// std::cout << dynamic_cast<double>(ptr_int_val) / 2 << std::endl;

   std::cout << "\n\n *************" << std::endl;

   ///                 Файлы


   //Все операции по работе с файлами(и с другими общими ресурсами машины : 
   //порты, сетевые сокеты, драйверы оборудования, нераспределённая оперативная память) 
   //выполняются не напрямую программной, и даже не библиотечными функциями, а при посредничестве ОС.Т.к.к 
   //примеруфункция fwrite не пишет на сектора жёсткого диска напрямую, а обращается к соответствующей фукнции ОС, 
   // которая производит требуемое действие, либо отклоняет его.


   //FILE - структура данных из <stdio.h>(точнее из <corecrt_wstdio.h>, подключенного внутри <stdio.h>)
   std::cout << "\n*************Демонстрация работа с Файлами*************" << std::endl;

   FILE* ptrFile;
   fopen_s(&ptrFile, "file.txt", "rb");
   if (ptrFile == NULL) perror("Ошибка открытия файла");
   else
   {
           fseek(ptrFile, 8, SEEK_SET);
           fputs("9", ptrFile);// дописать слово в файл 
           std::cout << "в Файле записаны значения" << std::endl;

       fclose(ptrFile); // закрыть файл
       std::cout << "Файл закрыт" << std::endl;
   }

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

   ifs.flush();///отдать команду принуде
   char buffer[512] = { 0 };
   ifs.seekg(-100, std::fstream::end);
   ifs.read(buffer, 20);
   ifs.flush();

   char buffer2[100] = {0};
   ifs.seekp(100, std::fstream::beg);
   ifs.write(buffer2, 100);
   ifs.flush();
   ifs.close();

    std::system("pause"); // вызов функции system() из стандартной библиотеки 
    return 0;
}