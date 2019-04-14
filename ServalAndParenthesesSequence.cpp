#include<bits/stdc++.h>
int main(){
	int n ;
	scanf("%d", &n);
	std::string s;
	std::cin>>s;
	if(n%2){
		printf(":(\n");
		return 0;
	}
	int k=n/2;
	for(int i=0;i<n;i++)
		if(s[i]=='(')
			--k;
	if(k<0){
		printf(":(\n");
		return 0;
	}
	for(int i=0;i<n;i++){
		if(s[i]=='?'){
			if(k){
				s[i]='(';
				--k;
			}
			else
				s[i]=')';
		}
	}
	k=0;
	for(int i=0;i<n-1;i++){
		if(s[i]=='(')
			++k;
		else
			--k;
		if(k<=0){
			printf(":(\n");
			return 0;
		}
	}
	std::cout<<s<<std::endl;
	return 0;
}