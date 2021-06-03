#include <iostream>

struct student_gg_struct {
	int name; //1 - Ivan; 2 - Denchik; 3 - Abracham :D
	int intelegence; //Интелект - Влияет на возможность выполнения задач   ***изредка на диалоги
	int agility; //Ловкость - Влияет только на возможность выполнения действий  
	int appearance;//Внешний вид - Влияет на диалоги и возможности
	int deception; //Обман - Влияет на диалоги
	int eloq; //Красноречие - Влияет на диалоги
};
void create_char();

student_gg_struct student_gg;
int points_atributs = 10;
int choice1;


int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "Хотите сыграть?\n";
	std::cout << "1 - нет...\n";
	std::cout << "2 - ДА!!!\n"; std::cin >> choice1;
	while (choice1 != 2) {
		std::cout << "Может все таки хотите?\n";
		std::cout << "1 - нет...\n";
		std::cout << "2 - ДА!!!\n"; std::cin >> choice1;
	}
	std::cout << "УРА!!! Ну тогда нужно создать своего персонажа... \n";
	create_char();


	return 0;
}

void create_char() {
	std::cout << "Имя: 1 - Ivan; 2 - Denchik; 3 - Abracham :D "; std::cin >> student_gg.name;

	std::cout << "Распределение атрибутов: (Имееться "<< points_atributs <<" очков) ";
	std::cout << "Твой интелект? "; std::cin >> student_gg.intelegence;

	points_atributs = points_atributs - student_gg.intelegence;

	if (points_atributs > 0) {
		std::cout << "Распределение атрибутов: (Имееться " << points_atributs << " очков) ";
		std::cout << "Твоя ловкость? "; std::cin >> student_gg.agility;
		points_atributs = points_atributs - student_gg.agility;
		if (points_atributs > 0) {
			std::cout << "Распределение атрибутов: (Имееться " << points_atributs << " очков) ";
			std::cout << "Твой внешний вид? "; std::cin >> student_gg.appearance;
		}
	}

		std::cout << "Создание завершено!!!\n";
		std::cout << "Имя - ";
		if (student_gg.name == 1)
			std::cout << "Ivan\n";
		if (student_gg.name == 2)
			std::cout << "Denchik\n";
		if (student_gg.name == 3)
			std::cout << "Abracham :D\n";
		std::cout << "Интелект - " << student_gg.intelegence << "\n";
		std::cout << "Ловкость - " << student_gg.agility << "\n";
		std::cout << "Внешний вид - " << student_gg.appearance << "\n";
		student_gg.deception = 0;
		std::cout << "Обман - " << student_gg.deception << "  *атрибут прокачиваеться по ходу игры*\n";
		student_gg.eloq = 0;
		std::cout << "Красноречие - " << student_gg.eloq << "  *атрибут прокачиваеться по ходу игры*\n";

}
