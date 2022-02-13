#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;// n is the size of array and k is the initial amount of ram
        cin >> n >> k;
        int arr[n];
        int arr1[n];
        vector<pair<int,int>> v;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }

        //-------------------------------//

        for (int i = 0; i < n; i++)
        {
            v.push_back({arr[i], arr1[i]});
        }
        sort(v.begin(),v.end());// 
        for (auto x : v)
        {
            cout << x.first << " " << x.second << endl;
            if (x.first <= k)
            {
                k = k + x.second;
            }
            else
            {
                break;
            }
        }
        cout << k << "\n";
    }
    return 0;
}
