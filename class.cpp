
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
float sub1,sub2,sub3,total,percentage;
string name;
int rollno;
void details() {
cout<<"Enter name"<<endl;
cin>>name;
cout<<"Enter rollno"<<endl;
cin>>rollno;
cout<<"Enter marks of subject 1"<<endl;
cin>>sub1;
cout<<"Enter marks of subject 2"<<endl;
cin>>sub2;
cout<<"Enter marks of subject 3"<<endl;
cin>>sub3;
}
void result() {
total=sub1+sub2+sub3;
percentage=(total/300)*100;
if(percentage>30)
cout<<"passed";
else 
cout<<"failed";
}
void display() {
cout<<"Student details"<<endl;
cout<<"Name = ";
cout<<name<<endl;
cout<<"Rollno= ";
cout<<rollno<<endl;

cout<<"Result"<<endl;
cout<<"Marks of Subject 1 = ";
cout<<sub1<<endl;
cout<<"Marks of Subject 2 = ";
cout<<sub2<<endl;
cout<<"Marks of Subject 3 = ";
cout<<sub3<<endl;
cout<<"Total marks = ";
cout<<total<<endl;
cout<<"Percentage = ";
cout<<percentage<<endl;
}
};
int main()
{
Student s1;
s1.details();
s1.result();
s1.display();
return 0;
}

