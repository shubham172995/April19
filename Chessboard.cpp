#include<bits/stdc++.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	char a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			std::cin>>a[i][j];
	char ans[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='-')
				ans[i][j]=a[i][j];
			else if((i+j)%2)
				ans[i][j]='W';
			else ans[i][j]='B';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			std::cout<<ans[i][j];
		std::cout<<std::endl;
	}
	return 0;
}