#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;

int A[3000+10];
int B[3000+10];

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)    scanf("%d",&A[i]);
        for(int i=0;i<n-1;i++)  B[i]=abs(A[i+1]-A[i]);
        sort(B,B+n-1);
        bool ok=true;
        int k=1;
        for(int i=1;i<n;i++)
        if(B[i]==B[i-1])    ok=false;
        printf(ok==false?"Not jolly\n":"Jolly\n");
    }
    return 0;
}
