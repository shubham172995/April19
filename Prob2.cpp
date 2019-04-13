#include<bits/stdc++.h>
int main(){
	int n, m, h;
	scanf("%d %d %d", &n, &m, &h);
	std::vector<int> a(m), b(n);
	for(int i=0;i<m;i++)
		scanf("%d", &a[i]);
	for(int i=0;i<n;i++)
		scanf("%d", &b[i]);
	int t[n][m], ans[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			ans[i][j]=0;
			scanf("%d", &t[i][j]);
			if(t[i][j]==0)
				ans[i][j]=0;
			else{
				int min=a[j];
				if(min>b[i])
					min=b[i];
				ans[i][j]=min;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			std::cout<<ans[i][j]<<" ";
		}
		std::cout<<std::endl;
	}
	return 0;
}