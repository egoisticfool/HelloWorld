#include<iostream>
#include<string>

using namespace std;

int main()
{
    int group, len;
    string s;
    while(1)
    {
        cin>>group;
        if(group == 0) break;
        cin>>s;
        len = s.size();

        int n = len/group;

        for(int i = 0; i<len; i+=n)
        {
            for(int j = i+n-1; j>=i; j--)
            {
                cout<<s[j];
            }
        }
        cout<<endl;

    }
    return 0;
}
