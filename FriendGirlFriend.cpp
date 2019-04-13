#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long int n;
		scanf("%ld", &n);
		string s;
		char ch;
		vector<long int> a(n, -1);
		cin>>s>>ch;
		long int i, j;j=0;
		for(i=0;i<n;i++){
			if(s[i]==ch){
				a[j]=i;
				++j;
			}
		}
		long long int ans=0;
		for(i=0;i<n;i++){
			if(a[i]==-1)
				break;
			if(i!=0){
				ans+=a[i]-a[i-1];
				ans+=n-a[i]-1;
				ans+=(a[i]-a[i-1]-1)*(n-a[i]-1);
				
			}
			else{
				ans+=a[i]+1;
				ans+=n-a[i]-1;
				ans+=a[i]*(n-a[i]-1);
			}
		}
		cout<<ans<<std::endl;
	}
	return 0;
}