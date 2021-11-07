#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string course[n];
	double start[n],end[n],vis[n],first=1000,last=0;
	int biao=-1;
	fill(vis,vis+n,0);
	for(int i=0;i<n;i++){
		cin>>course[i]>>start[i]>>end[i];
		if(end[i]<first){
			first=end[i];
			biao=i;		
		}
		if(end[i]>last)
		last=end[i];		
	}
	vis[biao]=1;
	double now_time=first,cnt=1;
	while(now_time<last){
		double now_first=1000; 
		int biao_2=-1;
		for(int i=0;i<n;i++){
			if(vis[i]==0&&start[i]<now_first){
				now_first=start[i];
				biao_2=i;			
			}
		}
			vis[biao_2]=1;
			if(now_first>=now_time){
				cnt++;
				now_time=end[biao_2];
			}
		}
	cout<<cnt<<endl;
	
} 
