#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
	model = nullptr;
	color = nullptr;
	year = 0;
	price = 0;
}

Car::Car(const char* m, const char* c, int y, double p)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m)+1, m);

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c)+1, c);

	this->year = y;
	this->price = p;
}

Car::~Car()
{
	delete[] this->model;
	delete[] this->color;
}

void Car::Input()
{
	char buffModel[20], buffColor[20];
	//model
	cout << "Enter car model: ";
	cin >> buffModel;
	if (this->model != nullptr) {
		cout << "Delete-> " << this->model << "... \n";
		delete[] this->model;
	}
	this->model = new char[strlen(buffModel) + 1];
	strcpy_s(this->model, strlen(buffModel) + 1, buffModel);

	//color
	cout << "Enter car color: ";
	cin >> buffColor;
	if (this->color != nullptr) {
		cout << "Delete-> " << this->color << "... \n";
		delete[] this->color;
	}
	this->color = new char[strlen(buffColor) + 1];
	strcpy_s(this->color, strlen(buffColor) + 1, buffColor);

	//year
	cout << "Enter car year: ";
	cin >> this->year;

	//price
	cout << "Enter car price: ";
	cin >> this->price;
}

void Car::Print()
{
	cout << "Model: " << this->model << endl;
	cout << "Color: " << this->color << endl;
	cout << "Year: " << this->year << endl;
	cout << "Price: " << this->price << endl;

}

char* Car::GetModel()
{
	return this->model;
}

char* Car::GetColor()
{
	return this->color;
}

int Car::GetYear()
{
	return this->year;
}

double Car::GetPrice()
{
	return this->price;
}

void Car::SetModel(const char* m)
{
	if (this->model != nullptr) {
		cout << "Delete-> " << this->model << "... \n";
		delete[] this->model;
	}
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);
}

void Car::SetColor(const char* c)
{
	if (this->color != nullptr) {
		cout << "Delete-> " << this->color << "... \n";
		delete[] this->color;
	}
	color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);
}

void Car::SetYear(int y)
{
	this->year = y;
}

void Car::SetPrice(double p)
{
	this->price = p;
}
