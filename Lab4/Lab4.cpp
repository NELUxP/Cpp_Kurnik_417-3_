#include<iostream>  //��������� std::cout << lllll << std::endl;
#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<bitset>
////������(stack))��������� ������
int main()
{
    setlocale(LC_ALL, "Russian");
    //������� 1
    double * X = new double;

    //������� 2
    double XOX[1] = { 10 };
    double* ptr0_double = new double[*XOX];

    for (int i = 0; i < 100; i++)//���� ������� �� �������� � ��������� �������������
    {
        std::cout << *XOX << std::endl;
    }
    //������� 3
    double num_of_cols = 10, num_of_rows = 10;
    double** ptr_double_2Darray = new double* [num_of_rows]; // ��������� �� ������ ���������� �� ������ (1D �������)
    
    for (int i = 0; i < 10; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            std::cout << (num_of_rows+=num_of_cols) << std::endl;
        }
    }
    //������� 4
    for (;;)
    {
        double * Y = new double;
    }





    //void- ������ ��� 
    std::system("pause"); // ����� ������� system() �� ����������� ���������� 
    return 0;
}