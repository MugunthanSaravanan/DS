#include <iostream>
#include <string>
using namespace std;
 
class student{
    static int counter;
    
    private:
    
    string sname,sid,dept;
     
    public:
    student(string sn,string dt)
    {
        sname=sn;
        dept=dt;
        sid="";
    }
    void generate_id()
    {
        counter++;
        if(counter<10)
            sid = dept + "0" + to_string(counter);
        else
            sid = dept + to_string(counter);
    }
    void print_details()
    {
        cout<<"Name: "<<sname<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Your Admission ID: "<<sid<<endl;
        
    }
     
};
 
int student:: counter;
 
int main()
{
    student s1("Alex","IT"), s2("Sona","ADS"),s3("Joe","CSE");
     
    s1.generate_id();
    s1.print_details();
    
    s2.generate_id();
    s2.print_details();
    
    s3.generate_id();
    s3.print_details();
     
    return 0;
}