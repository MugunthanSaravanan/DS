#include<iostream>
#include<time.h>
using namespace std;
class ticket
{
    private:
        void name();
    public:
        char passenger_name[100];
        char source[50],destination[50];
        long ticket_id;
        void assign();
};
void ticket::assign()
{
    srand(time(0));
    for (int i=0;i<1;i++)
        ticket_id=rand();
        cout<<"Congrats ! "<<passenger_name<<endl;
        cout<<"Your ticket has been confirmed"<<endl;
        cout<<"Source : "<<source<<endl;
        cout<<"Destination : "<<destination<<endl;
        cout<<"Ticker ID : "<<ticket_id<<endl;
}
int main()
{
    ticket a;
    cout<<"Enter Name of Passenger : ";
    cin>>a.passenger_name;
    cout<<"Enter Source : ";
    cin>>a.source;
    cout<<"Enter Destination : ";
    cin>>a.destination;
    a.assign();
    return 0;
}