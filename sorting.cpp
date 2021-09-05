#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number of N: "<<endl;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i< n; i++)
    {
        cout<<"Enter value of Element number "<<i<<endl;
        cin>>arr[i];
    }
    
    //till this Point we are taking input of Array.
    
    cout<<"-------------------------"<<endl;
    
    int temp=0;
    
    for(int i=0; i< n; i++)
    {
        for(int j=i+1; j< n; j++)
        {
            if(arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[temp];
            }
        }
    }
	
    //printing second largest element of Array.    
    cout<<"second largest element of Enter array is "<<arr[n-2] <<endl;
	
    return 0;
}