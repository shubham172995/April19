#include<bits/stdc++.h>

int calculate(long long int l, long long int r, std::vector<long long int> a, int i, char ch){
	if(a[i]>l&&a[i]>r)
		return 0;
	if(ch=='l'){
		if(a[i-1]>a[i])
			return std::max(calculate(l, l, a, i+1, 'r'), calculate(l-a[i], r, a, i+1, 'l'));
		else
			return std::max(calculate(l+a[i-1]-a[i], r-a[i], a, 'r'), calculate(l-a[i], r, a, 'l'));
	}
	else if(ch=='r'){
		
	}
	else if(a[i]>l&&a[i]<=r)
		return 1+calculate(l, r-a[i], a, i+1);
	else if(a[i]<=l&&a[i]>r)
		return 1+calculate(l-a[i], r, a, i+1);
	else return (1+std::max(calculate(l-a[i], r, a, i+1), calculate(l, r-a[i], a, i+1)));
}

int main(){
	int n;
	long long int h, l, r;
	std::cin>>n>>h;
	l=r=h;
	std::vector<long long int> a(n);
	for(int i=0;i<n;i++)
		std::cin>>a[i];
	int res=calculate(l-a[0], r, a, 1, 'l');
	std::cout<<res<<std::endl;
	return 0;
}