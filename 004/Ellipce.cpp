
#include "stdafx.h"
#include <iostream>
using namespace std;
const double PI = 3.1415926;
class BaseEllipse{
protected:
	double x;
	double y;
public:
	BaseEllipse(double x0=0, double y0=0){}
	virtual ~BaseEllipse(){}
	void Move(int nx, int ny){x=nx; y=ny;}
	virtual double GetArea()=0;
};

class Circle:public BaseEllipse{
	double r;
public:
	Circle(){ x = 0; y = 0; r = 1; };
	Circle(double inputr){ x = 0; y = 0; r = inputr; }
	Circle(double inputx, double inputy, double inputr){ x = inputx; y = inputy; r = inputr; };
	virtual ~Circle(){};
	double GetArea(){return PI*r*r;};
};

class Ellipse:public BaseEllipse{
	double a;
	double b;
	double alpha;
public:
	Ellipse(){ x = 0; y = 0; a = 1; b = 1; alpha = 0; };
	Ellipse(double inputa, double inputb){ x = 0; y = 0; a = inputa; b = inputb; alpha = 0; };
	Ellipse(double inputx, double inputy, double inputa, double inputb, double inputalpha){ x = inputx; y = inputy; a = inputa; b = inputb; alpha = inputalpha; };
	virtual ~Ellipse(){}
	double GetArea(){return PI*a*b;};
};

int _tmain(int argc, _TCHAR* argv[])
{
	Circle *MyCircle01=new Circle(1, 1, 4), *myCircle02=new Circle(2);
	Ellipse myEllipce01(2, 1), myEllipce02(1, 1, 2, 3, 0);
	cout << MyCircle01->GetArea()<<" "<<myCircle02->GetArea()<<endl;
	cout << myEllipce01.GetArea() << " " << myEllipce02.GetArea() << endl;
	//BaseEllipse b1; ошибка
	return 0;
}
