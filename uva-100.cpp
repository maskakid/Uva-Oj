#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;

    while(cin>>i>>j)
    {
        int i_i=i;
        int j_j=j;
        if(i>j) swap(i,j);
        int cycle=0;
        int mx_cycle=0;
        while(i<=j)
        {
            cycle=1;
            int n=i;
            while(n>1)
            {
                if(n%2) n=3*n+1;
                else n/=2;
                cycle++;
            }
            if(cycle>mx_cycle)  mx_cycle=cycle;
            i++;
        }
        printf("%d %d %d\n",i_i,j_j,mx_cycle);
    }
    return 0;
}
