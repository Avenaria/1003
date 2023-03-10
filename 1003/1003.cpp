
#include <iostream>
using namespace std;
template <typename T>  //шаблонны 
void display(string p, T& value) {
	cout << p;
	cin >> value;
	getline(cout, value);
	while (cin.fail()) {
		cin.clear();// восстанавливает поток  ввода после ошибки 
		cin.ignore()// очищает буфер ввода 
			cout << p;
		cin >> value;
	}
}


int main()
{
   
}

