#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int ch = 0;
	int max = 0;
	int many[10]{0,0,0,0,0,0,0,0,0,0};
	string blank = "";
	ifstream text("C:\\Users\\user\\Downloads\\informatyka-2025-czerwiec-matura-rozszerzona-zalaczniki\\informatyka-2025-czerwiec-matura-rozszerzona-zalaczniki\\dane.txt");
	getline(text, blank);
	auto isNumber = [](char number) -> bool
		{
			return (number >= '0' && number <= '9');
		};
	for (int i = 0; i < blank.length() - 1; i++)
	{
		char present = blank[i];
		if (isNumber(present))
		{
			many[atoi(&present)]++;
		}
	}
	for (int i = 0; i < 9; i++) 
	{
		if (max < many[i]) 
		{
			max = many[i];
			ch = i;
		}
	}
	cout << max << " " << ch << endl;
}