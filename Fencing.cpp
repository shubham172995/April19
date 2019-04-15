#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int n, m, k;
		scanf("%lld %lld %lld", &n, &m, &k);
		std::vector<std::pair<long long int, long long int> >a(k+1);
		long long int ans=0;
		for(int i=1;i<=k;i++){
			scanf("%lld %lld", &a[i].first, &a[i].second);
			/*if(a[i].first==1&&a[i].second==1)
				ans+=2;
			else if(a[i].first==1&&a[i].second==m)
				ans+=2;
			else if(a[i].first==n&&a[i].second==1)
				ans+=2;
			else if(a[i].first==n&&a[i].second==m)
				ans+=2;
			else if(a[i].first==1&&a[i].second==1)
				ans+=2;
			if(a[i].first==1||a[i].first==n)
				ans+=1;
			if(a[i].second==1||a[i].second==m)
				ans+=1;*/
		}
		//std::cout<<ans<<std::endl;
		std::sort(a.begin(), a.end());
		/*for(int i=1;i<=k;i++)
			std::cout<<a[i].first<<" "<<a[i].second<<std::endl;*/
		for(int i=1;i<=k;i++){
			if(a[i].first==1){
				bool flag=false;
				if(i<k&&a[i+1].first==1&&a[i+1].second-a[i].second==1){flag=true;}
				if(!flag)++ans;flag=false;
				//std::cout<<ans<<" hey "<<std::endl;
				/*if(i<k&&a[i+1].first-a[i].first==1&&a[i+1].second==a[i].second){flag=true;}
				if(!flag)++ans;flag=false;*/
				//std::cout<<ans<<" hey "<<std::endl;
				if(i>1&&i<=k&&a[i].second-a[i-1].second==1){flag=true;}
				if(!flag)++ans;flag=false;
				//std::cout<<ans<<" hey "<<std::endl;
				int j=i-1;
					while(j&&a[j].first==n)
						--j;
					while(a[j].first==n-1){
						if(a[j].second==a[i].second){
							flag=true;
							break;
						}
						--j;
					}
					if(!flag)++ans;
					j=i+1;
				while(j<=k&&a[j].first==a[i].first)
					++j;
				while(j<=k&&a[j].first==a[i].first+1){
					if(a[j].second==a[i].second){
						flag=true;
						break;
					}++j;
				}
					if(!flag){
						++ans;
					}
				//std::cout<<i<<" "<<ans<<std::endl;
			}
			else if(a[i].first==n){
				bool flag=false;
				++ans;
				/*if(a[i].second==1||a[i].second==m)
					++ans;*/
				//std::cout<<i<<" "<<ans<<std::endl;
				if(i>1&&a[i].second-a[i-1].second==1&&a[i].first==a[i-1].first){flag=true;}
				if(!flag)++ans;flag=false;
				if(i<k&&a[i+1].first==n&&a[i+1].second-a[i].second==1){flag=true;}
				if(!flag)++ans;flag=false;
					int j=i-1;
					while(j&&a[j].first==n)
						--j;
					while(a[j].first==n-1){
						if(a[j].second==a[i].second){
							flag=true;
							break;
						}
						--j;
					}
					if(!flag)++ans;
					//std::cout<<i<<" Hey "<<ans<<std::endl;
			}
			else{
				bool flag=false;
				if(i<k&&a[i+1].first==a[i].first&&a[i+1].second-a[i].second==1){flag=true;}
				if(!flag)++ans;flag=false;
				if(i>1&&a[i].second-a[i-1].second==1&&a[i].first==a[i-1].first){flag=true;}
				if(!flag)++ans;flag=false;
				int j=i-1;
					while(j>=1&&a[j].first==a[i].first)
						--j;
					while(j>=1&&a[j].first==a[i].first-1){
						if(a[j].second==a[i].second){
							flag=true;
							break;
						}--j;
					}
					if(!flag)++ans;flag=false;
				j=i+1;
				while(j<=k&&a[j].first==a[i].first)
					++j;
				while(j<=k&&a[j].first==a[i].first+1){
					if(a[j].second==a[i].second){
						flag=true;
						break;
					}++j;
				}
					if(!flag){
						++ans;
					}
					//std::cout<<i<<" "<<ans<<std::endl;
			}
		}
		std::cout<<ans<<std::endl;
	}
	return 0;
}