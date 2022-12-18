#include <iostream>


class Fraction
{
private:
	int numerator;
	int denominator;
public:
	void Input()
	{
		std::cout << "Numerator:";
		std::cin >> numerator;
		std::cout << "Denominator:";
		std::cin >> denominator;
	}


	void OutPut()
	{
		std::cout << "Numerator = " << numerator << std::endl;
		std::cout << "Denominator = " << denominator << std::endl;
	}


	void Plus(int number)
	{
		std::cout << number << " " << numerator << "/" << denominator << std::endl;
	}


	void Minus(int number)
	{
		std::cout << numerator - (number * denominator) << "/" << denominator << std::endl;
	}


	void Multiple(int number)
	{
		std::cout << numerator * number << "/" << denominator << std::endl;
	}


	void Division(int number)
	{
		int newdonominator = denominator * number;
		bool ismay = true;


		for (int i = numerator; i != 0; i--)
		{
			if (numerator % i == 0 && newdonominator % i == 0)
			{
				std::cout << numerator / i << "/" << newdonominator / i << std::endl;
				ismay = false;
				break;
			}
		}


		if (ismay)
		{
			std::cout << numerator << "/" << newdonominator << std::endl;
		}
	}
};


int main()
{
	Fraction first;
	first.Input();
	first.Plus(9);

	std::cout << std::endl;
	first.Minus(6);

	std::cout << std::endl;
	first.Multiple(2);

	std::cout << std::endl;
	first.Division(4);
}