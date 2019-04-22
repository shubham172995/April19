#include<bits/stdc++.h>
int main(){
	long long int n;
	std::cin>>n;
	long long int no=0;
	//std::cout<<no<<std::endl;
	std::vector<long long int> b(n);
	for(long int i=0;i<n;i++)
		std::cin>>b[i];
	std::sort(b.begin(), b.end());
	long long int diff, low, high;diff=no=low=high=0;
	low=high=1;
	diff=b[n-1]-b[0];
	for(long int i=1;i<n;i++)
		if(b[i]!=b[i-1])
			break;
		else ++low;
	for(long int i=n-2;i>=0;i--)
		if(b[i]!=b[i+1])
			break;
		else ++high;
	if(high==n)
		no=(n*(n-1))/2;
	else no=high*low;
	std::cout<<diff<<" "<<no<<std::endl;
	return 0;
}