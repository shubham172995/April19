#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> c(n);
	for(int i=0;i<n;i++){
		scanf("%d", &c[i]);
	}
	int in=0;
	for(int i=0;i<n;i++){
		if(c[i]!=c[n-1]){
			in=i;
			break;
		}
	}
	int max=n-1-in;
	for(int i=n-1;i>=0;i--){
		if(c[i]!=c[0]){
			in=i;
			break;
		}
	}
	max=max>in?max:in;
	std::cout<<max<<std::endl;
	return 0;
}