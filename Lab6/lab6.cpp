#include<iostream>  //��������� std::cout << lllll << std::endl;
#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<cmath>
#include<stdio.h> //� C
#include<cstdio> //� C++
#include<fstream> 

////������(stack))��������� ������
int main()
{
    setlocale(LC_ALL, "Russian");
  /// ��� C a �����  C++
  /// �� ���������� #include<cmath>
    ////std::cout << 15.0/7.0 << std::endl; // ��������� - 2.14....
    /// "round()" - ����������� ���������� � ���������� ������
    /// "floor()" - ���������� � ��������
    /// "ceil()" - ���������� � �������� ������.
    /// static_cast<���������_���>(�������)  
    /// 
    /// std::cout << static_cast<float>(int_val)/2; // �������� 7.5 


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

   ///                 �����


   //��� �������� �� ������ � �������(� � ������� ������ ��������� ������ : 
   //�����, ������� ������, �������� ������������, ��������������� ����������� ������) 
   //����������� �� �������� �����������, � ���� �� ������������� ���������, � ��� �������������� ��.�.�.� 
   //�������������� fwrite �� ����� �� ������� ������� ����� ��������, � ���������� � ��������������� ������� ��, 
   // ������� ���������� ��������� ��������, ���� ��������� ���.


   //FILE - ��������� ������ �� <stdio.h>(������ �� <corecrt_wstdio.h>, ������������� ������ <stdio.h>)
   std::cout << "\n*************������������ ������ � �������*************" << std::endl;

   FILE* ptrFile;
   fopen_s(&ptrFile, "file.txt", "rb");
   if (ptrFile == NULL) perror("������ �������� �����");
   else
   {
           fseek(ptrFile, 8, SEEK_SET);
           fputs("9", ptrFile);// �������� ����� � ���� 
           std::cout << "� ����� �������� ��������" << std::endl;

       fclose(ptrFile); // ������� ����
       std::cout << "���� ������" << std::endl;
   }

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

   ifs.flush();///������ ������� �������
   char buffer[512] = { 0 };
   ifs.seekg(-100, std::fstream::end);
   ifs.read(buffer, 20);
   ifs.flush();

   char buffer2[100] = {0};
   ifs.seekp(100, std::fstream::beg);
   ifs.write(buffer2, 100);
   ifs.flush();
   ifs.close();

    std::system("pause"); // ����� ������� system() �� ����������� ���������� 
    return 0;
}