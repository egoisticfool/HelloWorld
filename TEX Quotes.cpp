#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    string s;
    int flag=0;
    while(getline(cin, s)){
        //getchar();
        for(int i = 0; i<s.size(); i++){
            if(s[i]==' ') printf(" ");
            else if(s[i]=='"' && flag == 0){
                printf("``");
                flag = 1;
            }
            else if(s[i]=='"' && flag == 1){
                printf("''");
                flag = 0;
            }
            else printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}
