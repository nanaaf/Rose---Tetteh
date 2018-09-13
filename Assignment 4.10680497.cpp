#include <iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
   int a, b;

   cout << "Enter two positive integers: ";
   cin >> a >> b;

   cout << "g.c,d of " << a << " & " <<  b << " is: " << gcd(a, b);

   return 0;
}

int gcd(int a, int b)
{
    if (b != 0)
       return gcd(b, a % b);
    else
       return a;
}
