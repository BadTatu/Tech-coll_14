// Human.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Human{
	char * name;
	int age;
	int height;
	bool gender;
public:
	Human(){ name = "empty"; age = 21; height = 170; gender = 1; };
	Human(int inputage){ age = inputage; height = 150; }
	Human(char *inputname, int age);
	~Human();
	Human::Human(const Human &H);
	void SayHello();
	void IntroduceSelf();
	void SetName(char * inputname);
	char * GetName();
	int GetAge();
	void SetAge(int inputage);
	void Human::PrintInfo();
};

Human::Human(char *inputname, int InputAge){
	name = new char[strlen(inputname) + 1];
	strcpy(name, inputname);
	age = InputAge;
}
Human::~Human(){
	cout << "\nObject " << name << " is deleting";
}

Human::Human(const Human &H){
	name = H.name;
	age = H.age;
	height = H.height;
	gender = H.gender;
}
void Human::IntroduceSelf(){
	cout << "Hi, my name is " << name;
}
void Human::SayHello(){
	cout << "Hi, friends! My name is "<< this->name<<"\n" ;
}
char * Human::GetName(){
	return name;
}
void Human::SetName(char * inputname){
	name = new char[strlen(inputname) + 1];
	strcpy(name, inputname);
}
int Human::GetAge(){
	return age;
}
void Human::SetAge(int inputage){
	age = inputage;
}
void Human::PrintInfo(){
	cout << "name= " << name << "\tage = " << age << "\theight= " << height << "\t" << gender << endl;
}
int _tmain(int argc, _TCHAR* argv[])
{
	Human Ivan(33), Olga("Olga Ivanova", 18), Petr;
//	Ivan.SetAge(25);
//	Olga.SetAge(18);
	Ivan.SetName("Ivan");
//	Olga.SetName("Olga Ivanova");
	Ivan.SayHello();
	Olga.SayHello();
//	cout << Ivan.GetName()<<" "<<Olga.GetName()<<endl;
	cout << "Ivan - "<< Ivan.GetAge()<<endl<<"Olga - "<<Olga.GetAge()<<endl;
	Olga.SetAge( 99); 
	Olga.SetName( "Grandmam Olga");
	cout << Olga.GetName() <<" - " << Olga.GetAge()<<endl;
	Petr = Ivan;
	Petr.PrintInfo();
	Petr.SetName("Petr I");
	Petr.PrintInfo();
	getchar();
	return 0;
}

