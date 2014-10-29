#include<iostream>
#include<string>

using namespace std;

//set initial number and string variable
int x=50;
string input;

//function decides what calculation to make based on user input
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
	//loop iterates until 20 questions have been asked
	for(int counter=0; counter <20; counter++)
	{
		cout <<"Is your number less than " <<x <<"?: ";
		cin >> input;
		calcFunc();
		cout << x <<endl;
	}
	//"guessed" number printed
	cout <<"Your number is " <<x <<endl;
	system("PAUSE");
	
	return 0;
}
