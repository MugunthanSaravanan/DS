#include<iostream>
using namespace std;
class paper
{
    public:
        int h,w;
        int perimeter(int w,int h)
        {
            int p=2*(w+h);
            return p;
        }
        int area(int w,int h)
        {
            int a=w*h;
            return a;
        }
};
int main()
{
    paper p;
    int w,h;
    cout<<"enter width:";
    cin>>w;
    cout<<"enter height:";
    cin>>h;
    cout<<"area:"<<p.area(w,h)<<endl;
    cout<<"perimeter:"<<p.perimeter(w,h)<<endl;
    return 0;
}
