#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;

struct vect {
	std::vector<int> v;
};

int main (){
	int m,n,r,minn,maximum,loop;
	cin >> m >> n >> r;
	int A[m][n];
	for(int i =0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> A[i][j];
		}	
	}

	minn = min(m,n);
	maximum = max(m,n);
	loop = minn/2;

	struct vect vec[loop];

	int x,y;
	for(int i=0 ;i<loop;i++){

		x=i;
		y=i;

		for(;y<n-i;y++){
			vec[i].v.push_back(A[x][y]);
		}

		y=y-1;
		x=x+1;

		for (;x<m-i;x++)
		{
			vec[i].v.push_back(A[x][y]);
		}

		x=x-1;
		y=y-1;

		for (;y>i;y--)
		{
			vec[i].v.push_back(A[x][y]);
		}

		for (;x>i;x--)
		{
			vec[i].v.push_back(A[x][y]);
		}
		
	}
	for(int i=0;i<loop;i++){
		for (int j=0;j<r;++j)
		{
			int k;
			k=*vec[i].v.begin();
			vec[i].v.erase(vec[i].v.begin());
			vec[i].v.push_back(k);
		}
	}


	for(int i=0 ;i<loop;i++){

		x=i;
		y=i;

		for(;y<n-i;y++){
			A[x][y]=*vec[i].v.begin();
			vec[i].v.erase(vec[i].v.begin());
		}

		y=y-1;
		x=x+1;

		for (;x<m-i;x++)
		{
			A[x][y]=*vec[i].v.begin();
			vec[i].v.erase(vec[i].v.begin());
		}

		x=x-1;
		y=y-1;

		for (;y>i;y--)
		{
			A[x][y]=*vec[i].v.begin();
			vec[i].v.erase(vec[i].v.begin());
		}

		for (;x>i;x--)
		{
			A[x][y]=*vec[i].v.begin();
			vec[i].v.erase(vec[i].v.begin());
		}
		
	}

	for(int i =0;i<m;i++){
		for(int j=0;j<n;j++){
			cout << A[i][j] << " ";
		}	
		cout << endl;
	}
}
