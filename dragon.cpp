#include<bits/stdc++.h>
int main(){
	int n;long long int s;
	std::cin>>s>>n;
	std::vector<std::pair<int, int> > a(n);
	for(int i=0;i<n;i++)
		scanf("%d %d", &a[i].first, &a[i].second);
	std::sort(a.begin(), a.end());
	bool flag=false;
	for(int i=0;i<n;i++){
		if(a[i].first>=s){
			flag=true;
			break;
		}
		else
			s+=a[i].second;
	}
	if(!flag)
		printf("YES\n");
	else printf("NO\n");
	return 0;
}