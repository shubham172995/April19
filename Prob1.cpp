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
		long int temp=0;
		if(t<s[i]){
			temp=s[i]-t;
			if(temp<min){
				ans=i+1;
				min=temp;
			}
		}
		else if(t==s[i]){
			ans=i+1;
			break;
		}
		else if(t>s[i]){
			temp=(t-s[i])/d[i];
			temp*=d[i];
			temp+=s[i];
			if(temp<t){
				temp+=d[i];
				temp=temp-t;
				if(temp<min){
					min=temp;
					ans=i+1;
				}
			}
			else if(temp>=t){
				temp=temp-t;
				if(temp<min){
					min=temp;
					ans=i+1;
				}
			}
		}
	}
	std::cout<<ans<<std::endl;
	return 0;
}