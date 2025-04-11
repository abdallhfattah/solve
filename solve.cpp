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
const ll N = 1e6 + 7, MOD = 1e9 + 7, LOG = 20;
// bool ok = false;
// 1e7 -> 1s


void solve()
{
    int n, t;
    cin >> n >> t;
    vll a(n), b(n);
    read(a), read(b);
    int l = 0, r = 0;
    int score = 0, mx = 0, curr_time = 0, start , end = 0;
    for (;r < n;)
    {
        if (curr_time + a[r] <= t){
            curr_time += a[r];
            score += b[r];

            if (score > mx){
                mx = score;
                start = l;
                end = r;
            }
            r++;
        }
        else {
            curr_time -= a[l];
            score -= b[l++];
        }
    }
    cout << ++start << " " << ++end << el;
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
