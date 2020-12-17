#include<iostream>
#include<locale.h>
#include<stdio.h>
#include<cstdio>

//				�������

                /*���������������� ������� c++*/

class Matrix__Components
{
public:
    void ShowMatrix(int* m, const int& a, const int& b)
    {
        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                std::cout.width(4);
                std::cout << *(m + i * b + j);
            }
            std::cout << std::endl;
        }
    }

    void TransMatrix(int* m, int& a, int& b)
    {
        int* bufM = new int[a * b];

        for (int i = 0; i < a; ++i)
        {
            for (int j = 0; j < b; ++j)
            {
                *(bufM + i + j * a) = *(m + i * b + j);
            }
        }
        for (int i = 0; i < a * b; ++i) 
        {
            *(m + i) = *(bufM + i);
        }
        delete[] bufM;
    }

    ~Matrix__Components()
    {
        std::cout << "������� ���������" << std::endl;
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b;
    int* matrix;

    std::cout << "������� ���������� �������� ��� �������" << std::endl;
    std::cin >> a;//���� ���������� ��������
    std::cout << "������� ���������� ����� ��� ������� " << std::endl;
    std::cin >> b;//���� ���������� �����

    matrix = new int[a * b];

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j)
        {
            std::cout << "M[" << i + 1 << "," << j + 1 << "] = ";
            std::cin >> *(matrix + i * b + j); 
        }
    }

    Matrix__Components DO_MATRIX;
    std::cout << "���������� ��������� ������� ���\n";
    DO_MATRIX.ShowMatrix (matrix, a, b);
    DO_MATRIX.TransMatrix(matrix, a, b);
    std::cout << "��������� ���������������� ������� ����\n" << std::endl;
    DO_MATRIX.ShowMatrix (matrix, a, b);

    delete[] matrix; //����������� ������� ��� ������������ ������
    std::system("pause");
    return 0;
};