#include <algorithm>
#include "bits/stdc++.h"
using namespace std;
//----------------------------------------------------------
// Some typedef's
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
//----------------------------------------------------------
// Constants
const int INF = 1e9;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PIE = 1.00 * acos(-1.00);
const double PI = 3.1415926535897932384626433832795;
//----------------------------------------------------------
//acronyms
#define pb push_back
#define fi first
#define se second
#define fio ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define nline "\n"
//-------------------------------------------------------------
//functions
#define all(a) (a).begin(), (a).end()
#define foi(i, x, y) for(__typeof(x) i = x; i < y; i++)
#define fod(i, x, y) for(__typeof(x) i = x; i >= y; i--)
#define for0(i, n) for(__typeof(n) i = 0; i < n; i++)
#define for1(i, n) for(__typeof(n) = 1; i <= n; i++)
void pr(int x) {cout << x;}
void prl(int x) {cout << x << endl;}

#define pwl(x) cout << x << nline
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
//-------------------------------------------------------------
// Template functions
// modpow(int a, int b, int mod) is used for finding a^b % mod
// can also be used for computing mod inverse

template <typename T>
T modpow(T base, T exp, T modulus){
    base %= modulus;  T result = 1;
    while(exp > 0){
        if(exp & 1) result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
    return result;
}
ll lcm(ll a, ll b) { return (a * (b / __gcd(a, b))); }

bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}

bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
//------------------------------------------------------------------------------
void judge(){
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
}

//debug section
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

template <class T> void _print(T t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.fi); cerr << ","; _print(p.se); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
//------------------------------------------------------------------------------


class  Solution{
    public : 
    void solve(){
	    int n;
        cin>>n;
        pwl(n);
    }
};

int main(){
    fio judge();

    int t = 1;
    cin >> t;
    for0(p,t){
        Solution ob;
        ob.solve();
    }
}