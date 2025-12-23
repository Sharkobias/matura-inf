#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int amount = 0;
	string blank = "";
	ifstream text("C:\\Users\\user\\Downloads\\informatyka-2025-czerwiec-matura-rozszerzona-zalaczniki\\informatyka-2025-czerwiec-matura-rozszerzona-zalaczniki\\dane.txt");
	getline(text, blank);
	auto isNumber = [](char character) {
		return (character >= '0' && character <= '9');
	};
	for (int i = 0; i< blank.length() - 1; i++) 
	{
		char current = blank[i];
		char next = blank[i + 1];
		char previous = i == 0 ? ' ' : blank[i - 1];
		if (current == '5' && next == '0' && !isNumber(previous)) {
			amount++;
		}
	}
	cout << amount << endl;
}