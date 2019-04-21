#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		long int b;
		scanf("%d %ld", &n, &b);
		std::vector<long int> w(n), h(n), p(n);
		for(int i=0;i<n;i++)
			scanf("%ld %ld %ld", &w[i], &h[i], &p[i]);
		long long int max=0;
		for(int i=0;i<n;i++){
			long long int temp=w[i]*h[i];
			if(temp>=max&&p[i]<=b)
				max=temp;
		}
		if(max==0)
			printf("no tablet\n");
		else printf("%lld\n", max);
	}
	return 0;
}