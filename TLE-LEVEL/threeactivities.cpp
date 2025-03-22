#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>a(n),b(n),c(n),ans(8);
		
		for(int i=0;i<n;i++){
		    cin>>a[i];
		}
		for(int i=0;i<n;i++){
		    cin>>b[i];
		}
		for(int i=0;i<n;i++){
		    cin>>c[i];
		}
		
		for(int i=0;i<n;i++)
		{
			for(int j=7;j>0;j--)
			{
				if(j&1){
				    ans[j]=max(ans[j],ans[j-1]+a[i]);
				}
				if(j&2){
				    ans[j]=max(ans[j],ans[j-2]+b[i]);
				}
				if(j&4){
				    ans[j]=max(ans[j],ans[j-4]+c[i]);
				}
			}
		}
		
		cout<<ans[7]<<endl;
	}
	return 0;
}