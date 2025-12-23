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
int main()
{
	int max = 0;
	int prev = 0;
	string blank = "";
	ifstream text("C:\\Users\\user\\Downloads\\informatyka-2025-czerwiec-matura-rozszerzona-zalaczniki\\informatyka-2025-czerwiec-matura-rozszerzona-zalaczniki\\liczby2.txt");
	while (getline(text, blank))
	{
		int k = stoi(blank) * stoi(blank);
		int n = stoi(blank);
		int coun = 0;
		int a = 0;
		int b = 0;
		int leng = 0;
		int cop = k;
		while (cop != 0)
		{
			cop = cop / 10;
			leng++;
		}
		for (int i = 1; i < leng; i++)
		{
			b = k % ten(i);
			a = (k / ten(i));
			if (a + b <= n) 
			{
				coun++;
			}
			if (coun > max) 
			{
				prev = n;
				max = coun;
			}
		}
	}
	cout << prev << " " << max << endl;
}