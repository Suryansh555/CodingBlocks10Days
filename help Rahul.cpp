#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int n ;
	cin >> n ;
	vector<long long int> ans(n);
	for(int i = 0 ; i < n ; i++){
		cin >> ans[i];
	}
	long long int search ;
	cin >> search ;
	int low = 0 ;
	int high = n-1;
	while(low <= high){
		int mid = (low + high)/2;
		if(ans[mid] == search){
			cout << mid ;
			return 0;
		}
		if(ans[mid] > ans[0]){
			// left side 
			if(ans[mid] > search && ans[0] <= search){
				high = mid - 1;
			}
			else if(ans[mid] > search && ans[0] > search) {
				low = mid + 1 ;
			}
			else{
				low = mid + 1 ;
			}
		}
		if(ans[mid] < ans[0]){
			// right side 
			if(ans[mid] > search){
				high = mid - 1;
			}
			else if (ans[mid] < search && ans[0] > search){
				low = mid + 1 ;
			}
			else{
				high = mid - 1 ;
			}
		}
	}
	cout << -1 ;
	return 0 ;
}