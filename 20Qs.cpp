#include<iostream>
#include<string>

using namespace std;

int x=50;
string input;

int calcFunc()
{
	if(input=="y"||input=="yes")
	{
		x=x/2;
	}
	else if(input=="n"||input=="no")
	{
		x=x*7/4;
	}
	return x;
}

int main()
{
	for(int counter=0; counter <20; counter++)
	{
		cout <<"Is your number less than " <<x <<"?: ";
		cin >> input;
		calcFunc();
		cout << x <<endl;
	}
	cout <<"Your number is " <<x <<endl;

	system("PAUSE");
	return 0;
}
