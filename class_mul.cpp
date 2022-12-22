#include<iostream>
using namespace std;
class A{
    public:
    int multiplyA()
    {
        int var1 = 4;
        int var2 = 5;
        int mulA = var2*var1;
        return mulA;
    };
};
class B:public A{
    public:
    int multiplyB(){
        int var3 = 6;
        int mulB = multiplyA()*var3;
        return mulB;
    };
};
class C:public B{
    public:
    int multiplyC(){
        int var4 = 7;
        int mulC = multiplyB()*var4;
        return mulC;
    };
};
int main()
{
    C obj;
    cout<<"Final Answer : "<<obj.multiplyC();
    return 0;
}