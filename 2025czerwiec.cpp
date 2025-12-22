#include <iostream>
using namespace std;
int c = 0;
int skroc(int x) 
{
    int y = x % 10;
    if (x == y)
        return 0;
    else
        return (x - y)/10;
}
int dopisz(int x) 
{
    return x * 10;
}
int ost(int x) 
{
    return x % 10;
}
int f(int a, int b) 
{
    c++;
    if (b == 0)
        return 0;
    else 
    {
        int k = ost(b);
        int w = f(a, skroc(b));
        w = dopisz(w);
        while (k > 0) 
        {
            w = w + a;
            k = k - 1;
        }
        return w;
    }
}
int main()
{
    f(987654321, 123456789);
    cout << c;
}