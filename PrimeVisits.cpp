#include<bits/stdc++.h>
using namespace std; bool isPrime[10000000];

void prime(int a, int b) { int count = 0; for (int i = a; i <= b; i++) { if (isPrime[i]) { count++; } } cout << count << endl; return; }

void gen_primes(){ for(unsigned i=3; i<=10000000; i+=2){ isPrime[i]=true; } isPrime[0]=isPrime[1]=false; isPrime[2]=true; for(unsigned i=2;i*i<=10000000;i++){ if(isPrime[i]){ for(unsigned j=i;j*i<=10000000;j++) isPrime[i*j]=false; } } }

int main() { int t; cin>>t; gen_primes();

while (t--) { int a, b; cin>>a>>b; prime(a, b); }

return 0; }