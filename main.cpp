#include <iostream>

struct student_gg_struct {
	int name; //1 - Ivan; 2 - Denchik; 3 - Abracham :D
	int intelegence; //�������� - ������ �� ����������� ���������� �����   ***������� �� �������
	int agility; //�������� - ������ ������ �� ����������� ���������� ��������  
	int appearance;//������� ��� - ������ �� ������� � �����������
	int deception; //����� - ������ �� �������
	int eloq; //����������� - ������ �� �������
};
void create_char();

student_gg_struct student_gg;
int points_atributs = 10;
int choice1;


int main() {
	setlocale(LC_ALL, "Russian");

	std::cout << "������ �������?\n";
	std::cout << "1 - ���...\n";
	std::cout << "2 - ��!!!\n"; std::cin >> choice1;
	while (choice1 != 2) {
		std::cout << "����� ��� ���� ������?\n";
		std::cout << "1 - ���...\n";
		std::cout << "2 - ��!!!\n"; std::cin >> choice1;
	}
	std::cout << "���!!! �� ����� ����� ������� ������ ���������... \n";
	create_char();


	return 0;
}

void create_char() {
	std::cout << "���: 1 - Ivan; 2 - Denchik; 3 - Abracham :D "; std::cin >> student_gg.name;

	std::cout << "������������� ���������: (�������� "<< points_atributs <<" �����) ";
	std::cout << "���� ��������? "; std::cin >> student_gg.intelegence;

	points_atributs = points_atributs - student_gg.intelegence;

	if (points_atributs > 0) {
		std::cout << "������������� ���������: (�������� " << points_atributs << " �����) ";
		std::cout << "���� ��������? "; std::cin >> student_gg.agility;
		points_atributs = points_atributs - student_gg.agility;
		if (points_atributs > 0) {
			std::cout << "������������� ���������: (�������� " << points_atributs << " �����) ";
			std::cout << "���� ������� ���? "; std::cin >> student_gg.appearance;
		}
	}

		std::cout << "�������� ���������!!!\n";
		std::cout << "��� - ";
		if (student_gg.name == 1)
			std::cout << "Ivan\n";
		if (student_gg.name == 2)
			std::cout << "Denchik\n";
		if (student_gg.name == 3)
			std::cout << "Abracham :D\n";
		std::cout << "�������� - " << student_gg.intelegence << "\n";
		std::cout << "�������� - " << student_gg.agility << "\n";
		std::cout << "������� ��� - " << student_gg.appearance << "\n";
		student_gg.deception = 0;
		std::cout << "����� - " << student_gg.deception << "  *������� �������������� �� ���� ����*\n";
		student_gg.eloq = 0;
		std::cout << "����������� - " << student_gg.eloq << "  *������� �������������� �� ���� ����*\n";

}
