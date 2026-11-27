#include<iostream>
#include<string>
using namespace std;
class calculator
{
public:
int add (int a, int b)
{return a+b;}
double add(double a, double b)
{return a+b;}
int add (int a, int b,int c)
{return a+b+c;}
};
int main()
{
calculator calc;
cout<<"Add int"<<calc.add(5,3)<<endl;
cout<<"add double"<<calc.add(1.2,1.3)<<endl;
cout<<"add 3 int"<<calc.add(2,4,6)<<endl;
return 0;
}
