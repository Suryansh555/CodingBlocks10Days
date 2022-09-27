#include<iostream>
using namespace std;
int main() {

	int t,sum=0,n;

	// int finalArr[1000005]={0};
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		long long int sum=0;
			long long int arr[n];
		long long int finalArr[n]={0};
		finalArr[0]=1;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum=sum+arr[i];
			sum=sum%n;
			sum=(sum+n)%n;
			finalArr[sum]++;
		}

		long long int ans=0;
		for(int i=0;i<n;i++)
		{
				ans=ans+(((finalArr[i])*(finalArr[i]-1))/2);

		}
		cout<<ans<<"\n";
	}
	return 0;
}