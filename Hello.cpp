#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	int l=s.length();
	std::string str="hello";
	int j=0;
	for(int i=0;i<l;i++){
		if(s[i]==str[j]){
			++j;
		}
	}
	if(j==5)
		std::cout<<"YES\n";
	else std::cout<<"NO\n";
	return 0;
}