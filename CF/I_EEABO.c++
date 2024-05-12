#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
    cin>>a[i];

    int sum=0;
    for(i=0;i<n-1;i++)
    {
        sum = sum + a[i];
    }

    double avg = sum / (n-1);

    for(i=0;i<n-1;i++)
    {
        a[i]=avg;
    }

    for(i=0;i<n;i++)
    cout<<a[i]<<" ";

    cout<<sum;
    return 0;
}