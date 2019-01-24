#include <iostream>
#include "time.h"
#include "stdlib.h"

int main()
{
	setlocale(LC_CTYPE, ".1251");
	srand(time(nullptr));
	unsigned short a = 0, b = 0;
	int d=6, c=1;
	std::cout << "let's play" << std::endl;
	system("pause");

	for (int i = 1; i <= 3; i++) {


		int hum1 = (int)(((float)rand() / (float)RAND_MAX) * (d - c)) + c;
		int hum2 = (int)(((float)rand() / (float)RAND_MAX) * (d - c)) + c;

		int cpu1 = (int)(((float)rand() / (float)RAND_MAX) * (d - c)) + c;
		int cpu2 = (int)(((float)rand() / (float)RAND_MAX) * (d - c)) + c;



		system("cls");
		std::cout << "Бросок человека №" <<i<< std::endl;

		switch (hum1) {
		case 1: { std::cout << " -----\n"
			<< "|     |\n"
			<< "|  *  |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 2: { std::cout << " -----\n"
			<< "|     |\n"
			<< "| * * |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 3: { std::cout << " -----\n"
			<< "|     |\n"
			<< "| *** |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 4: { std::cout << " -----\n"
			<< "| * * |\n"
			<< "|     |\n"
			<< "| * * |\n"
			<< " -----\n";
			break;
		}
		case 5: { std::cout << " -----\n"
			<< "| * * |\n"
			<< "|  *  |\n"
			<< "| * * |\n"
			<< " -----\n";
			break;
		}
		case 6: { std::cout << " -----\n"
			<< "| *** |\n"
			<< "|     |\n"
			<< "| *** |\n"
			<< " -----\n";
			break;
		}

		}

		switch (hum2) {
		case 1: { std::cout << " -----\n"
			<< "|     |\n"
			<< "|  *  |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 2: { std::cout << " -----\n"
			<< "|     |\n"
			<< "| * * |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 3: { std::cout << " -----\n"
			<< "|     |\n"
			<< "| *** |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 4: { std::cout << " -----\n"
			<< "| * * |\n"
			<< "|     |\n"
			<< "| * * |\n"
			<< " -----\n";
			break;
		}
		case 5: { std::cout << " -----\n"
			<< "| * * |\n"
			<< "|  *  |\n"
			<< "| * * |\n"
			<< " -----\n";
			break;
		}
		case 6: { std::cout << " -----\n"
			<< "| *** |\n"
			<< "|     |\n"
			<< "| *** |\n"
			<< " -----\n";
			break;
		}

		}
	//	system("pause");

	//	system("cls");
		std::cout << "Бросок компьютера №" <<i<< std::endl;

		switch (cpu1) {
		case 1: { std::cout << " -----\n"
			<< "|     |\n"
			<< "|  *  |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 2: { std::cout << " -----\n"
			<< "|     |\n"
			<< "| * * |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 3: { std::cout << " -----\n"
			<< "|     |\n"
			<< "| *** |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 4: { std::cout << " -----\n"
			<< "| * * |\n"
			<< "|     |\n"
			<< "| * * |\n"
			<< " -----\n";
			break;
		}
		case 5: { std::cout << " -----\n"
			<< "| * * |\n"
			<< "|  *  |\n"
			<< "| * * |\n"
			<< " -----\n";
			break;
		}
		case 6: { std::cout << " -----\n"
			<< "| *** |\n"
			<< "|     |\n"
			<< "| *** |\n"
			<< " -----\n";
			break;
		}

		}

		switch (cpu2) {
		case 1: { std::cout << " -----\n"
			<< "|     |\n"
			<< "|  *  |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 2: { std::cout << " -----\n"
			<< "|     |\n"
			<< "| * * |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 3: { std::cout << " -----\n"
			<< "|     |\n"
			<< "| *** |\n"
			<< "|     |\n"
			<< " -----\n";
			break;
		}
		case 4: { std::cout << " -----\n"
			<< "| * * |\n"
			<< "|     |\n"
			<< "| * * |\n"
			<< " -----\n";
			break;
		}
		case 5: { std::cout << " -----\n"
			<< "| * * |\n"
			<< "|  *  |\n"
			<< "| * * |\n"
			<< " -----\n";
			break;
		}
		case 6: { std::cout << " -----\n"
			<< "| *** |\n"
			<< "|     |\n"
			<< "| *** |\n"
			<< " -----\n";
			break;
		}

		}
		if ((hum1 + hum2) != (cpu1 + cpu2)) {
			if ((hum2 + hum1) > (cpu2 + cpu1)) {
				std::cout << "Вы победили!" << std::endl;
				a += 1;
			}
			else { 
				std::cout << "Вы проиграли!" << std::endl;
				b += 1;
			}
		}
		else {
			std::cout << "Ничья!" << std::endl;
			a += 1;
			b += 1;
		}

		system("pause");
	}

	 system("cls");
	 
	 if (a != b)
		 a > b ? std::cout << "Вы победили со счетом " <<a<<" : "<<b<<std::endl : std::cout << "Вы проиграли со счетом " <<a<<" : "<<b<<  std::endl;
	 else  std::cout << "Ничья!" << std::endl;

	return 0;
}
