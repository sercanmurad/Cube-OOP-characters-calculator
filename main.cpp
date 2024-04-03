#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class Kub
{
	public:
		double a;
		virtual double S();
		virtual double S1();
		virtual double V();
		Kub(double aa);
		double GetA();
};
Kub::Kub(double aa)
{
	a=aa;
}
double Kub::GetA()
{
	return a;
}
double Kub::S1()
{
	return 6*(a*a);
}
double Kub::S()
{
	return 4*(a*a); 
}
double Kub::V()
{
	return a*a*a;
}

class Pravoygilen_par:public Kub
{
	public:
		double b;
		double c;
		virtual double S();
		virtual double S1();
		virtual double V();
		double GetB();
		double GetC();
		Pravoygilen_par(double aa,double bb,double cc);		
};

Pravoygilen_par::Pravoygilen_par(double aa,double bb,double cc):Kub(a)
{
	b=bb;
	c=cc;
}
double Pravoygilen_par::GetB()
{
	return b;
}
double Pravoygilen_par::GetC()
{
	return c;
}
double Pravoygilen_par::S()
{
	return (2*c)*(a+b);
}
double Pravoygilen_par::S1()
{
	return 2*((a*b)+(a*c)+(b*c));
}
double Pravoygilen_par::V()
{
	return a*b*c;
}


int main(int argc, char** argv) {
	
	
	Kub k(3);
	cout<<"V="<<k.V()<<endl;
	cout<<"S="<<k.S()<<endl;
	cout<<"S1="<< k.S1()<<endl;
    
    Pravoygilen_par p(2,3,4);
    cout<<"V="<<p.V()<<endl;
	cout<<"S="<<p.S()<<endl;
	cout<<"S1="<<p.S1()<<endl;
	
	system("pause");
 
	return 0;
}
