#include <iostream>
#include <iomanip>
#include <conio.h>
#include "Fraction.h"

/*
Задание.
Реализуйте класс Дробь. Необходимо хранить числитель
и знаменатель в качестве переменных-членов. Реализуйте
функции-члены для ввода данных в переменные-члены,
для выполнения арифметических операций (сложение,
вычитание, умножение, деление, и т.д.)
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
	std::cout << "\tЗадание №1. Тема: Введение в объектно-ориентированное программирование"
		<< std::endl << std::endl;
	draw(80);
	do {
		std::cout << "\tВведите числитель:" << std::endl <<'\t';
		std::cin >> numerator;
		do {
			std::cout << "\tВведите знаменатель:" << std::endl << '\t';
			std::cin >> denomenator;
			if (denomenator == 0) {
				std::cout << "\tЗнаменатель не может быть равен нулю \n";
			}
		} while (denomenator == 0);
		draw(80);
		Fraction fraction(numerator, denomenator);
		fraction.show();
		draw(80);
		std::cout << "\tДробь после сокращения" << std::endl;
		fraction.reduction(fraction.peredacha());
		fraction.show();
		draw(80);
		std::cout << "\tВыберите действие" << '\n';
		std::cout << "\t1: Прибавить к дроби число " << std::endl;
		std::cout << "\t2: Отнять от дроби число" << std::endl;
		std::cout << "\t3: Умножить дробь на число " << std::endl;
		std::cout << "\t4: Разделить дробь на число " <<std:: endl;
		std::cout << '\t';
		std::cin >> number;
		switch (number)
		{
		case 1:
			std::cout << "\tВведите слагаемое :" << std::endl << "\t";
			std::cin >> int_number;
			fraction.sum(int_number);
			fraction.show();
			break;
		case 2:
			std::cout << "\tВведите вычитаемое :" << std::endl << "\t";
			std::cin >> int_number;
			fraction.sub(int_number);
			fraction.show();
			break;
		case 3:
			std::cout << "\tВведите множитель :" << std::endl << "\t";
			std::cin >> int_number;
			fraction.mult(int_number);
			fraction.show();
			break;
		case 4:
			std::cout << "\tВведите делитель :" << std::endl << "\t";
			std::cin >> int_number;
			fraction.div(int_number);
			fraction.show();
			break;
		default:
			std::cout <<"\tВыберите правильно!!!" << std::endl;
		}
		draw(80);
		std::cout << "Продолжить работу?(y/n)" << std::endl;
		std::cin >> work;
	} while (work != 'n');
	return 0;
}