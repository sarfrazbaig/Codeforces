#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n;
	cin>>n;
	int round = 1;
	int tests = 3;
	map<long long int,long long int>a;
	map<long long int,bool>repeated;
	vector<long long int> ans;
	while(tests--)
	{

		long long int numbers = n--;
		long long int temp;
		for(int i=0;i<numbers;i++)
		{
			cin>>temp;
			
			a[temp]++;
			if(round==1)
			{if(a[temp]>1)
			{
				repeated[temp]=true;	
			}
			else
			{
				repeated[temp]=false;
			}
		}

		}


		// map<long long int,long long int>::iterator it;
		// for(it=a.begin();it!=a.end();it++)
		// {
		// 	cout<<it->first<<" "<<it->second<<endl;
		// }

		if(round!=1)
		{
			long long int previous=-1;
			map<long long int,long long int>::iterator it;
			for(it=a.begin();it!=a.end();++it)
			{
				if(it->second!=round && it->first!=previous && repeated[it->first]==false)
				{
					ans.push_back(it->first);
					previous = it->first;
					break;
				}
				else if(it->second==previous && repeated[it->first]==true)
				{
					ans.push_back(it->first);
					previous = it->first;
				}
			}
		}
		round++;

	}	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
}