#include<iostream>  //��������� std::cout << lllll << std::endl;
#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<cmath>
#include<stdio.h> //� C
#include<cstdio> //� C++
#include<fstream> 
#include<cstring>
#include<string>

int main()
{
    setlocale(LC_ALL, "Russian");
    ///2. ������ � ������� �� c++ 



    std::fstream ifs; ///�������� ������� ������
    ifs.open("file2.txt", std::fstream::in
        | std::fstream::out
        | std::fstream::ate
    );

    //std::fstream::in - ������ ��� ������
    //std::fstream::out - ������ ��� ������
    //std::fstream::trunc - ���������� ���� ���� ����������
    //std::fstream::app - ������ � ����� �����
   // std::fstream::binary - ������� ���� ,�� ������� �� \n \r �� �����������

    if (!ifs.is_open())
    {
        std::cout << "�� ������� ������� ����" << std::endl;
        return -1;
    }

    ifs << "\n*************������������ ������ � �������*************" << std::endl;
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

    ifs.flush();///������ ������� �������������
    char buffer[512] = { 0 };
    ifs.seekg(-100, std::fstream::end);
    ifs.read(buffer, 20);
    ifs.flush();

    char buffer2[100] = { 0 };
    ifs.seekp(100, std::fstream::beg);
    ifs.write(buffer2, 100);
    ifs.flush();
    ifs.close();

	std::system("pause"); // ����� ������� system() �� ����������� ���������� 
	return 0;
}