#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int test, n, high, low, cas = 1;
    cin>>test;
    while(test--)
    {
        high = 0;
        low = 0;
        cin>>n;
        int arr[n+1];
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i = 0; i<n-1; i++)
        {
            if(arr[i]<arr[i+1]) high++;
            else if(arr[i]>arr[i+1]) low++;
        }
        cout<<"Case "<<cas++<<": "<<high<<" "<<low<<endl;
    }
    return 0;
}
