#include<iostream>
using namespace std;
class paper
{
    public:
    paper(){
        int a,b;
    }
    void per(int a,int b){
        int perimeter=2*(a+b);
        cout<<"Perimeter : "<<perimeter<<endl;
    }
    void area(int a,int b){
        int area=a*b;
        cout<<"Area : "<<area<<endl;
    }
};
int main()
{
    paper p;
    int a,b;
    cout<<"Enter Length : "; cin>>a;
    cout<<"Enter Width  : "; cin>>b;
    p.per(a,b);
    p.area(a,b);
    return 0;
}