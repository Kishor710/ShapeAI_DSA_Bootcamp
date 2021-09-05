#include<iostream>
using namespace std;

int main() {
    int n;
    int flag=0;
    
    cout << "Enter value of A: " <<endl;
    cin >> n;
    
    for(int i=2; i<=n-1; i++)
    {
        if( n%i==0 )
        {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
    {
        cout<<"Yes"<< n <<" is a Prime Number!!" << endl;
    }
    else
    {
        cout<<n<<" is Not a Prime Number!!" << endl;
    }
    
    return 0;
}