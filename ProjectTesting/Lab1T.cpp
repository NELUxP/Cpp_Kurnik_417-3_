#include<iostream>  //��������� std::cout << lllll << std::endl;
#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<bitset>

//���� 1. ��������� C/C++ �������� ����������� ��������� C/C++

#pragma region MainFunc
//��-������ - �������, ��-������ ����� ����� 
//�� ���� ��������� ������ ���� ���� ������� main();

int main()  
{//����� ���� � ��������, ����������, � ������ ����� �������� �����
	//������������� ���������� 

	/* ������������� ����������
	* 1. �������������� (+, -, *, /, % - ������� �� ������ �������
	++ - ��������� �� �������, ��� "����������"
	� - ��������� �� �������, ��� "���������")
	* 2. ���������� ��� ������ (|| - �������� "���", �������� "�" ! �������� ���������)
	* 3. ��������� ("&" - �������� "�" , "|" - �������� "���" �������� ������ � ����� "<<" �������� ������ � ����� ">>" ������ " ")
	* 4. ��������� ��������� (">" - ������, "<" - ������, "==" - �����,
	                          ">=" - ������ ��� �����, "<=" - ������ ��� �����)
	*/
	//2 �������� ,������� � ���� ���������	
		//������� - ���������� � ������������ ��������� ("!","~","++","--" � ��)
		// �������� ���������� � ����� ���������� (+, -, *, /, % , >> ,<<, &&,||, |,^  � ��)
		//��������� ���������� � ����� ���������� (���__���� �����_����_true_ec��_false)
		// ������� - ������ � ������� ���������� ��������.

	setlocale(LC_ALL, "Russian");
	int a = 10;
	int b = 3;
	std::cout << "���� 1. ��������� C/C++ �������� ����������� ��������� C/C++" << std::endl;
	int result = 10 % 3;
	std::cout << "a = 10, b = 3" << std::endl; // endl ����� ������� �� ��������� ������
	std::cout << "10 % 3 =" << 10 % 3 << "\n"; // "\n" ���� �����  
	bool c = true;
	bool d = false;
	bool e = true;

	// \t, \n - escape ������������������\����������� ������� - ��� �������� ����� �������� ������� ������ ������� � ����������
	// \t - ���� ������ ��������� ( ��� ���������� ���������� �������� ���� ������� \t �� ���� ������ ���������)
	// \n - ���� ������ �������� ������ ( ��� ���������� ���������� �������� ���� ������� \t �� ���� ������ ������)
	// ��������� �������� ��� ������ escape ������������������ �������� \
	// ���� ����� ����������� ��� �� ���� ���� \ ��� escape - ������������������
	// �� ������� � ������ � ���� ������ '\\'
	//�������� ���� / - ��� ������ ������ ��� ������� ��������
	
	std::cout << "\t\t a = true\t b= false" << std::endl;
	std::cout << "a = false" "\t\ " << (true && true)<< "\t\t " <<(true && false) << std::endl;
	std::cout << "a = false" "\t\ " << (false && true) << "\t\t " << (true && false) << std::endl;
	
	/// ��
	int binary_int0x00 = 0b1010;
	int binary_int0x01 = 0b1100;


	std::cout << "\n \na = " << std::bitset<8>(a) << "; b =" << b
		<< ": a >> b = " << std::bitset<8>(a >> b) << std::endl;

	std::cout << "a = " << std::bitset<8>(a) << "; b =" << b
		<< ": a << b = " << std::bitset<8>(a >> b) << std::endl;

	std::cout << "a = " << std::bitset<8>(a) << "; ~a = " << b
		<< ": a = "<< (a) << std::bitset<8> (~a)<< std::endl;

	//bool e = true;
	//std::cout << "d = " << d << "!d = " << !d << std::endl


	// ��� ��� ����������� ��������� >> 

	std::cout << "\n \n ����������� ��������� >> " << (a >> b) << std::endl;

	// ��� ��� ����������� ���������  << 

	std::cout << "����������� ��������� << " << (a << b) << std::endl;

	// ��� ��� ����������� ���������  ~ 
	std::cout << "����������� ��������� ~ " << ( ~ a) << std::endl;



	std::cout << "\t \n \n(  |  )"<< std::endl;

	std::cout << "\n \n \n \n \t�������� ����� 1 = " << std::endl;
	std::cout << "\t�������� ����� 2 = " << std::bitset<4>(binary_int0x01) << std::endl;
	std::cout << "\t		   ----" << std::endl;
	std::cout << "\t	    �����> " << std::bitset<4>(binary_int0x00 | binary_int0x01) << std::endl;

	std::cout << "\t(  &  )" << std::endl;

	std::cout << "\n \n \n \n \t�������� ����� 1 = " << std::bitset<4>(binary_int0x00) << std::endl;
	std::cout << "\t�������� ����� 2 = " << std::bitset<4>(binary_int0x01) << std::endl;
	std::cout << "\t		   ----" << std::endl;
	std::cout << "\t	    �����> " << std::bitset<4>(binary_int0x00 & binary_int0x01) << std::endl;

	std::cout << "\t(  ^  )"<< std::endl;

	std::cout << "\n \n \n \n \t�������� ����� 1 = " << std::bitset<4>(binary_int0x00) << std::endl;
	std::cout << "\t�������� ����� 2 = " << std::bitset<4>(binary_int0x01) << std::endl;
	std::cout << "\t		   ----" << std::endl;
	std::cout << "\t	    �����> " << std::bitset<4>(binary_int0x00 ^ binary_int0x01) << std::endl;
	////std::cout << "binary_int =" << binary_int << std::endl; // endl ����� ������� �� ��������� ������



	std::cout << "\n \n a = "<< a << std::endl;
	std::cout << "�������� ++ ����� ����� a++ " << a++ << std::endl;
	std::cout << "����� �������� ���������� a " << a << std::endl;


	std::cout << "\n \n a = " << a << std::endl;
	std::cout << "�������� ++ ����� ++a " << ++a << std::endl;
	std::cout << "����� �������� ���������� a " << a << std::endl;
	//���� �������� ++ ����� ����� �����, �� ����� ������� ��������� �� ������, ����� ������������� !
	//���� �������� ++ ����� ����� �����, �� ����� ������� �������������, ����� ��������� !


	//2 ���� ������ ����� �/�++
	//2.1 ������������� ���� ������������ ��� �������� ����� ����� ������������� ������������� � �����������.

	char char_var; //�������� ����� | �������� ������ 8 ��� (����) ����� ������� ����� �� -128 �� 127
	short short_var; // �������� � ������ 16 ��� ( 2 �����) ������ ����� �� 32 767 �� -32 768
	int int_var; // �������� � ������ 32 ���� ( 4 �����) ������ ����� �� INT32_MIN �� INT32_MAX
	long long_car // ���������� ��� int
	//long int li_var; // ���������� long int 64��� (8 ����);; 
	int li2_var; //������ long int
	
	//���� ��������� � ������ ������ ��������� ���� ����������� unsign, ��
	// ������������� �������� (�.� ����������� ������������� ����� ������������� � 2 ����
	// � ����� � ������ unsign ������ ����� �������� ������������� �����

	unsigned char char_var;// ������ ��� �� ,��� � ���� char, �� �������� ���������� � 0 �� 255 
	unsigned short short_var; //����������
	unsigned int int_var;//����������
	unsigned long long_var;//����������
	unsigned long int li_var;//����������
	unsigned long long li_var;//����������

	// 2.2 ������������� ���� � ��������� ����� 
	float float_var; //����� ����� � 4 ����� (32 ����) �� FLT_MIN �� FLT_MAX
	double dbl_var;

	//2.3 ���������� ���� ������
	bool bool_var; //����� ��� �������� true - false
	std::cout << "����� ���� bool � 64x sizeof = "
		<< sizeof(bool) << std::endl;

	//2.4 ���������� ���� ������
	char chr_var; //��������� ��������������� ���� char ����� ������ ������� �� ����������� ������� ��������
	//������� ���� ��� char ������������ ������ ��� �������� �������� � ����� ��� ��� ����������

	wchar_t wchr_var; //����� ����� 16 ��� (2 �����) � ������ ��� �������� �������� �������
	//��� ������ ����������� ���������

	//2.5 ������������� ��� ������ ��� void 
	// ���������� ������������� void ������� ��� ������ � �������������� �������
	//��������� ��� ������ ����� �������������� ��� �������� ���� ������� �� ���������� � 
	//�� ��������� �������� ���� � ������� ������������


	std::system("pause"); // ����� ������� system() �� ����������� ���������� 
	return 0;
}
#pragma endregion MainFunc

