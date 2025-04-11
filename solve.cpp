#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FUSION ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

#define vll vector<ll>
// methods
#define all(item) item.begin(), item.end()
#define rall(item) item.rbegin(), item.rend()

// prints
#define NO "NO\n"
#define YES "YES\n"
#define no cout << NO
#define yes cout << YES
#define yn (ok ? yes : no)
#define el '\n'
#define wrong cout << "-1\n"
#define line cout << "\n"

template <typename T>
void read(vector<T> &args)
{
    for (auto &x : args)
        cin >> x;
}
template <typename T>
void print(T arr)
{
    for (auto &x : arr)
        cout << x << " ";
    // line;
}
const ll N = 2e5 + 7, MOD = 1e9 + 7, LOG = 20;
// bool ok = false;
// 1e7 -> 1s

bool canPlace(int d){

}

void solve()
{
    int n, k;
    cin >> n >> k;
    v.resize(n);
    read(v);
    ll l = 1 , r = 1e8;
    while(l < r){
        ll mid = (l + r) / 2;
        if (canPlace(mid)){
            l = mid;
        }
        else{
            r = mid;
        }
    }
    cout << l << el;
}

int main()
{
    FUSION
    ll TESTS = 1;
    // cin >> TESTS;
    // cout << "====== SOLUTIONS ======\n";
    while (TESTS--)
    {
        solve();
    }
    return 0;
}
