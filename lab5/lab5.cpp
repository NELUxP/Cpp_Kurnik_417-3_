#include<iostream>  //��������� std::cout << lllll << std::endl;
#include<locale.h> // ������������ ���� ��� ������� setlocale()
#include<iomanip> // ������������ ���� ��� cout, � � ����� ���� ���
#include<bitset>


class car // ������� ������������ ��������
{
private: // ��, ��� ���� �� ���������� �������������, ����� private
	double max_speed = 120; // ��������, ����������� �����
	double fuel_consumption; // ��������, ����������� �����
	double current_speed; // ��������, ����������� �����
	char regnumber[6] = { 0 }; // ��������, ����������� �����
	unsigned char capacity; // ��������, ����������� �����
	double get_coordinate() { return 0.0; } // �����, ����������� �����
	std::string color = "green";
public:
	car() {}
	void change_color(std::string pColor); // �����, ����������� �������
	bool accelerate(double v) // �����, ����������� ������ ������
	{
		if (v <= this->max_speed)
		{
			this->current_speed = v;
			return true;
		}
		else
			return false;
	}
};

/// ������� 1 - 4 

class PlayerComponent_inGame // ������� ����� � ����������� �����
{
public:
	


	double get_coordinateplayer() { 0.0; }
	double Player_Size() { 18.0; }
	char num_id();
	float gravity_world(float v);


		void print_stuff_local_memory()
		{
			double max_hp = 100;
			double max_p_speed = 1.2;

			std::cout << "\n������ ����� ��������� ������ = " << max_p_speed << "\t" << max_hp  <<std::endl;
		}

		void print_stuff_dynamic_memory()
		{
			double *ptr_current_speed = new double;
			*ptr_current_speed = 0.22;
			double id_name = 2;
			std::cout << "\n������ ����� ������������ ������ = " << id_name <<"\t" <<*ptr_current_speed  << std::endl;
			delete[]ptr_current_speed; 
		}
};

class Player_In_Game
{
public:
	Player_In_Game() {

	}

};

class Health
{
public:
	~Health() 
	{

	}
};



int main()
{
	setlocale(LC_ALL, "Russian");
	PlayerComponent_inGame GAME;
	GAME.print_stuff_local_memory();
	GAME.print_stuff_dynamic_memory();

std::system("pause");
}



