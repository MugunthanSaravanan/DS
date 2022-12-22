#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	int no,age;
	char name[50];

	ifstream fin("indexfile.txt");

	fin>>no>>name>>age;

	fin.close();

	cout<<endl<<no<<"\t"<<name<<"\t"<<age;

	return 0;
}