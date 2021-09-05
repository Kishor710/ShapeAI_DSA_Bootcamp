#include <iostream>
using namespace std;

int main() {
    int a,b;

    cout<< "Enter the value of A: " <<endl;
    cin>>a;
    cout<< "Enter the value of B: " <<endl;
    cin>>b;

    a = a+b;
    b = a-b;
    a = a-b;

    cout<< "Value of A is: " << a <<endl;
    cout<< "Value of B is: " << b <<endl;


    return 0;
}