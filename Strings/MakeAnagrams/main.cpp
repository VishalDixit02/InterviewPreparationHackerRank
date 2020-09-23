#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;

    int A[26]={0};
    int B[26]={0};

    for(int i=0;i<a.length();i++)
    {
        int index=a[i]-'a';
        A[index]++;
    }
    for(int i=0;i<b.length();i++)
    {
        int index=b[i]-'a';
        B[index]++;
    }

    int ans=0;
    for(int i=0;i<=25;i++)
    {
        if(A[i]!=0 || B[i]!=0)
        {
            ans+=abs(A[i]-B[i]);
        }
    }

    cout<<ans<<endl;
    return 0;
}
