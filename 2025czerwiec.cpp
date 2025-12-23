#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int ten(int x) 
{
	int res = 10;
	for(int i = x; i!=1; i--)
	{
		res=res * 10;
	}
	return res;
}
int nwd(int a, int b) 
{
	int pom;
	while (b != 0)
	{
		pom = b;
		b = a % b;
		a = pom;
	}
	return a;
}
int main()
{
	int coun = 0;
	string blank = "";
	ifstream text("C:\\Users\\user\\Downloads\\informatyka-2025-czerwiec-matura-rozszerzona-zalaczniki\\informatyka-2025-czerwiec-matura-rozszerzona-zalaczniki\\liczby1.txt");
	while (getline(text, blank))
	{
		int k = stoi(blank);
		int a = 0;
		int b = 0;
		int leng = 0;
		int cop = k;
		while (cop != 0)
		{
			cop = cop / 10;
			leng++;
		}
		b = k % ten(leng / 2);
		a = (k / ten(leng / 2));
		if (nwd(a, b) == 1)
			coun++;
	}
	cout << coun << endl;
}