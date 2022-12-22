#include<iostream>
using namespace std;
class TIME
{
    public:
    int hh1,mm1,ss1;	
	int hh2,mm2,ss2;	
	int HH,MM,SS;
    void add();
    void set1();
    void set2();
};
void TIME::set1()
{
    cout<<"Enter first time : "<<endl;
	cout<<"Hours : "; cin>>hh1;
	cout<<"Minutes : "; cin>>mm1;
	cout<<"seconds : "; cin>>ss1;
}
void TIME::set2()
{
    cout<<"Enter second time : "<<endl;
	cout<<"Hours : "; cin>>hh2;
	cout<<"Minutes : "; cin>>mm2;
	cout<<"seconds : "; cin>>ss2;
}
void TIME::add()
{
    SS=ss1+ss2;
	MM=mm1+mm2+(SS/60);
	HH=hh1+hh2+(MM/60);
	MM=MM%60;	
	SS=SS%60;	
	cout<<"Added time is: ";
	cout<<HH<<":"<<MM<<":"<<SS<<endl;
}
int main()
{
    TIME a;
    a.set1();
    a.set2();
    a.add();
    return 0;
}