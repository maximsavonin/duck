#include <iostream>

using namespace std;

int main()
{
   int a, b, c;
    cin>> a >> b >> c;
    if ((a % 10 == 1)and(b % 10 == 1)and(c % 10 == 1)) cout<<true;
    else cout<<false;
    return 0;
}
