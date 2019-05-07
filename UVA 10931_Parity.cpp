#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    long long int num;
    int arr[110];
    string s;
    while(cin>>num)
    {
        if(num == 0) break;
        int i = 0, cnt = 0;
        while(num!=0)
        {
            arr[i]=num%2;
            s.push_back(arr[i]+'0');
            i++;
            if(num%2==1) cnt++;
            num/=2;
        }
        reverse(s.begin(), s.end());
        cout<<"The parity of "<<s<<" is "<<cnt<<" (mod 2)."<<endl;
        s.clear();
    }
    return 0;
}
