#include<iostream>  //��������� std::cout << lllll << std::endl;
#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<bitset>

int main()
{
	setlocale(LC_ALL, "Russian");
	// ������ ����������� �� ������������������ ����������
	int * ptr_int;
	int a = 1337;
	ptr_int = &a;

	std::cout <<"������������� ���������� � ������  � ������������ sizeof(ptr_int) = " << sizeof(ptr_int) << std::endl;
	std::cout <<"������������� ���������� � ������  � ������������ sizeof(*ptr_int) = " << sizeof(*ptr_int) << std::endl;
	std::cout << "������������ �������� ptr_int = "<< system("color 27")<< ptr_int << std::endl;
	std::cout << "������������ �������� *ptr_int = "<<*ptr_int << std::endl;

	int array_of_int[20];
	char array_of_char[10];
	double array_of_double[15];

	int A = 5;
	double array_of_int0x00[5];
	//double array_of_int0x00[A]; // ������ ������ ������ ��������� � ��� ��� ������ ������

	int array_of_int2[1][1];
	int array_of_intA[3][3] = { {1,2,3},{4,5,6},{7,8,9} };

		for (int i = 0; i < 3; i++)
		{
			std::cout << array_of_intA[3][3]<< std::endl;
		}

		int check_[2][2];
		std::cout << "\n����� check = " << *check_ << std::endl;

		int array10[3][3];
		for (int row = 0; row < 3; row++)
		{
			for (int col = 0; col <=  row ; col++)//���� ������� �� �������� � ��������� �������������
			{
				array10[row][col] = col + 1;
				std::cout << array10[row][col] << "\t";
			}
			std::cout << std::endl;
		}


	//pointer - ���������� ������� �������� �����
	//������ (array) � ���� �� ���������� ���������� ����������, ������ � ������� �� ����������� �������������� �� �������.
	// ���� � ������ �������� ����� ���� ����� ���� �� ��� ���������� �������� �� ����������
	//1������ � ���� ���������� commit
	// 2git remote add "��� �����������.git"
	// 3git remote -v ��������� ��� ������ 
	//4 ��������� ��������� ����������� � ��������� git push ��������_��� master
	//5 git status / git log ��������������� ��������� ������
	//6 � ����� ������ ������������ � ������� git add ��������� ����� �����
	// git clone "������ ��� �����������" �������� ����������� � �����
	// git checkout "�������� �����" ��� ������������ �����

	std::system("pause"); // ����� ������� system() �� ����������� ���������� 
	return 0;
}