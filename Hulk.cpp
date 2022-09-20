#include<bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
int ans = 0; //this stores the no of set bits
while(n > 0){
ans += n&1;
n = n>>1;
}

	cout<<ans<<endl;
}
return 0;
}