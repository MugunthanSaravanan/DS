#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	int no,age;
	char name[50];
	cout<<"Enter number:";
	cin>>no;
	cout<<"\nEnter name:";
	cin>>name;
	cout<<"\nEnter age:";
	cin>>age;
	
	ofstream fout("indexfile.txt");
	fout<<"\t"<<no<<"\t"<<name<<"\t"<<age;
	fout.close();
	
	ifstream fin("indexfile.txt");
	fin>>no>>name>>age;
	fin.close();
	cout<<endl<<no<<"\t"<<name<<"\t"<<age;
	
	return 0;
}