#include <bits/stdc++.h>
using namespace std;
#define N 1000010
//大佬的做法

template <class T>
inline T read(T& a){
    T x = 0, s = 1; 
    char c = getchar(); 
    while(!isdigit(c)){ if(c == '-') s = -1; c = getchar(); }
    while(isdigit(c)){ x = x * 10 + (c ^ '0'); c = getchar(); }
    return a = x * s; 
}

int n, m; 
map <int, int> g1; 
map <int, int> g2; 

int main(){
    read(n), read(m); 
    for(int i = 1; i <= n; i++){
        int l; read(l); 
        bitset <N> vis(0); 
        for(int j = 1; j <= l; j++){
            int x; read(x); 
            if(!vis[x]) g1[x]++, vis[x] = 1; 
            g2[x]++; 
        }
    }
    for(int i = 1; i <= m; i++){
        cout << g1[i] << " " << g2[i] << endl; 
    }
    return 0; 
}