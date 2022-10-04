#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); cerr.tie(0)
typedef long long ll;
typedef unsigned long long ul;
typedef long double ld;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<bool, ll> pbl;
typedef pair<ul, int> pui;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<int> vi;
typedef vector<int>::iterator ip;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef vector<pll> vpll;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pbl> vpbl;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<pdd> vpdd;
typedef vector<string> vs;
typedef vector<pui> vpui;
typedef vector<ul> vu;
typedef vector<string> vs;
#define mp make_pair
#define gl getline
#define pb push_back
#define eb emplace_back
#define ob pop_back
#define sz(s) ((int)(s.size()))
#define UM uno\nrdered_map
#define US uno\nrdered_set
#define forn(i, n) for (ll i = 1; i <= ll(n); i++)
#define fora(i, n) for(auto i:n)
#define Len 100005
const int N = 1000007;
bool prime[N + 1]; 
int check_str(ll s)
{
    // check palindrome number
    ll n = s;
    ll rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (rev == s) return 1;
    return 0;
}
void solve() 
{
    int tt; cin >> tt;
    while(tt--)
    {
        ll n; cin >> n;
        ll a,b;
        ll abs_a,abs_b;
        for(ll i=n; i<=1e15+3; i++)
        {
            if(check_str(i))
            {
                a = i;
                break;
            }
        }
        for(ll i=n; i>=1; i--)
        {
            if(check_str(i))
            {
                b = i;
                break;
            }
        }
        abs_a = abs(a-n);
        abs_b = abs(b-n);
        if(abs_a < abs_b) cout << a << endl;
        else if(abs_a > abs_b) cout << b << endl;
        else if(a!=b) cout << min(a,b) << " " << max(a,b) << endl;
        else cout << a << endl;

    }
}
int main() 
{
    FAST_IO;
    // SieveOfEratosthenes();
    // freopen("time.in", "r", stdin); freopen("time.out", "w", stdout);
    // int tt; cin >> tt; for (ll i = 1; i <= tt; i++) {solve();}
    solve();
}