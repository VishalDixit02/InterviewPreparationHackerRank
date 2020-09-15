#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        int count=0;
        bool flag= false;
        for(int i=0;i<n;i++)
        {
            if((a[i]-(i+1)>2))
            {
                flag=true;
                break;
            }
            for(int j=a[i]-2;j<i;j++)
            {
                if(a[j]>a[i])
                    count++;
            }
        }
        if(flag)
            cout<<"Too chaotic"<<endl;
        else
            cout<<count<<endl;
    }
    return 0;
}
