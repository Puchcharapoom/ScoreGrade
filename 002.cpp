#include<iostream>
using namespace std;
int main()
{
	int p;
	cout <<"Enter your point";
	cin >>p;

	if(p>=101)
		cout<<"Error"<<endl;
	else if  (p=90&&p>=100)
		cout <<"A"<<endl;

	else if  (p=80&&p>=89)
		cout <<"B"<<endl;

	else if  (p=70&&p>=79)
		cout <<"C"<<endl;

	else if  (p=60&&p>=69)
        cout <<"D"<<endl;

	else if  (p=0&&p>=50)
	    cout <<"F"<<endl;
	else if (p>=101)
		cout<<"Error";

	return 0;
}