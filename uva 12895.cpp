#include<bits/stdc++.h>
#define LL long long int
using namespace std;

char ch[20];
char ch1[20];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        LL n=0;
        scanf("%s",&ch);
        int len=strlen(ch);
        for(int i=0; i<len;i++)
        {
            LL x=ch[i]-'0';
            LL x1=ch[i]-'0';
            for(int j=0;j<len-1;j++)
                x=x*x1;
            n+=x;
        }
        stringstream ss;
        ss<<n;
        ss>>ch1;
        if(strcmp(ch,ch1)==0) printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }
    return 0;
}
