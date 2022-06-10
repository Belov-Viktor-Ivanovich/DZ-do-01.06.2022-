#pragma once
template<typename T, typename T2>
class Fractions
{
private:
	T numerator;
	T denominator;
	T x;
	T y;
	T k;
	T2 st;
public:
	Fractions()
	{

	}
	Fractions(T n, T d)
	{
		this->numerator = n;
		this->denominator = d;
		this->x = x;
		this->y = y;
		this->k = k;
		this->st = st;

	}
	int getNumerator()
	{
		return numerator;
	}
	int getDenominator()
	{
		return denominator;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}

	Fractions operator + (Fractions point2)
	{
		x = (numerator * point2.denominator + denominator * point2.numerator);
		y = denominator * point2.denominator;
		Fractions point3(x, y);
		point3.st = " summa ";
		point3.transformation(x, y);
		return point3;
	}
	Fractions operator -(Fractions point2)
	{
		x = (numerator * point2.denominator - denominator * point2.numerator);
		y = denominator * point2.denominator;
		Fractions point3(x, y);
		point3.st = " subtraction ";
		point3.transformation(x, y);
		return point3;
	}
	Fractions operator *(Fractions point2)
	{
		x = (numerator * point2.numerator);
		y = denominator * point2.denominator;
		Fractions point3(x, y);
		point3.st = " multiplication ";
		point3.transformation(x, y);
		return point3;
	}
	Fractions operator /(Fractions point2)
	{
		x = (numerator * point2.denominator);
		y = denominator * point2.numerator;
		Fractions point3(x, y);
		point3.st = " division ";
		point3.transformation(x, y);
		return point3;
	}
	void transformation(T x, T y)
	{

		if (x == y) {
			cout << "result" << st << " = " << 1 << endl;
		}
		else if (x > y) {
			if (x % y == 0) {
				cout << "result" << st << " = " << x / y << endl;
			}
			else {
				k = 0;
				for (int i = 2; i <= y; i++)
				{
					if (x % i == 0 && y % i == 0) {
						k = i;
					}
				}
				if (k > 0) {
					x = x / k;
					y = y / k;
					cout << "result" << st << " = " << x / y << " * " << x - (y * (x / y)) << " / " << y << endl;
				}
				else {
					cout << "result" << st << " = " << x << " / " << y << endl;
				}
			}
		}
		else if (x < y) {
			if (x % y == 0)
				cout << "result" << st << " = " << 1 << " / " << y / x << endl;
			else {
				k = 0;
				if (x < 0) {
					for (int i = x; i < -1; i++)
					{

						if (x % i == 0 && y % i == 0) {
							k = i;
							k *= -1;
							break;
						}
					}
				}
				else {
					for (int i = 2; i <= x; i++)
					{

						if (x % i == 0 && y % i == 0) {
							k = i;
						}
					}
				}
				if (k > 0) {
					x = x / k;
					y = y / k;
					cout << "result" << st << " = " << x << " / " << y << endl;
				}
				else cout << "result" << st << " = " << x << " / " << y << endl;
			}
		}
	}
};

