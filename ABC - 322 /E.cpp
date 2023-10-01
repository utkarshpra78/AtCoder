#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define utkarsh 1
#define JAI ios_base::sync_with_stdio(false);
#define SHREE cin.tie(NULL);
#define RAM cout.tie(NULL);
using ll= long long;
using sg=string;
using lld= long double;
using ull= unsigned long long;
const lld pi= 3.141592653589793238;
const ll mod=1e9+7;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
#define tl(n)  ll n;cin>>n;
#define ts(n)  sg n;cin>>n;
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define flp(i,a,b) for(int i = a; i <= b; i++)
 
//Debug
#ifdef utkarsh
#define debug(x) cerr << #x<<" "; cerr<<x<<" "; cerr << endl;
#else
#define debug(x);
#endif
 
// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }
 
// Utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();fl(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;fl(i,n)s+=v[i];return s;}

ll f(ll ind,vll temp,map<pair<ll,vll>,ll>&dp,ll k,ll p,ll n,vector<vll> &v){
	if(ind>=n){
		flp(i,1,k){
			if(temp[i]<p){
				return 1e12;
			}
		}
		return 0;
	}
	if(dp.find({ind,temp})!=dp.end()) return dp[{ind,temp}];
	ll a=0+f(ind+1,temp,dp,k,p,n,v);
	
	vll temp2=temp;
	
	flp(i,1,k){
		temp2[i]=min(temp2[i]+v[ind][i],p);
	}
	
	ll b= v[ind][0] + f(ind+1,temp2,dp,k,p,n,v);
	
	return dp[{ind,temp}]=min(a,b);
}


void square(){
    //write code here
    tl(n);tl(k);tl(p);
    vector<vll> v(n,(vll(k+1)));
    fl(i,n){
    	fl(j,k+1){
    		cin>>v[i][j];
    	}
    }
    
    map<pair<ll,vll>,ll>dp;
    vll temp(k+1,0);
    
    ll ans=f(0,temp,dp,k,p,n,v);
    
    if(ans>=1e12){
    	cout<<-1<<endl;
    }else{
    	cout<<ans<<endl;
    }
    
    
    
     
 }

int main()
{
    JAI SHREE RAM
    int n = 1;
    // cin>>n
    while(n--){
       square();
    } 

}


