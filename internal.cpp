#include <iostream>
using namespace std;

class mark{
    public:
    int reg,sem,ass,att,cie1,cie2,cie3,cietot,ciemark,intern,inter;
    char name[300],dep[300];
    void info(){
        cout<<"Enter Name : ";cin>>name;
        cout<<"Enter Register num :";cin>>reg;
        cout<<"Enter Dept. :";cin>>dep;
    }
    void seminar(){
        cout<<"Enter Seminar Mark :";
        cin>>sem;
    }
    void assignment(){
        cout<<"Enter Assignment Mark :";
        cin>>ass;
    }
    void attendence(){
        cout<<"Enter Attendence Mark :";
        cin>>att;
    }
    void cie(){
        int ciea,cieb;
        cout<<"Enter CIE 1 Mark :";cin>>cie1;
        cout<<"Enter CIE 2 Mark :";cin>>cie2;
        cout<<"Enter CIE 3 Mark :";cin>>cie3;
        ciea=max(cie1,cie2);
        cieb=max(cie1,cie3);
        cietot=ciea+cieb;
        ciemark=(cietot*80)/100;
    }
    void calculate(){
        inter = sem+ass+att+ciemark;
        intern=(inter*40)/100;
    }
    
    void display(){
        cout<<"Name            : "<<name<<endl;
        cout<<"Register num    : "<<reg<<endl;
        cout<<"Department      : "<<dep<<endl;
        cout<<"Internal        : "<<intern<<endl;
    }
};
int main() {
    mark internal;
    int n;cout<<"Enter Number of Students : ";cin>>n;
    for (int i=0;i<n;i++){
        internal.info();
        internal.seminar();
        internal.attendence();
        internal.assignment();
        internal.cie();
        internal.calculate();
        internal.display();
    }
    return 0;
}