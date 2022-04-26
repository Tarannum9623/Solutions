#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin>>n>>k;
	int c[n];
	for(int i=0;i<n;++i){
		cin>>c[i];
	}
	int e=100;
	int a=0;
	do{
		//int i=0;
		//int a;
		a=(a+k)%n;
		e-=1;
		if(c[a]==1){
			e-=2;
		}
	}while(a!=0);
	cout<<e;
}