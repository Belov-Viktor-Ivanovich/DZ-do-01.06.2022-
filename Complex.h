#pragma once
template<typename T3, typename T4>
class Complex
{
	T3 a;
	T3 b;
	T3 x;
	T3 y;
	T4 st;
public:
	Complex()
	{

	}
	Complex(T3 a, T3 b)
	{
		this->x = x;
		this->y = y;
		this->a = a;
		this->b = b;
		this->st = st;
	}
	Complex operator+(const Complex& point)
	{
		x = a + point.a;
		y = b + point.b;
		Complex point3(x, y);
		point3.st = "summa";
		return point3;
	}
	Complex operator-(const Complex& point)
	{
		x = a - point.a;
		y = b - point.b;
		Complex point3(x, y);
		point3.st = " subtraction ";
		return point3;
	}
	Complex operator*(const Complex& point)
	{
		x = a * point.a - b * point.b;
		y = a * point.b + b * point.a;
		Complex point3(x, y);
		point3.st = " multiplication ";
		return point3;
	}
	Complex operator / (const Complex& point)
	{
		x = (a * point.a + b * point.b) / ((point.a * point.a) + (point.b * point.b));
		y = (b * point.a - a * point.b) / ((point.a * point.a) + (point.b * point.b));



		Complex point3(x, y);
		point3.st = " division ";
		return point3;
	}
	void show()
	{
		(b < 0) ? cout << st << " = " << a << b << "i" << endl : cout << st << " = " << a << " + " << b << "i" << endl;
	}
};

