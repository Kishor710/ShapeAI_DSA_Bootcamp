#include <iostream>
using namespace std;

int main()
{
int i, j, k = 0;

for(i = 1; i <= 5; ++i, k = 0)
{
    for(j = 1; j <= 5-i; ++j)
    {
        cout << " ";
    }
    
    while(k != 2 * i-1)
    {
        cout << "*" ;
        ++k;
    }
        cout << endl;
    }

    return 0;
}