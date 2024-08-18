#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="aabbccbcc";

    int fre[26];
    for(int i=0;i<26;i++)
    {
        fre[i]=0;
    }
    for(int i=0;i<s.size();i++)
    {
        fre[s[i]-'a']++;
    }
    char ans='a';
    int maxf=0;
    for(int i=0;i<26;i++)
    {
        if(fre[i]>maxf)
        {
            maxf=fre[i];
            ans=i+'a';
        }
    }
    cout<<maxf<<" "<<ans<<endl;
    return 0;
}



