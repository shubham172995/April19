#include<bits/stdc++.h>
int main(){
	std::string s;
	std::cin>>s;
	int l=s.length();
	std::string ans;
	for(int i=0;i<l;i++){
		if(s[i]=='A'||s[i]=='a'||s[i]=='E'||s[i]=='e'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='U'||s[i]=='u'||s[i]=='Y'||s[i]=='y')
			continue;
		else{
			int k=s[i];
			if(k>=65&&k<=90)
				k+=32;
			char ch=(char)k;
			ans+=ch;
		}
	}
	s=ans;
	ans="";
	for(int i=0;i<s.length();i++){
		ans+=".";
		ans+=s[i];
	}
	std::cout<<ans<<std::endl;
	return 0;
}