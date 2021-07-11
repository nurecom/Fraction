
#pragma once
#include <iostream>
	// ����� �����
	class Fraction
	{
	private:
		// ���������
		long _numerator;
		// �����������
		long _denomenator;
		// ���������� ����� �������� !!!!
		int NOD(int x, int y)
		{
			if (y == 0) return x;
			return NOD(y, x % y);
		}
	public:
		// ����������� : �������� ������� �����
		Fraction(long numerator, long denomenator)
		{
			Fraction::_numerator = numerator;
			Fraction::_denomenator = denomenator;
		}
		// ���������� 
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
			std::cout << "\t������� �����:  " << _numerator << '/' << _denomenator << std::endl;
		}

		int peredacha()
		{
			return NOD(_numerator, _denomenator);
		}
		// ���������� �����
		void reduction(int x)
		{
			_numerator /= x;
			_denomenator /= x;
		}

	};

