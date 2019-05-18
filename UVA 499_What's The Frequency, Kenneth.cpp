#include<iostream>
#include<string.h>
#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s;
    int a[128];
    while(getline(cin, s))
    {
        memset(a, 0, sizeof(a));
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
                a[s[i]]++;
        }
        int f = 0;
        for(int i=0; i<128; i++)
        {
            if(a[i]>f) f = a[i];
        }
        for(int i = 0; i<128; i++)
        {
            if(a[i]==f)
            {
                printf("%c", i);
            }
        }
        printf(" %d\n", f);
    }

    return 0;
}
