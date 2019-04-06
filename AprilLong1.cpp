#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	scanf("%lld", &n);
	std::vector<long long int> a(n);
	for(int i=0;i<n;i++)
		scanf("%lld", &a[i]);
	std::sort(a.begin(), a.end());
	if(a[n-2]!=a[n-1]){
		std::cout<<a[n-2]<<std::endl;
	}
	else{
		int i;
		for(i=n-3;i>=0;i--)
			if(a[i]!=a[n-1])
				break;
		if(i==-1){
			std::cout<<"0"<<std::endl;
		}
		else{
			std::cout<<a[i]<<std::endl;
		}
	}
	return 0;
}