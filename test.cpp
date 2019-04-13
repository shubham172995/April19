#include<bits/stdc++.h>
int main(){
	int n;
	long int t;
	std::cin>>n>>t;
	std::vector<long int> s(n), d(n);
	for(int i=0;i<n;i++)
		std::cin>>s[i]>>d[i];
	long int min=INT_MAX;
	int ans=0;
	for(int i=0;i<n;i++){
		long int temp;
		if(s[i]==t){
			ans=i+1;
			break;
		}
		else{
			if(t<s[i]){
				temp=s[i]-t;
				if(temp<min){
					min=temp;
					ans=i+1;
				}
			}
			else if(t>s[i]){
				temp=((t-s[i])/d[i]);
				temp*=d[i];
				if(temp)
					temp+=(d[i]+s[i])%d[i];
				else
					temp=d[i]+s[i];
				if(temp<min){
					min=temp;
					ans=i+1;
				}
			}
		}
		//std::cout<<temp<<std::endl;
	}
	std::cout<<ans<<std::endl;
	return 0;
}