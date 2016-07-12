#include<bits/stdc++.h>
using namespace std;

char A[26][10]= {".-","-...","-.-.","-..",".","..-.","--.",
                 "....","..",".---","-.-", ".-..",
                 "--", "-.", "---", ".--.", "--.-", ".-.", "...","-",
                 "..-", "...-", ".--", "-..-","-.--", "--.."
                };
char B[10][10]= { "-----", ".----", "..---","...--", "....-", ".....",
                  "-....", "--...", "---..", "----."
                };
char C[17][10]= { ".-.-.-", "--..--", "..--..",
                  ".----.", "-.-.--","-..-.",
                  "-.--.", "-.--.-", ".-...",
                  "---...","-.-.-.", "-...-",
                  ".-.-.","-....-", "..--.-",
                  ".-..-.", ".--.-."
                };

char str[2000+11];
vector<string>vc;

int main()
{
    printf("%d\n",'.');
    int t,cas=1,k=0;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        if(k)   printf("\n");
        k=1;
        gets(str);
        string s="";
        for(int i=0; i<strlen(str); i++)
        {
            s+=str[i];
            for(int i=0; i<26; i++)
                if(s== (string (A[i]) )  ) vc.push_back(s),s="";
            for(int i=0; i<10; i++)
                if(s== (string (B[i]) )  ) vc.push_back(s),s="";
            for(int i=0; i<17; i++)
                if(s== (string (C[i]) )  ) vc.push_back(s),s="";
        }

        printf("Message #%d\n",cas++);
        for(int i=0;i<vc.size();i++)
        {
            cout<<vc[i];
            if(i<vc.size()-1)   cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
