#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    
    cout<<"Enter the value of A: "<<endl;
    cin>>a;
    
    cout<<"Enter the value of B: "<<endl;
    cin>>b;
    
    cout<<"Enter the Value of C: "<<endl;
    cin>>c;

    if(a>b && a>c)
    {
        cout<<"A is Greater!!"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"B is Greater!!"<<endl;
    }
    else
    {
        cout<<"C is Greater!!"<<endl;
    }

    return 0;
}