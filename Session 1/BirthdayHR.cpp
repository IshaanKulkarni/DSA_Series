// problem link: https://www.hackerrank.com/challenges/the-birthday-bar/problem
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int a[n];
    int sum[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sum[0]=a[0];
    for(int i=1;i<n;i++){
        sum[i]=sum[i-1]+a[i];//Calculating the prefix array
    }
    int d,m;
    cin>>d>>m;
    int count=0;
    for(int i=m-1;i<n;i++){
        int s=sum[i]-sum[i-m+1]+a[i-m+1]; // We take sums of contiguous segments of m elements using the prefix array.
        if(s==d){ 
            // Check if the sum is equal to the target.
            count++;
        }
    }
    cout<<count<<endl;  
}