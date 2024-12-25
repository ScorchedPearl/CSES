// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <numeric>
#include <algorithm>
#include <forward_list>
#include <limits.h>
#include <iomanip>
#include <initializer_list>
using namespace std;
 

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef long long int lli;
typedef pair<int, int> pii;
#define int long long
// #define INT_MAX LLONG_MAX
// #define INT_MIN LLONG_MIN
#define endl '\n'
#define vin(a)                        \
 for (int i = 0; i < (a).size(); i++) \
		cin >> a[i];
#define vout(a)                     \
 for (int i = 0; i < a.size(); i++) \
		cout << a[i] << ' ';              \
 cout << endl;
#define vpin(a)                       \
 for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].first;                  \
 for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].second;
#define vpinr(a)                      \
 for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].second;                 \
 for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].first;
#define vpin2(a)                      \
 for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].first >> a[i].second;
#define vpout(a)                                    \
 for (int i = 0; i < a.size(); i++)                 \
		cout << a[i].first << ' ' << a[i].second << endl; \
 cout << endl;
#define cout(x) cout << setprecision(20) << x << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).begin(), (x).end(), greater<int>()
#define r(x)         \
 {                   \
		cout << x << endl; \
		return;            \
 }
#define sz(x) ((int)(x).size())

#define loop(a, b, i) for (int i = a; i < b; i++)
#define rloop(a, b, i) for (int i = a; i >= b; i--)
#define pyes cout << "YES" << endl;
#define pno cout << "NO" << endl;
#define line cout << endl;
#define vi vector<ll>
#define vvi vector<vi>
#define pll pair<ll, ll>
#define vp vector<pll>
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second

#ifdef ONLINE_JUDGE
#define debug(x) 
#else
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#endif

void _print(ll t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(vector<pair<T, V> >v) {cerr << "[ "; for (auto p : v) { _print(p); cerr << " ";}cerr << "]";}

const int M = 1e9 + 7;
const int N = 1e5 + 10;

ll power(ll x, ll y){ ll res = 1; while (y > 0){ if (y & 1) res = (ll)(res*x); y = y>>1; x = (ll)(x*x); } return res; }
vp countArr(vi &arr, ll n){ vp v1; loop(0,n,i){ ll cnt = 1; while(i < n-1 && arr[i] == arr[i+1]){ cnt++, i++; } v1.pb(mp(arr[i], cnt)); } if((n > 1 && arr[n-1] != arr[n-2]) || n == 1) v1.pb(mp(arr[n-1], 1)); return v1;}
ll gcd(ll a, ll b){if(b == 0) return a; return gcd(b, a%b);}
ll lcm(ll a, ll b){return a*b/gcd(a,b);}
vi factors(ll n){ vi fac; for (ll i = 1; i * i <= n; i++){ if (n % i == 0){ fac.pb(i); if (i * i != n)fac.pb(n / i); } } return fac; }
ll maxPow2(ll n){n |= n >> 1; n |= n >> 2; n |= n >> 4; n |= n >> 8; n |= n >> 16; return (n + 1);}
vp primeFactors(ll n){ vp v; for (ll j = 2; j <= sqrtl(n); j++){ ll cnt = 0; while(n%j == 0) n /= j, cnt++; if(cnt)v.pb(mp(j,cnt)); } if(n!=1) v.pb(mp(n,1)); return v;}


void precalc()
{
}
void resolve(ll tc){
    int n;
    cin>>n;
    vi v(n);
    vin(v);
    sort(all(v));
    int ans = 1;
    loop(1,n,i){
        if(v[i] != v[i-1]){
            ans++;
        }
    }
    cout<<ans<<endl;
} 
int32_t main()
 {
		ios_base::sync_with_stdio(false);
		cin.tie(0);
		cout.tie(0);
		precalc();
		// int t;
		// cin >> t;
		// while (t--)
			resolve(0);
		return 0;
}