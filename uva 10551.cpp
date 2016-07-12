#include<bits/stdc++.h>
#define LL long long int
using namespace std;

LL b, n , m;

char tx[1010];
char p[1010];
LL A[1010];

int main()
{
    while(scanf("%lld",&b) and b>0)
    {
        scanf("%s %s",&p,&tx);
        n=0;
        m=0;
        int len=strlen(tx);
        for(int i=0; i<len; i++)
            n=n*b+(tx[i]-'0');
        //    cout<<n<<endl;
        len=strlen(p);
        for(int i=0;i<len;i++)
            m=((m*b)%n+(p[i]-'0')%n)%n;
        len=0;
        while(m)
        {
            A[len++]=(m%b);
            m=m/b;
        }
        for(int i=len-1;i>=0;i--) printf("%lld",A[i]);
        if(len==0) printf("0");
        printf("\n");
    }
    return 0;
}
