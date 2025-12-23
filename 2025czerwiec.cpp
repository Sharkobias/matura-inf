#include <iostream>
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
	int k = 123456;
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
	a = (k / ten(leng/2));
	cout << a << " " << b << endl;
}