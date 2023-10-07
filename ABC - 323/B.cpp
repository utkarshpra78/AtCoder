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

static bool cmp(pll p1,pll p2){
	if(p1.ss == p2.ss){
		return p1.ff > p2.ff;
	}
	return p1.ss > p2.ss;
}


void square(){
    //write code here
    tl(n);
    char v[n][n];
    fl(i,n){
    	fl(j,n){
    		cin>>v[i][j];
    	}
    }
    
    vpll vp;
    
    fl(i,n){
    	ll c=0;
    	fl(j,n){
    		if(v[j][i]=='o'){
    			c++;
    		}
    	}
    	vp.pb({i+1,c});
    }
    
    sort(vr(vp),cmp);
    reverse(vr(vp));
    
    for(auto it:vp){
    	cout<<it.ff<<" ";
    }
    cout<<endl;
    
    
     
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

