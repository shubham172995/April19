#include<bits/stdc++.h>
int main(){
	long int n;
	std::cin>>n;
	std::string s;
	std::cin>>s;
	std::vector<int> o(n), c(n);
	bool flag=false;
	if(n%2!=0){
		printf(":(\n");
		return 0;
	}
	else{
		if(s[0]=='('){
			o[0]=1;
			c[0]=0;
		}
		else if(s[0]==')'){
			flag=true;
			c[0]=1;
			o[0]=0;
		}
		else{
			o[0]=c[0]=0;
		}
		for(int i=1;i<n;i++){
			if(s[i]=='('){
				o[i]=o[i-1]+1;
				c[i]=c[i-1];
			}
			else if(s[i]==')'){
				c[i]=c[i-1]+1;
				o[i]=o[i-1];
			}
			else{
				o[i]=o[i-1];
				c[i]=c[i-1];
			}
		}
	}
	std::string ans="";
	ans+=s[0];
	if(!flag)
	for(int i=1;i<n;i++){
		if(o[i]<o[i-1]){
			o[i]=o[i-1];
		}
		if(c[i]<c[i-1]){
			c[i]=c[i-1];
			//std::cout<<i+1<<" "<<c[i]<<std::endl;
		}
		if(s[i]!='?'){
			ans+=s[i];
			if(s[i]=='('&&o[i]==o[i-1])
				o[i]+=1;
			else if(s[i]==')'&&c[i]==c[i-1])
				c[i]+=1;
			continue;
		}
		else{
			//std::cout<<o[i]<<" "<<c[i]<<std::endl;
			if(o[i]==c[i]&&i!=n-1){
				flag=true;
				break;
			}
			else if(o[i]<c[i]){
				flag=true;
				break;
			}
			else if((o[i]-c[i]==1)&&i==n-1){
				ans+=")";
				++c[i];
			}
			else if(o[i]-c[i]==1&&o[i]==n/2&&i!=n-1){
				flag=true;
				break;
			}
			else if((o[i]-c[i]>1)&&o[i]<=n/2){
				ans+=")";
				++c[i];
				//std::cout<<ans<<std::endl;
				//std::cout<<"Hey\n"<<o[i]<<" "<<c[i]<<std::endl;
			}
			else if((o[i]-c[i]==1)&&o[i]<n/2){
				ans+="(";
				++o[i];
			}
		}
		//std::cout<<ans<<std::endl;
		if(s[i]!=ans[i]&&s[i]!='?'){
			flag=true;
			break;
		}
	}
	//std::cout<<o[n-1]<<" "<<c[n-1]<<std::endl;
	std::vector<int> op(n), cl(n);
	if(ans[0]=='(')
		op[0]=1;
	else cl[0]=1;
	for(int i=1;i<n;i++){
		if(ans[i]=='('){
				op[i]=op[i-1]+1;
				cl[i]=cl[i-1];
			}
		else if(ans[i]==')'){
			cl[i]=cl[i-1]+1;
			op[i]=op[i-1];
		}
	}
		for(int i=0;i<n;i++){
			if(s[i]=='?')
				continue;
			else if(s[i]!=ans[i]){
				flag=true;
				break;
			}
		}
		//std::cout<<op[n-1]<<" "<<cl[n-1]<<std::endl;
	if(flag||op[n-1]!=n/2||cl[n-1]!=n/2)
		printf(":(\n");
	else
		std::cout<<ans<<std::endl;
	return 0;
}