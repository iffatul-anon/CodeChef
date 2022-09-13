#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll Mod = 1000000007;
ll  anon4(ll b, ll n, ll MOD){
    ll s = 1;
    while (n){
        if (n % 2 == 1)
            s = s * b % MOD;
            b = b * b % MOD;
            n /= 2;
    }
    return s;
}
ll anon4(ll a, ll b){
    if (b >= 30)
        return anon4(a, anon4(2, b, Mod - 1) + Mod - 1, Mod);
        return anon4(a, (1 << b), Mod);
        return (ll)(" ");
}

ll anon3(ll n, ll p, ll k){
    return (anon4(anon4(n, k), p, Mod) - anon4(n, p - 1, Mod) + Mod) % Mod * n % Mod * anon4(n - 1, Mod - 2, Mod) % Mod;
}
void anon2(){
    ll n, k, answer = 1;
    cin >> n >> k;
    for (ll i = 2; i * i <= n;++i){
        ll s = 0;
        while(n%i==0){
            s++;
            n /= i;
        }
        if(s!=0){
            answer = answer * anon3(i, s, k) % Mod;
        }
    }
    if(n!=1){
        answer = answer * anon3(n, 1, k) % Mod;
    }
    cout << answer << '\n';
}
 int main(){
    int anon;
    cin >> anon;
    while(anon--){
        anon2();
    }
    return 0;
}