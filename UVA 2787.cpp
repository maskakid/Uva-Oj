#include<bits/stdc++.h>
using namespace std;

long long int A[100000];

int main()
{
#ifdef akid
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif // akid

    stringstream ss;
    string s;

    int t;
    cin>>t;
    while(t--)
    {
        getline(cin,s);
        // if(s=="-1") break;
        ss.clear();
        ss<<s;
        int n;
        int ans=0,k=0;
        while(ss>>n)
        {
            // if(n>0)
            A[k++]=n;
        }
        sort(A,A+k);
        for(int i=0; i<k; i++)
        {
            ans=ans+binary_search(A,A+k,A[i]*2);
        }
        cout<<ans<<endl;
    }
    return 0;
}
