#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, ".1251");
	int a, b, c = 0, e=0, d = 0, f = 1;
	std::cout << "Введите число.....";
	std::cin >> a;
	system("cls");
	int  x = a;
	while (a > 0) {
		b = a % 10;
		d += 1;
		if (b == 0) { c += 1; }
		e += b;
		a = a / 10;
	}
	while (f != 0) {
		std::cout << "Выберите действие для числа "<<x<<std::endl
			<< "1.Определить количество цифр в этом числе \n"
			<< "2.Постчитать сумму цифр этого числа \n"
			<< "3.Посчитать среднее арифметическое цифр введенного числа \n"
			<< "4.Определить количество нулей в этом числе \n"
			<< "0.Выход \n"
			<< "Ваш выбор......";
		std::cin >> f;
		system("cls");

		switch (f) {
		case 1: {
			std::cout << "В числе " << x << " - " << d << " цифр" << std::endl;
			break;
		}
		case 2: { 
			std::cout << "Сумма цифр числа " << x << " равна " << e << std::endl;
			break;
		}
		case 3: { 
			std::cout << "Среднее арифметическое цифр числа " << x << " равно " << (e / (double)d) << std::endl;
			break;
		}
		case 4: { 
			std::cout << "В числе " << x << " - " << c << " нулей" << std::endl;
			break;
		}
		case 0: {
			std::cout << "Bye-Bye!" << std::endl;
			continue;
		}
		default: { 
			std::cout << "Такой команды не существует, пожалуйста выберите из списка ниже " << std::endl;
			continue;
		}


		}

		system("pause");
		system("cls");

		std::cout << "Хотите продожить? \n"
			<< "1. Продолжить \n"
			<< "0. Выход \n"
			<<"Ваш выбор....";
		std::cin >> f;
		if (f == 1) {
			system("cls");
			continue;
		} else {
			system("cls");
			std::cout<< "Bye-Bye!" << std::endl;
		}
	}
	return 0;
}
