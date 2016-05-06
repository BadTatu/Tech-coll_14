// Platypus.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Animal{
public:
	Animal(){ cout << "Animal constructed\n"; };
	int width;
};
class Mammal:public virtual Animal{
public:
	Mammal(){ cout << "Mammal constructed\n"; };
};
class Bird :public virtual Animal{
public:
	Bird(){ cout << "Bird constructed\n"; };
};
class Reptile :public virtual Animal{
public:
	Reptile(){ cout << "Reptile constructed\n"; };
};
class Platypus :public Mammal, public Bird, public Reptile{
public:
	Platypus(){ cout << "Platypus constructed\n"; };

};
int _tmain(int argc, _TCHAR* argv[])
{
	Platypus myAnimal;
	myAnimal.width = 12;
	cout << myAnimal.width;
	return 0;
}

