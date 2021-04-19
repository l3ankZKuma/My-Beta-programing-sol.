#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int len=s.size();
	string level[5]={""};
	for(int i=0;i<len;++i){
		if(i>0 && (i+1)%3==0){
			level[0]+="..*.";
			level[4]+="..*.";
		}
		else{
			level[0]+="..#.";
			level[4]+="..#.";
		}
		if(i==len-1){
			level[0]+=".";
			level[4]+=".";
			break;
		}
	}
	for(int i=0;i<len;++i){
		if(i>0 && (i+1)%3==0){
			level[1]+=".*.*";
			level[3]+=".*.*";
		}
		else{
			level[1]+=".#.#";
			level[3]+=".#.#";
		}
		if(i==len-1){
			level[1]+=".";
			level[3]+=".";
		}
	}
	for(int i=0;i<len;++i){
		if(i>0 && (i+1)%3==0){
			level[2]+="*."+s.substr(i,1)+".*";
		}
		else if(i>0 && i%3==0){
			level[2]+="."+s.substr(i,1)+".";
		}
		else{
			level[2]+="#."+s.substr(i,1)+".";
		}
		if(i==len-1 && (i+1)%3!=0){
			level[2]+="#";
		}
	}
	cout<<level[0]<<endl;
	cout<<level[1]<<endl;
	cout<<level[2]<<endl;
	cout<<level[3]<<endl;
	cout<<level[4]<<endl;

}