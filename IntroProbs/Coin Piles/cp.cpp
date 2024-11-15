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
// #include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define double long double
// #define INT_MAX LLONG_MAX
// #define INT_MIN LLONG_MIN
#define endl '\n'
#define vin(a)                         \
	for (int i = 0; i < (a).size(); i++) \
		cin >> a[i];
#define vout(a)                      \
	for (int i = 0; i < a.size(); i++) \
		cout << a[i] << ' ';             \
	cout << endl;
#define vpin(a)                        \
	for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].first;                 \
	for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].second;
#define vpinr(a)                       \
	for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].second;                \
	for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].first;
#define vpin2(a)                       \
	for (int i = 0; i < (a).size(); i++) \
		cin >> a[i].first >> a[i].second;
#define vpout(a)                                      \
	for (int i = 0; i < a.size(); i++)                  \
		cout << a[i].first << ' ' << a[i].second << endl; \
	cout << endl;
#define cout(x) cout << setprecision(20) << x << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).begin(), (x).end(), greater<int>()
#define r(x)           \
	{                    \
		cout << x << endl; \
		return;            \
	}
#define loop(a, b, i) for (int i = a; i < b; i++)
#define rloop(a, b, i) for (int i = a; i >= b; i--)
#define pyes cout << "YES" << endl;
#define pno cout << "NO" << endl;
#define line cout << endl;
#define vr(v, k, n) vector<k> v(n);
#define vpr(v, k1, k2, n) vector<pair<k1, k2>> v(n);
const int M = 1e9 + 7;
const int N = 1e5 + 10;
void precalc()
{
}
 
void resolve()
{
	int a,b;
  cin>>a>>b;
  if((a+b)%3==0){
    if(a>=b&&a<=2*b){
      pyes;
    }
    else if(b>=a&&b<=2*a){
      pyes;
    }
    else{
      pno;
    } 
  }
  else{
    pno;
  }
}
int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	precalc();
	int t;
	cin >> t;
	while (t--)
		resolve();
	return 0;
}