#include<bits/stdc++.h> 

using ld = long double;
using ll = long long;
using ull = unsigned long long;


#define all(A) A.begin(), A.end()
#define pb push_back
#define mp make_pair
#define fri(start , end , step)  for(int i = start; i < end ; i = i + step)
#define frj(start , end , step)  for(int j = start; j < end ; j = j + step)
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

#ifdef HOME
    #define debug(x) cerr<<#x<<": "<<x<<endl;
#else
    #define debug(x) ;
#endif 


using namespace std; 


mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());

const int MOD = 1e9 + 7;
const ld e = 1/1e10;
#define int ll

template<typename T>
ostream& operator<< (ostream &other, const vector<T> &v) {
    for (const T &x: v) other << x << ' ';
    other << '\n';
    return other;
}

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

int rand(int l , int r){
    assert(l <= r);
    return rnd() % (r - l + 1) + l;
}

vector<int> gen_arr(int n , int l , int r){
    vector<int> a(n);
    fri(0 , n , 1) a[i] = rand(l , r);
    return a;
}

vector<int> gen_per(int n){
    vector<int> a(n);
    fri(0 , n , 1) a[i] = i + 1;
    shuffle(all(a) , rnd);
    return a;
}




inline void gen_test(){
    
}



signed main(){
    fast;
    int tt;
    tt = 1;

    // cout << tt << endl;
    
    while(tt--){
        gen_test();
    }
    #ifdef HOME
        cerr << "time :" << fixed << setprecision(3) << ((ld) clock() / (double) CLOCKS_PER_SEC) << endl;
    #endif
    return 0;
}



