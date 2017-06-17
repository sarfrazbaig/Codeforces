#include <bits/stdc++.h>
using namespace std;

long long int summer(vector<long long int>a)
{
	long long int sum = 0;
	for(int i=0;i<a.size();i++)
	{
		sum += a[i];
	}

	return sum;
}



int main()
{
	long long int n;
	cin>>n;
	long long previous_sum = 0;
	
	int tests = 3;
	int round = 1;
	vector<long long int>ans;
	while(tests--)
	{
		vector<long long int>a;
		long long current_sum = 0;
		int numbers = n--;
		for(int i=0;i<numbers;i++)
		{
			long long int temp;
			cin>>temp;
			a.push_back(temp);
		}

		current_sum = summer(a);
		// cout<<"Current sum"<<current_sum<<endl;
		// cout<<"Previous sum"<<previous_sum<<endl; 	
		if(round!=1)
		{
			ans.push_back(previous_sum-current_sum);
			previous_sum = current_sum;
			current_sum = 0;
		}
		else
		{
			
			previous_sum = current_sum;
			current_sum = 0;
		}
		round++;

	}

	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
	

}