#include <iostream>
using namespace std;

int main() {
    int n,first=0,second=1;
    
    cout<<"Enter a value of N: "<<endl;
    cin>>n;
    
    cout<<"Fibonacci series till " << n <<" terms"<<endl;
    for(int i=1; i<=n; i++)
    {
        cout<<first<<endl;
        int next = first+second;
        first = second;
        second = next;
    }
    return 0;
}