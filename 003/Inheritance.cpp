// Inheritance.cpp: определ¤ет точку входа дл¤ консольного приложени¤.
#include "stdafx.h"
#include <iostream>
using namespace std;

class Mammal//ћлекопитащее
{
public:	bool eat;
		int weigth;
		Mammal();
		~Mammal();
		void WhatEat(){
			if (eat == 1){ cout << "I am eat meat\n"; }
			else { cout << "I am eat tree\n"; }
		}	
private:

};

Mammal::Mammal()
{
	cout << "create mammal \n";
}

Mammal::~Mammal()
{
	cout << "delete mammal\n";
}

class Lion: public Mammal//Ћев
{
public:
	Lion();
	~Lion();
	void Eat();
private:

};

Lion::Lion()
{
eat = 1;
}

Lion::~Lion()
{
}

class Elephant:public Mammal//—лон
{
public:
	Elephant();
	~Elephant();
	void Eat();
	void WhatEat();
private:

};

Elephant::Elephant()
{eat = 0;
cout << "create elephant\n";
}

Elephant::~Elephant()
{
	cout << "delete elephant\n";
}
void Elephant::WhatEat(){//переопределение метода базового класса
	cout << "I like tree and grass\n";
	Mammal::WhatEat();//вызов метода базового класса из производного класса
}
int _tmain(int argc, _TCHAR* argv[])
{
//	Mammal mammal01;
	Elephant Elephant01;
	Lion Lion01;
	Elephant01.WhatEat();
	Elephant01.Mammal::WhatEat();
	Lion01.WhatEat();//вызов переопределенного метода базового класса
	return 0;
	
}

