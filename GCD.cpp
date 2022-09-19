#include<bits/stdc++.h>
using namespace std;

long long find_gcd(long long a, long long b)
{
if(b==0)
return a;

return find_gcd(b, a%b);
}

int main() {

long long n1, n2;

cin>>n1>>n2;

long long ans = find_gcd(n1,n2);

cout<<ans;

return 0;
}