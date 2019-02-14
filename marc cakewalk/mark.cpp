#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main (){
    int n;
    cin >> n;
    int A[n];
    long int sum=0;
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    sort(A,A+n,greater<int>());
    for(int i =0 ;i<n;i++){
        sum+=A[i]*pow(2,i);
    }

    cout << (sum);
}
