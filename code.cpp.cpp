#include<iostream>
using namespace std;
class student{
private:
string name,address;
public:
student(string e,string f)
{
	name=e;
	address=f;
	cout<<"name\n";
	cout<<name<<endl;;
	cout<<"address\n";
	cout<<address<<endl;;
}
};
class student2{
private:
int d;
public:
student2(int g)
{
	d=g;
	cout<<"enter the roll no\n";
	cout<<d<<endl;;
}
};
class data:public student,public student2{
private:
int a,b,c,sum;
public:
data(string e,string f,int g,int h,int i,int j):student(e,f),student2(g)
{
	a=h;
	b=i;
	c=j;
	cout<<"marks 1\n";
	cout<<a<<endl;
	cout<<"marks 2\n";
	cout<<b<<endl;
	cout<<"marks 3\n";
	cout<<c<<endl;;
	sum=a+b+c;
	cout<<"sum is\n";
	cout<<sum<<endl;
}
};
main()
{
   data d1("anfal","professor",231178,10,10,10);
}
