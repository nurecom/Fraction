
#pragma once
#include <iostream>
	// Класс Дробь
	class Fraction
	{
	private:
		// Числитель
		long _numerator;
		// Знаменатель
		long _denomenator;
		// Наибольший общий делитель !!!!
		int NOD(int x, int y)
		{
			if (y == 0) return x;
			return NOD(y, x % y);
		}
	public:
		// конструктор : создание объекта Дробь
		Fraction(long numerator, long denomenator)
		{
			Fraction::_numerator = numerator;
			Fraction::_denomenator = denomenator;
		}
		// Вычисление 
		void mult(int x)
		{
			_numerator *= x;
		}
		void div(int x)
		{
			_denomenator *= x;
		}

		void sum(int x)
		{
			_numerator += (x * _denomenator);
		}
		void sub(int x)
		{
			_numerator -= (x * _denomenator);
		}
		void show()
		{
			std::cout << "\tТекущая дробь:  " << _numerator << '/' << _denomenator << std::endl;
		}

		int peredacha()
		{
			return NOD(_numerator, _denomenator);
		}
		// Сокращение дроби
		void reduction(int x)
		{
			_numerator /= x;
			_denomenator /= x;
		}

	};

