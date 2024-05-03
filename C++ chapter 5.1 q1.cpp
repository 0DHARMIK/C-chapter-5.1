#include <iostream>
using namespace std;

class Calculator {
public:
    int a,b,c,d,e;
};

class Perform {
public:
	void calculator(int a, int b) 
	{
        cout<<"devision a / b = "<<a / b<<endl;
    }

    void calculator(int a, int b, int c) 
	{
        cout<<"subtraction a - b - c = "<<a - b - c<<endl;
    }
    
    void calculator(int a, int b, int c, int d) 
	{
        cout<<"multiplication a * b * c * d = "<<a * b * c * d<<endl;
    }

    void calculator(int a, int b, int c, int d, int e) 
	{
        cout<<"addition a + b + c + d + e = "<<a + b + c + d + e<<endl;
    }
};

main() 
{
    Perform p;
   p.calculator(20,10);
   p.calculator(20,10,5);
   p.calculator(10,20,30,40);
   p.calculator(10,20,30,40,50);
    

}