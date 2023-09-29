#include <iostream>
#include <string>
using namespace std;

string readString()
{
	string myString = "";

	cout<<"please enter the string?\n";
	getline(cin, myString);

	return myString;
}

void printFirstLetterInEachWord(string str)//gomaa el sherbini
{
	cout << str[0] << endl;
	for (int i = 0; i < str.length(); i++)
	{
		if(str[i] == ' ')
		cout << str[i+1] << endl;
	}
	cout << endl;
}

int main()
{
	string str;

	str = readString();

	printFirstLetterInEachWord(str);



	system("pause>0");

	return 0;

}