#include<bits/stdc++.h>
using namespace std;


char s[200][200];
char s1[200][200];

int dp[200][200];
int vis[200][200];
int vis1[200][200];

vector<string>vc;
int k,k1;

//D A[1010];

int lcs(int i, int j)
{
    if(i>=k || j>=k1) return 0;
    int &ret=dp[i][j];
    if(ret!=-1) return ret;

    if(strcmp(s[i],s1[j])==0)
    {

        dp[i][j]=1+lcs(i+1,j+1);
        vis[i][j]=i+1;
        vis1[i][j]=j+1;
        // vc.push_back({1,j});
    }

    else
    {
        if(lcs(i+1,j)> lcs(i,j+1))
        {
            dp[i][j]=lcs(i+1,j);
            vis[i][j]=i+1;
            vis1[i][j]=j;
        }
        else
        {
            dp[i][j]=lcs(i,j+1);
            vis[i][j]=i;
            vis1[i][j]=j+1;
        }
    }
    //dp[i][j]=max(lcs(i+1,j) , lcs(i,j+1));

    return dp[i][j];
}

void print()
{
    vc.clear();
    k=0,k1=0;

    while(vis1[k][k1]!=-1 and vis[k][k1]!=-1)
    {
        // cout<<k<<' '<<k1<<endl;
        if(strcmp(s[k],s1[k1])==0)
            vc.push_back(s[k]);

        int x=k;
        k=vis[k][k1];
        k1=vis1[x][k1];
    }
    //cout<<vc.size()<<endl;
    k=vc.size();
    for(int i=0; i<k-1; i++)
        cout<<vc[i]<<' ';
    cout<<vc[k-1]<<endl;

}


int main()
{

    while(scanf("%s",&s[k])!=EOF)
    {
        k++;
        while( scanf("%s",&s[k]) and strcmp(s[k],"#")!=0) k++;
        //     cout<<k<<endl;

        while( scanf("%s",&s1[k1]) and strcmp(s1[k1],"#")!=0) k1++;
//cout<<k1<<endl;
        //   for(int i=0;i<k1; i++) cout<<s1[i]<<endl;

        for(int i=0; i<200; i++) for(int j=0; j<200; j++) dp[i][j]=-1;
        for(int i=0; i<200; i++) for(int j=0; j<200; j++) vis[i][j]=-1;
        for(int i=0; i<200; i++) for(int j=0; j<200; j++) vis1[i][j]=-1;


        int a=lcs(0,0);

       // cout<<a<<endl;
        // for(int i=0; i<k;i++)
        // for(int j=0; j<k1;j++) cout<<dp[i][j]<<' '<<i<<' '<<j<<endl;
        print();
        k=0;
        k1=0;

    }
    return 0;
}
