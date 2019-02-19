#include <bits/stdc++.h>

using namespace std;

int main (){
    int testcase;
    cin >> testcase;
    for(int i=0;i<testcase;i++){
        int n,a5,a3,temp,flag=1;
        cin >> n;
        temp=n;
        while(temp>=0){
            if(temp%3==0){
                flag=0;
                a5=temp;
                a3=n-a5;
                break;
            }
            else{temp=temp-5;}
        }

        if(flag==0){cout<<string(a5,'5')<<string(a3,'3')<<endl;}
        else{cout<<-1<<endl;}

    }
}
