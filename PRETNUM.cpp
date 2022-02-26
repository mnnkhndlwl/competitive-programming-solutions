#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define ll long long 
#define f first
#define se second
#define vll vector<ll>
const int N=1e6+10;
const ll mod= 1e9+9;
vector<bool> isPrime(N,true);

void init(){
	isPrime[0]=isPrime[1]=false;

	for(int i=2;i*i<=N;i++){
		if(isPrime[i]){
			for(int j=i*i;j<=N;j+=i){
				isPrime[j]=false;
			}
		}
	}
}

void solve(){
	ll l,r; cin>>l>>r;

	vector<ll> divisors(N,0);

	for(ll i=l;i<=r;i++) divisors[i-l]=0;
	for(ll i=1;i*i<=r;i++){
		ll square= i*i;
		for(ll j=((l-1)/i+1)*i;j<=r;j+=i){
			if(j<square) continue;
			if(square== j) divisors[j-l]+=1;
			else divisors[j-l]+=2;
		}
	}

	ll ans=0;
	for(ll i=0;i<=(r-l+1);i++){
		if(isPrime[divisors[i]]) ans++;
	}
	cout<<ans<<"\n";
	return;
}

int main(){
	#ifndef ONLINE_JUDGE
	 freopen("input.txt","r",stdin);
	 freopen("output.txt","w",stdout);
	#endif
	 init();
	 int t;
	 cin>>t;
	 // t=1;

	 while(t--){
	 	solve();
	 }

	 return 0;
}