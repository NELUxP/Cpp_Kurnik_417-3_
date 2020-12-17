#include<iostream>
#include<locale.h> 
#include<iomanip> 
#include<cmath>
#include<stdio.h>
#include<cstdio>
#include<fstream> 
#include<cstring>
#include<string>


int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    FILE* Myfile;
        int x, s = 0;
        fopen_s(&Myfile, "OPEN.txt", "rb");
        std::cout << "Файл открыт" << std::endl;
        while (std::cin >> x)
            s += x;
        std::cout << s << std::endl;
    std::system("pause");
    return 0;
}