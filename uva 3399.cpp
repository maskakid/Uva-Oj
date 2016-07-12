#include<bits/stdc++.h>
using namespace std;
#define _max 1000010

int prime[_max];
vector<int>v;

void sieve()
{
    for(int i=4;i<_max;i+=2)    prime[i]=1;
    prime[0]=prime[1]=1;
    for(int i=3;i<=sqrt(_max);i+=2)
    {
        if(prime[i]==0)
            for(int j=i+i;j<_max;j+=i)  prime[j]=1;
    }
    for(int i=2;i<_max;i++) if(prime[i]==0) v.push_back(i);
}

int cal(int x,int n)
{
    int sum=0;
    for(int i=x;v[i]<=n;i++)
    {
        sum+=v[i];
        //cout<<sum<<endl;
        if(sum==n)  return 1;
        if(sum>n)  return 0;
    }
    return 0;
}

int main()
{
    sieve();

    int n;
    while(scanf("%d",&n) and n>0)
    {
        int ans=0;
        for(int i=0;v[i]<=n;i++)
        {
          //  cout<<"----------"<<v[i]<<endl;
            ans+=cal(i,n);
        }
        cout<<ans<<endl;
    }
    return 0;

}
