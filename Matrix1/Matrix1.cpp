#include<iostream>  //��������� std::cout << lllll << std::endl;
#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<bitset>



//				�������


				/*���������������� ������� c++*/

class Matrix_
{
public:
	void Transp()
	{
		int i, j, N, M;
		int a[10][10];
		int b[10][10];
		std::cout << "������� ���������� ����� ��� ������� "; //���� ���������� �����
		std::cin >> N;
		std::cout << "������� ���������� �������� ��� ������� "; //���� ���������� ��������
		std::cin >> M;
		std::cout << "������� ������� \n";
		//���� �� ���������� i, � ������� ���������� ������ �������
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				std::cin >> a[i][j]; //���� ���������� �������� �������
		}
		//���� �� ���������� j, � ������� ���������� ������ �������
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				b[i][j] = a[j][i]; //���������������� �������
		}

		for (i = 0; i < N; i++)
		{
			for (j = 0; j < M; j++)
				std::cout << b[i][j] << "\t";//����� ������� ����� ����������������
			std::cout<< std::endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "RUS");
	Matrix_ Tomain;
	Tomain.Transp();
	std::system("pause"); // ����� ������� system() �� ����������� ���������� 
	return 0;
}
