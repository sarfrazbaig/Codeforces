#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	map<string,int> a;
	vector<string> ans;
	string name;
	while(n--)
	{
		cin>>name;
		if(a[name]==0)
		{
			ans.push_back("OK");
			a[name]++;
		}
		else
		{
			string temp,num;
			stringstream p;
			temp = name;
			p<<a[name];
			num = p.str();
			temp += num;
			ans.push_back(temp);
			a[name]++;
		}
	}	

	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}


}