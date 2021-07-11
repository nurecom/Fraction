#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Fraction.h"

/*
�������.
���������� ����� �����. ���������� ������� ���������
� ����������� � �������� ����������-������. ����������
�������-����� ��� ����� ������ � ����������-�����,
��� ���������� �������������� �������� (��������,
���������, ���������, �������, � �.�.)
*/

void draw(int counter) {
	for (int i = 0; i < counter; i++) {
		std::cout << "*";
	}
	std::cout << '\n';
}

int main() {
	setlocale(LC_ALL, "Russian");
	int numerator = 0,
		denomenator = 1,
		number = 0,
		int_number = 0;
	char work = 'y';
	std::cout << "\t������� �1. ����: �������� � ��������-��������������� ����������������"
		<< std::endl << std::endl;
	draw(80);
	do {
		std::cout << "\t������� ���������:" << std::endl <<'\t';
		std::cin >> numerator;
		do {
			std::cout << "\t������� �����������:" << std::endl << '\t';
			std::cin >> denomenator;
			if (denomenator == 0) {
				std::cout << "\t����������� �� ����� ���� ����� ���� \n";
			}
		} while (denomenator == 0);
		draw(80);
		Fraction fraction(numerator, denomenator);
		fraction.show();
		draw(80);
		std::cout << "\t����� ����� ����������" << std::endl;
		fraction.reduction(fraction.peredacha());
		fraction.show();
		draw(80);
		std::cout << "\t�������� ��������" << '\n';
		std::cout << "\t1: ��������� � ����� ����� " << std::endl;
		std::cout << "\t2: ������ �� ����� �����" << std::endl;
		std::cout << "\t3: �������� ����� �� ����� " << std::endl;
		std::cout << "\t4: ��������� ����� �� ����� " <<std:: endl;
		std::cout << '\t';
		std::cin >> number;
		switch (number)
		{
		case 1:
			std::cout << "\t������� ��������� :" << std::endl << "\t";
			std::cin >> int_number;
			fraction.sum(int_number);
			fraction.show();
			break;
		case 2:
			std::cout << "\t������� ���������� :" << std::endl << "\t";
			std::cin >> int_number;
			fraction.sub(int_number);
			fraction.show();
			break;
		case 3:
			std::cout << "\t������� ��������� :" << std::endl << "\t";
			std::cin >> int_number;
			fraction.mult(int_number);
			fraction.show();
			break;
		case 4:
			std::cout << "\t������� �������� :" << std::endl << "\t";
			std::cin >> int_number;
			fraction.div(int_number);
			fraction.show();
			break;
		default:
			std::cout <<"\t�������� ���������!!!" << std::endl;
		}
		draw(80);
		std::cout << "���������� ������?(y/n)" << std::endl;
		std::cin >> work;
	} while (work != 'n');
	return 0;
}