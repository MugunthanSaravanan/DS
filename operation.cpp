#include<iostream>
using namespace std;

template<class T>
class operations
{
private:
    T num;
    T num1;
public:
    operations(Tn):num(n);num1(n){}
    T addnum()
    {
    return num+num1;
    }
    T subnum()
    {
    return num-num1;
    }
    T mulnum()
    {
    return num*num1;
    }
    T divnum()
    {
    return num/num1;
    }
};
int main()
{
    operations<int n,int n> ab (10,7);
    //num int(10,7);
    cout<<"add="<<ab.addnum()<<endl;
    cout<<"sub="<<ab.subnum()<<endl;
    cout<<"mul="<<ab.mulnum()<<endl;
    cout<<"div="<<ab.divnum()<<endl;
    return 0;
}
