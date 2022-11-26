#include<bits/stdc++.h>
using namespace std;

main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		int cnt=0;
		for(int j=0;j<i;j++){
			if(arr[i]>=arr[j]){
				cnt++;
			}
		}
		cout<<cnt<<" ";
	}
}
