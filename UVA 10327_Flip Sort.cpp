#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int n;
    while(cin>>n)
    {
        int arr[n+1];
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i = 1; i<n; i++)
        {
            if(arr[i-1]>arr[i])
            {
                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
                i = 0;
                cnt++;
            }
        }
        cout<<"Minimum exchange operations : "<<cnt<<endl;
    }
    return 0;
}
