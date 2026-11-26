#include<iostream>
#include<string>
using namespace std;
class Students
{
public :
string name;
void details()
{
cout<<"Name =";
cin>>name;
cout<<"Hello its nice to meet you"<<name<<endl;
}
};
int main()
{
Students s1[3];
s1[0].details();
s1[1].details();
s1[2].details();
return 0;
}
