#include<iostream>  //заголовок std::cout << lllll << std::endl;
#include<locale.h> // заголовочгый файл для функции setlocale()
#include<iomanip> // заголовочный файл для cout, « и много чего еще
#include<bitset>

/// Задания 1 - 4 

class car // игровое транспортное средство
{
private: // всё, что ниже до следующего спецификатора, будет private
	double max_speed = 120; // свойство, недоступное извне
	double fuel_consumption; // свойство, недоступное извне
	double current_speed; // свойство, недоступное извне
	char regnumber[6] = { 0 }; // свойство, недоступное извне
	unsigned char capacity; // свойство, недоступное извне
	double get_coordinate() { return 0.0; } // метод, недоступный извне
	std::string color = "green";
public:
	car() {}
	void change_color(std::string pColor); // метод, определённый СНАРУЖИ
	bool accelerate(double v) // метод, определённый ВНУТРИ класса
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


class PlayerComponent_inGame // игровой игрок в виртуальной среде
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

			std::cout << "\nВызван метод локальной памяти = " << max_p_speed << max_hp  <<std::endl;
		}

		void print_stuff_dynamic_memory()
		{
			double *ptr_current_speed = new double;
			*ptr_current_speed = 0.22;
			double id_name = 2;
			std::cout << "\nВызван метод динамической памяти = " << id_name << *ptr_current_speed  << std::endl;

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



