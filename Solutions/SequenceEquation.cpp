#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int p[n],q[n],r[n];
	for(int i=0;i<n;++i){
		cin>>p[i];
	}
	for(int i=1;i<=n;++i){
		for(int j=0;j<n;++j){
			if(p[j]==i){
				q[i-1]=j+1;
				break;
			}
		}
	 }
	 // for(int i=0;i<n;++i)
	 // 	cout<<q[i];
	for(int a=0;a<n;++a){
		for(int b=0;b<n;++b){
			if(q[a]==p[b]){
				r[a]=b+1;
				break;
			}
		}
	}
	for(int i=0;i<n;++i)
		cout<<r[i]<<"\n";

}