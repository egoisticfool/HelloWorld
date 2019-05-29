#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
    int cas = 0;
    char s[10];
    while(scanf("%s", &s))
    {
        if(s[0]=='*') break;
        if(strcmp(s, "Hajj")==0) printf("Case %d: Hajj-e-Akbar\n", ++cas);
        else if(strcmp(s, "Umrah")==0) printf("Case %d: Hajj-e-Asghar\n", ++cas);
    }
    return 0;
}
