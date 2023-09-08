#pragma once //файл дизайна
class Car
{
	//реализация(закрытая часть класса)
private:
	char* model;
	char* color;
	int year;
	double price;
public:
	//интефейс(открытая часть класса)
	Car();
	Car(const char* m, const char* c, int y, double p);
	~Car();
	void Input();
	void Print();

	//inspectors
	char* GetModel();
	char* GetColor();
	int GetYear();
	double GetPrice();

	//modify
	void SetModel(const char* m);
	void SetColor(const char* c);
	void SetYear(int y);
	void SetPrice(double p);
};

