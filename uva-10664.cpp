
#include<bits/stdc++.h>
using namespace std;

int A[25];
int n;
int sum;

int rec(int x, int y)
{
    if(x==sum/2) return x;
    if(y>=n)    return 0;

    int p1=0,p2=0;

    if(x+A[y]<=sum/2)    p1=rec(x+A[y],y+1);
    p2= rec(x,y+1);

    return max(p1,p2);
}


int main()
{
    string s;
    int t;
    scanf("%d",&t);
    getchar();
    while(t-->0)
    {
        getline(cin,s);
        stringstream ss;
        ss<<s;
        n=0;
        int x=0;
        sum=0;
        while(ss>>x)    A[n++]=x,sum+=x;

        if(sum%2==1)
        {
            printf("NO\n");
            continue;
        }

        int xx=rec(0,0);

        printf( (xx==floor(sum/2) and xx==ceil(sum/2) ) ?"YES\n":"NO\n");
    }
    return 0;
}
