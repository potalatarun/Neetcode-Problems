#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m;
	cin>>m;
	while(m--){
		int t;
		cin>>t;
		std::vector<std::vector<int>> v;
		for(int i=0;i<t;i++){
			vector<int>temp;
			int mp;
			cin>>mp;
			temp.push_back(mp);
			cin>>mp;
			temp.push_back(mp);
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		int start=-1,end=-1;
		int merge = true;
		for(int i=0;i<v.size();i++){
			if(start==-1 ){
				start = v[i][0];
				end = v[i][1];
			}
			else{
				if(start<v[i][0] and v[i][0] <= end){
					merge = true;
					end = max(end,v[i][1]);
				}
				else{
					cout<<start<<" "<<end<<endl;
					start = v[i][0];
					end = v[i][1];
				}
				
			}
			if(i==v.size()-1){
					cout<<start<<" "<<end<<endl;
				}
		}
	}
	return 0;
}