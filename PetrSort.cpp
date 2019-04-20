#include<bits/stdc++.h>

/*void petr(std::vector<int>& a, int n){
	if(n==1)return;
	petr(a, n-1);
	int temp=a[n];
	a[n]=a[n-1];
	a[n-1]=temp;
}*/

int main(){
	int n;
	scanf("%d", &n);
	std::vector<int> a(n+1);
	a[1]=n;
	for(int i=2;i<=n;i++)
		a[i]=i-1;
	//petr(a, n);
	for(int i=1;i<=n;i++)
		std::cout<<a[i]<<" ";
	std::cout<<std::endl;
	return 0;
}