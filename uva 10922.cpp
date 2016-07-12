#include<bits/stdc++.h>
using namespace std;

char tx[1010];

int main()
{
    while(gets(tx))
    {
        if(strcmp(tx,"0")==0) return 0;
    int n=strlen(tx);
    int sum=0;
    int num=0;
    for(int i=0;i<n;i++)
    {
        sum+=(tx[i]-'0');
        num=(num+(tx[i]-'0'))%9;
    }
    int cnt=0;

    while(sum>9)
    {
        int x=0;
        while(sum>0)
        {
            x+=(sum%10);
            sum/=10;
        }
        cnt++;
        sum=x;
    }
    if(num==0)
    printf("%s is a multiple of 9 and has 9-degree %d.\n",tx,cnt+1);
    else
        printf("%s is not a multiple of 9.\n",tx);
    }
    return 0;
}
