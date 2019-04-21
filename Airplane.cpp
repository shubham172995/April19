#include<bits/stdc++.h>
int main(){
	int n, temp, m;
	scanf("%d %d", &n, &m);
	temp=n;
	std::vector<int> a(m);
	for(int i=0;i<m;i++)
		scanf("%d", &a[i]);
	std::sort(a.begin(), a.end());
	long int min, max;
	min=max=0;
	for(int i=0;i<m;i++)
		for(int j=a[i];j>0;j--)
			if(temp){
				--temp;
				min+=j;
			}
	temp=n;
	for(int i=0; i<n; i++){
		int k=std::max_element(a.begin(), a.end())-a.begin();
		max+=a[k];
		//std::cout<<k<<" "<<a[k]<<std::endl;
		--a[k];
	}
	std::cout<<max<<" "<<min<<std::endl;
	return 0;
}