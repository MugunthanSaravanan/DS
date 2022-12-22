#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student
{
    string name;
    int marrk[6],i=0,total=0;
    float average;
    public:
    void getdetails(){
        ifstream inf("file.txt");
        while(i<=6){
            if(i==0){
                inf >> name;
            }
            else{
                inf >> marrk[i-1];
            }
            i++;
        }
    }
    void calculate()
    {
        i=0;
        while(i<6){
            total=total+marrk[i];
            i++;
        }
        average=total/6.0;
    }
    void display()
    { 
        cout<<"NAME:"<<name<<endl;
        for(i=0;i<6;i++)
        {
            cout<<"mark"<<i+1<<":";
            cout<<marrk[i]<<endl;
        }
            cout<<"TOTAL:"<<total;
            cout<<endl<<"AVERAGE:"<<average;
    }
};
int main()
{ 
    student obj;
    obj.getdetails();
    obj.calculate();
    obj.display();
}