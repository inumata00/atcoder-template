// Source: https://github.com/inumata00/atcoder-template/blob/main/template.cpp
#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <atcoder/modint>
#include <atcoder/string>
#include <atcoder/segtree>
#include <atcoder/lazysegtree>
#include <atcoder/fenwicktree>

using namespace std;
using namespace atcoder;

const long long INF = 4e18;
using mint = modint998244353;
const long long MOD = 998244353;

using ll   = long long;
using pll  = pair<ll, ll>;
using vll  = vector<ll>;
using vs   = vector<string>;
using vc   = vector<char>;
using vvll = vector<vll>;
using vvs  = vector<vs>;
using vpll = vector<pll>;
using vvvll = vector<vvll>;
using vvvs  = vector<vvs>;
using vvpll = vector<vpll>;
using vbool = vector<bool>;
using vvbool = vector<vbool>;
using vvvvll = vector<vvvll>;
using vmint = vector<mint>;
using vvmint = vector<vmint>;
using tll = tuple<ll, ll, ll>;

#define rep(i, n) for (ll i = 0, __n = (n); i < __n; i++)
#define rep2(i, l, r) for (ll i = (l), __r = (r); i < __r; i++)
#define rrep(i, n) for (ll i = (n); i-- > 0; )
#define rrep2(i, l, r) for (ll i = (r); i-- > (l); )
#define pt(x) cout << (x) << "\n"
#define pt1(x) cout << (x) << " "
#define pt2(x, y) cout << (x) << " " << (y) << "\n"
#define all(x) (x).begin(), (x).end()

vector<mint> fact, invfact;

void init_comb(int n) {
    fact.assign(n + 1, 1);
    invfact.assign(n + 1, 1);

    for (int i = 1; i <= n; i++) {
        fact[i] = fact[i - 1] * i;
    }

    invfact[n] = fact[n].inv();

    for (int i = n; i >= 1; i--) {
        invfact[i - 1] = invfact[i] * i;
    }
}

mint nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] * invfact[n - r];
}

ll culculate_digits(ll x){
    ll ret = 0;
    while(x > 0){
        x /= 10;
        ret++;
    }
    return ret;
}

ll pow(ll n, ll digits){
    ll ret = 1;
    rep(i, digits) ret *= n;
    return ret;
}

//=========================================

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}
