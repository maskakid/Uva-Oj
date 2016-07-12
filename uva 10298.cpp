#include<bits/stdc++.h>
using namespace std;

char tx[1000010];

int prefix[1000010];

void find_prefix()
{
    int n=strlen(tx);
    prefix[0]=0;
    int k=0;
    for(int i=1; i<n;i++)
    {
        while(k>0 and tx[k]!=tx[i]) k=prefix[k-1];
        if(tx[i]==tx[k]) k+=1;
        prefix[i]=k;
    }
}
int main()
{
    while(gets(tx))
    {
        if(strcmp(tx,".")==0) break;
        find_prefix();
        int n=strlen(tx);
        int x=n-prefix[n-1];
       // cout<<prefix[n-1]<<endl;
        if(n%x==0) printf("%d\n",n/x);
        else printf("1\n");
    }
    return 0;
}
