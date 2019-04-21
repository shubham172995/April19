#include<bits/stdc++.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	std::vector<int> f(m);
	for(int i=0;i<m;i++)
		scanf("%d", &f[i]);
	std::sort(f.begin(), f.end());
	int min=INT_MAX;
	for(int i=0;i<=m-n;i++){
		int temp=f[i+n-1]-f[i];
		min=min<temp?min:temp;
	}
	std::cout<<min<<std::endl;
	return 0;
}