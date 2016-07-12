#include<bits/stdc++.h>
using namespace std;

int A[100010];

int main()
{
    int t;
    scanf("%d",&t);

    while(t-->0)
    {
        int n;
        scanf("%d",&n);

        for(int i=0;i<n;i++)    scanf("%d",&A[i]);

        int x=A[0];

        int d=0;

        for(int i=1; i<n ; i++)
        {
            if(x>=A[i]) x=A[i];
            else d++;
        }

        int a=0;
        x=A[0];

        for(int i=1; i<n;i++)
        {
            if(x<=A[i]) x=A[i];
            else a++;
        }

        int xx=A[n-1];
        int dd=0;
        for(int i=n-1; i>=0 ; i--)
        {
            if(xx>=A[i]) xx=A[i];
            else dd++;
        }

         xx=A[n-1];
        int aa=0;
        for(int i=n-1; i>=0 ; i--)
        {
            if(xx<=A[i]) xx=A[i];
            else aa++;
        }


        if(d<=1 or a<=1)   printf("YES\n");// printf("YES d=%d a=%d\n",d,a);
        else if(dd<=1 or aa<=1) printf("YES\n"); //    printf("YES dd=%d aa=%d\n",dd,aa);
        else  printf("NO\n");
    }
    return 0;
}
