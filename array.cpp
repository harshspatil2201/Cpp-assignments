#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
int marks[3];
string sub1,sub2,sub3;
void getmarks()
{
cout<<"Subject 1 = "<<endl;
cin>>marks[0];
cout<<"Subject 2 = "<<endl;
cin>>marks[1];
cout<<"Subject 3 = "<<endl;
cin>>marks[2];
}
void showmarks()
{
cout<<"Marks = ";
for(int i=0;i<3;i++)
{
cout<<marks[i]<<endl;
}
}
};
int main()
{
Student s1;
s1.getmarks();
s1.showmarks();
return 0;
}
