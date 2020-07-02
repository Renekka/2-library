#include <string> 
#include <iostream> 
#include <set>
#include <locale>
#include "Header.h"
#include <iterator>
#include <ctime>
using namespace std; // чтобы не писать std::

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	Dogs g;
	system("color 6");
	cout << "\nВ нашем приюте 20 собак.\nКакую информацию вы хотели бы узнать или исправить?\n";
	cout << "0 - Возраст собак\n1 - Клички\n";
		int number;
	cin >> number;
	switch (number)
	{
	case 0:
		g.Years();
		break;
	case 1:
		g.Name();
		break;
	}
	cin.get(); // ожидаем нажатие пользователем клавиши
	return 0;
}
