#include <iostream>
using namespace std;

int main() 
{
    int n;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=n-1;j>-1;j--)
    {
        cout<<arr[j]<<" ";
    }    
    return 0;
}
