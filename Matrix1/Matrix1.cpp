#include<iostream>  //��������� std::cout << lllll << std::endl;
#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<bitset>
/*���������������� ������� c++
* ��������� ,������� � �� �� ��������
* ��������� ���� ������ ������������
*/

/*
* ��������� ���� ������ ���������
* ��������� ������� �� ������
* ��������� ��������� ���� ��������
* ��������� ��������� ���� ��������
*/

int main()
{
	setlocale(LC_ALL, "Russian");
    double Matrix1[3][3];

    std::cout << "������� ������� 3x3 " << std::endl;
    for (int r = 0; r < 3; ++r)
    {
        for (int c = 0; c < 3; ++c)
        {
            std::cin>> Matrix1[c][r];//���� � �������
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

	std::system("pause"); // ����� ������� system() �� ����������� ���������� 
	return 0;
}