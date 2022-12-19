#include "bits/stdc++.h"
#include <set>
#include <map>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long int ll;
#define all(v) (v).begin(), (v).end()
#define pb push_back

#define rep(i, a, n)             \
   for (int i = a; i < = n; ++i) \
      ;
// #define for(i,a,b) for(int i=(a);i<(b);++i)
// #define rep(i,a,b) for(int =i;i<=(b);++i)
#define trav(a, x) for (auto &a : (x))

#define loop(i, k, n) for (int i = k; i < n; ++i)
#define loopr(i, k, n) for (int i = k; i > n; --i)
#define loopeq(i, k, n) for (int i = k; i <= n; ++i)
#define loopeqr(i, k, n) for (int i = k; i >= n; --i)
#define ll long long int
#define ff first
#define ss second
#define pll pair<ll, ll>
#define pii pair<int, int>
#define pb push_back
#define vl vector<ll>
#define vi vector<int>
#define mp make_pair
#define M 1e9 + 7
#define time cerr << "\nTime elapsed: " << 1000 * clock()
#define inf 1e18
void __print(int x)
{
   cerr << x;
}
void __print(long x) { cerr << x; }
void __print(long long x) { cerr << x; }
void __print(unsigned x) { cerr << x; }
void __print(unsigned long x) { cerr << x; }
void __print(unsigned long long x) { cerr << x; }
void __print(float x) { cerr << x; }
void __print(double x) { cerr << x; }
void __print(long double x) { cerr << x; }
void __print(char x) { cerr << '\'' << x << '\''; }
void __print(const char *x) { cerr << '\"' << x << '\"'; }
void __print(const string &x) { cerr << '\"' << x << '\"'; }
void __print(bool x) { cerr << (x ? "true" : "false"); }
template <typename T, typename V>
void __print(const pair<T, V> &x)
{
   cerr << '{';
   __print(x.first);
   cerr << ',';
   __print(x.second);
   cerr << '}';
}
template <typename T>
void __print(const T &x)
{
   int f = 0;
   cerr << '{';
   for (auto &i : x)
      cerr << (f++ ? "," : ""), __print(i);
   cerr << "}";
}
void _print() { cerr << "]\n"; }
template <typename T, typename... V>
void _print(T t, V... v)
{
   __print(t);
   if (sizeof...(v))
      cerr << ", ";
   _print(v...);
}
#define debug(x...)              \
   cerr << "[" << #x << "] = ["; \
   _print(x)
int mod = 1e9 + 7;
void local()
{
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}
void constructArray(int k, int n) {
  // create an array to store the result
  int a[k];

  // add the first element to the array
  a[0] = 1;

  // add the maximum possible value at each step
  for (int i = 1; i < k; i++) {
    a[i] = n - i + 1;
  }

  // print the resulting array
  for (int i = 0; i < k; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  // read the number of test cases
  local();
  long long tc;
  cin >> tc;

  // process each test case
  while (tc--) {
    long long k, n;
    cin>>k>>n;
    vector<long long> ans(n+1, 0);
    long long t=0;
    long long k1=k;
    long long marked=0;
    for(long long i=1; i<=n && k1--; i+=t)
    {
        ans[i]++;
        marked++;
        t++;
  
    }
//    long long marked = accumulate(ans.begin(), ans.end(), 0);
    long long left = k-marked;
//    cout<<left<<":\n";
    if(left>0)
    {
        for(long long i=n; i>=1 && left; i--)
        {
            if(ans[i]==0)ans[i]++, left--;
        }
    }

    for(long long i=0; i<=n; i++)
    {
        if(ans[i]>0)cout<<i<<" ";
    }
    cout<<endl;
}

  return 0;
}