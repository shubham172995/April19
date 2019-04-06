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
	std::cout<<n-1-in<<std::endl;
	return 0;
}