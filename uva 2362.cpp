#include<bits/stdc++.h>
using namespace std;

int main()
{

    double x;
    while(scanf("%lf",&x)!=EOF)
    {
        double ans=x;
        for(int i=1;i<=11;i++)
        {
            scanf("%lf",&x);
            ans+=x;
        }
        printf("$%.2f\n",ans/12.0);
    }
    return 0;
}
