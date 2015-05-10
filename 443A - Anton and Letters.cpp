#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<string>
#include<cstring>
#include<string.h>
#include<cctype>
#include<ctype.h>

using namespace std;

#define ff(i,n) for(int i=0 ; i<n ;++i)
#define ee cout<<endl
#define INF 999999999
typedef vector<int> vi;

int main()
{
    string s;
    int ch[26];
    int b=0;
    memset(ch,0,sizeof(ch));
    getline(cin,s);

    for(int i=0 ; s[i]!='\0';i++)
        if(isalpha(s[i])) ch[s[i]-97]++;
    for(int i=0 ; i<26;i++)
        if(ch[i]!=0)b++;

    cout<<b<<endl;
}
