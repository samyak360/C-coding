#include <bits/stdc++.h>
#include <cmath>
#include <vector>
#include <string>
#include <climits>
using namespace std;

struct Data{
    int a;
    int b;
    Data(){}
    Data(int x,int y){a=x;
    	b=y;
    }
};

int main(){
    int n,m,count,max=0,min=INT_MAX,dest;
    string ans;
    cin >> n >> m;
    vector <Data> A;
    vector <int> D(1,0);
    int C[n][m];
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		cin >> C[i][j];
    		if(i==0 && j==0)continue;
    
    		if(C[i][j]==1){
    			A.push_back(Data(i,j));
    		}
    		
		}
    }

    int length = A.size();
    int B[length];

    for (int i = 0; i < length; ++i)
    {	
    	count=0;
    	for (int j = 0; j < length; ++j)
    	{
    		if(abs((A[i].a)-(A[j].a))<2 && abs((A[i].b)-(A[j].b))<2){
    			count++;
    		}
    	}
    	B[i]=count-1;
    }

    for (int i = 0; i < length; ++i)
    {
    	if(B[i]>max) max=B[i];
    }

    if(max==0) ans="no eligible girl found";
    else {
    	for (int i = 0; i < length; ++i)
    	{
    		if(B[i]==max){
    			if(A[i].a == A[i].b){dest=sqrt((A[i].a*A[i].a)+(A[i].b*A[i].b));}
				else dest=A[i].a+A[i].b;

				D.push_back(dest);
    		}
    	}
    	int len = D.size();
    	for (int i = 1; i < len; ++i)
    	{
    		if(D[i]==min) {
    			ans="polygame not allowed";
    			break;
    		}
    		if(D[i]<min) min=D[i];
    		ans="dist->"+to_string(min)+" : qual->"+to_string(max);
    	}
    }
    cout << ans;
    
    }