#include<bits/stdc++.h> 
using namespace std; 

using ld = long double;
using ll = long long;
using ull = unsigned long long;
// using pii = pair<int, int>;
using pll = pair<ll, ll>;
using str = string;

#define vc vector
#define sz(a) (int)a.size()
#define all(A) A.begin(), A.end()
#define pb push_back
#define mp make_pair
#define fri(start , end , step)  for(int i = (int)start; i < (int)end ; i = i + step)
#define frj(start , end , step)  for(int j = (int)start; j < (int)end ; j = j + step)
#define ff first
#define ss second
#define forn(i, n) for (int i = 0; i < (int)n; ++i)



template<typename T>
ostream& operator<< (ostream &other, const pair<T , T> &v) {
    other << "{" << v.first << ", " << v.second << "}";
    return other;
}

template<typename T>
ostream& operator<< (ostream &other, const vector<T> &v) {
    for (const T &x: v) other << x << ' ';
    return other;
}

#define o(a) << "[" << #a << ": " << a << "] "

struct debug{
    debug(){}
    ~debug() {
        #ifdef HOME
            cerr << endl;
        #endif
    }
    template<typename T> 
    debug& operator<<(const T &a){
        #ifdef HOME
            cerr << a;
        #endif 
        return *this;
    }
};





mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

const int MOD = 1e9 + 7;
const ld e = 1/1e10;
#define int ll



inline int pw(int a, int b){
    if(!b) return 1;
    if(b & 1) return (1ll * a * pw(a ,  b - 1)) % MOD;
    int x = pw(a , b / 2);
    return (1ll * x * x) % MOD;
}

template<typename T> 
inline bool cmin(T& a , const T& b){
    if(a > b){
        a = b;
        return 1;
    }
    return 0;
}

template<typename T> 
inline bool cmax(T& a , const T& b){
    if(a < b){
        a = b;
        return 1;
    }
    return 0;
}



const int maxn = 1e6;
const ll inf = 1e12;



inline void run();

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout << setprecision(10) << fixed;
    int tt;
    tt = 1;
    // cin >> tt;
    while(tt--){
        run();
    }
    #ifdef HOME
        cerr << "time :" << fixed << setprecision(3) << ((double) clock() / (double) CLOCKS_PER_SEC) << endl;
    #endif
    return 0;
}

inline void run(){

}
