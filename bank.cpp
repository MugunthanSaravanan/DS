#include<iostream>
using namespace std;
class BANK
{
    private:
    float ROI=0.12;
    public:
    char customer_name[100];
    long acc_no;
    float balance;
    void display();
};
void BANK::display()
{
    std::cout<<"Update Balance : "<<balance*ROI;
}
int main()
{
    BANK a;
    std::cout<<"Enter Balance : ";
    std::cin>>a.balance;
    if(a.balance<10000)
    {
        std::cout<<"Not Eligible";
    }
    else{
        a.display();
    }
    return 0;
}