#include "stdafx.h"
#include <iostream>
using namespace std;
class Fish
{
public:
	Fish();
	virtual ~Fish();
	virtual void Swim()=0;//чисто абстрактныая функция 
	void MakeFishSwim();
private:
};
Fish::Fish()
{
	cout << "Fish constructed\n";
}

Fish::~Fish()
{
	cout << "Fish destructed\n";
}
void Fish::Swim(){
	cout << "Fish swims!\n";
}

class Tuna:public Fish
{
public:
	Tuna();
	~Tuna();
	void Swim();
private:

};

Tuna::Tuna()
{
	cout << "Tuna constructed\n";
}

Tuna::~Tuna()
{
	cout << "Tuna destructed\n";
}

class Carp: public Fish
{
public:
	Carp();
	~Carp();
	void Swim();
private:

};

Carp::Carp()
{
	cout << "Carp constructed\n";
}

Carp::~Carp()
{
	cout << "Carp destructed\n";
}

void Carp::Swim(){
	cout << "Carp swims!\n";
}
void MakeFishSwim(Fish& InputFish){
	InputFish.Swim();
}
void Tuna::Swim(){
	cout << "Tuna swims!\n";
}

void deleteFishMemory(Fish* pFish){
	delete pFish;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//Fish myFish;-- невозможно создать экземпляр абстрактного класса
	Tuna myDinner;
	Carp myLunch;
	myDinner.Swim();
	MakeFishSwim(myDinner);
	MakeFishSwim(myLunch);
	Tuna *pTuna = new Tuna;
	deleteFishMemory(pTuna);
	cout << endl;
	return 0;
}

