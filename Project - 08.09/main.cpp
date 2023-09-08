#include <iostream>
#include "Car.h"
using namespace std;

int main() {
	Car a("bmw", "black", 2019, 50000);
	cout << "First car (with 3 parameters)" << endl;
	a.Print();
	cout << endl;

	Car b;
	cout << "Second car (with default constructor)" << endl;
	b.Input();
	cout << endl;
	b.Print();

	Car c;
	cout << "Third car (default constructor with 0 parameters and with accessor methods)" << endl;
	c.SetModel("Audi");
	c.SetColor("white");
	c.SetYear(22);
	c.SetPrice(60000);
	char* model = c.GetModel();
	char* color = c.GetModel();
	int year = c.GetYear();
	double price = c.GetPrice();
	cout << "Model: " << model << "\Color: " << color << "\nYear: " << year << "\nPrice: " << price << endl;
}