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




void square(){
    //write code here
    tl(n);tl(m);vll v(m);cin>>v;char gd[n][m];vll mark(n);vector<vll>up(n);
    
    fl(i,n){
    	fl(j,m){
    		cin>>gd[i][j];
    	}
    }
    
    
    fl(i,n){
    	ll c=0;
    	fl(j,m){
    		if(gd[i][j]=='o'){
    			c+=(v[j]);
    		}else{
    			up[i].pb(v[j]);
    		}
    	}
    	mark[i]=c+i+1;
    	sort(vr(up[i]));
    	reverse(vr(up[i]));
    }
    
    ll a=*max_element(vr(mark));
    
    fl(i,n){
    	ll c=a-mark[i];
    	ll ct=0;
    	ll s=0;
    	fl(j,m){
    		if(s>=c){
    			cout<<ct<<endl;
    			break;
    		}else{
    			s+=up[i][j];
    			ct++;
    		}
    	}
    	// for(auto it:up[i]){
    		// cout<<it<<" ";
    	// }
    	// cout<<endl;
    	
    }
    // cout<<mark<<endl;
    
     
 }

int main()
{
    JAI SHREE RAM
    int n = 1;
    // cin>>n;
    while(n--){
       square();
    } 

}

