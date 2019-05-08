#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    string s;
    long long int num;
    while(cin>>s)
    {
        if(s.size()==1 && s[0]=='0') break;
        num = 0;
        int j = 1;
        for(int i = s.size()-1; i>=0; i--)
        {
            //cout<<s[i]-'0'<<endl;
            num+=((s[i]-'0')*((pow(2, j)-1)));
            j++;
        }
        cout<<num<<endl;
    }
    return 0;
}
