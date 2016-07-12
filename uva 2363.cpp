#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1);

int main()
{

   // printf("%f",PI);
    int t,cas=1;
    cin>>t;
    while(t--)
    {
        double x,y;
        scanf("%lf %lf",&x,&y);
        double area =(x*x+y*y)*PI/2/50;
        int ans= ceil(area);
        printf(
               "Property %d: This property will begin eroding in year %d.\n",
               cas++,ans);
    }
    printf("END OF OUTPUT.\n");
    return 0;
}
