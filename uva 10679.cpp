#include<bits/stdc++.h>
using namespace std;

int n;
char tx[1000010];
char p[1000010];
int prefix[1000010];
vector<int>vc;

void find_prefix(char *p)
{
    prefix[1]=0;
    int m=strlen(p+1);
    int k=0;

    for(int i=2; i<=m; i++)
    {
        while(k>0 and p[k+1]!=p[i]) k=prefix[k];
        if(p[i]==p[k+1]) k+=1;
        prefix[i]=k;
    }
}

int KMP(char *tx, char *p)
{
    int m=strlen(p+1);
    int n=strlen(tx+1);
    int k=0;

    for(int i=1; i<=n; i++)
    {
        while(k>0 and tx[i]!=p[k+1]) k=prefix[k];
        if(tx[i]==p[k+1]) k+=1;

        if(k==m) return 1;;
    }
    return -1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%s",&tx[1]);
        int q;
        scanf("%d",&q);
        while(q--)
        {
            scanf("%s",&p[1]);
            find_prefix(p);
            int k=KMP(tx,p);
            if(k==1) printf("y\n");
            else printf("n\n");
        }
    }
    return 0;
}

