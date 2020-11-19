#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>

class Matrix
{
public:
   
    double Matrix1[3][3];
    void VVod()
    {
        int c;
        int r;
        std::cout << "Вводите матрицу 3x3 " << std::endl;
        for (int r = 0; r < 3; ++r)
        {
            for (int c = 0; c < 3; ++c)
            {
                std::cin >> Matrix1[c][r];//ввод в консоль
            }
        }

        for (int r = 0; r < 3; ++r)
        {
            for (int c = 0; c < 3; ++c)
            {
                std::cout << Matrix1[c][r] << " ";
            }
            std::cout << std::endl;
            std::cout << system("color 27") << std::endl;
        }
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");
    Matrix _ClassMatrix_void_;
    _ClassMatrix_void_.VVod(); 
}