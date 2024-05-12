#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> arr(n);

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr[i] = temp;
        }

        int maxi = *max_element(arr.begin(), arr.end());
        int mini = *min_element(arr.begin(), arr.end());

        cout<<(maxi-mini)<<endl;
    }
    return 0;
}