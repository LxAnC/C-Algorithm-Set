#include <bits/stdc++.h>
using namespace std;
#define N 210

template <class T>
inline T read(T& a){
    T x = 0, s = 1; 
    char c = getchar(); 
    while(!isdigit(c)){ if(c == '-') s = -1; c = getchar(); }
    while(isdigit(c)){ x = x * 10 + (c ^ '0'); c = getchar(); }
    return a = x * s; 
}

int n, m; 
int T; 
 
double a[200][200], x[N]; 
const double eps = 1e-10; 
inline int sgn(double x){
    return (x > eps) - (x < -eps); 
}



void gauss(int x, int y){ 
	// cout << x << " " << y << endl; 
    if(x >= n - 1 || y >= m - 1){
        return ; 
    }
    bool flag = 0; 
    for(int i = x; i < n; i++){
        if(abs(a[i][y]) > eps) flag =1; 
    } 
    if(!flag) gauss(x, y + 1); 
    else{
        if(abs(a[x][y]) <= eps){
            for(int j = x + 1; j < n; j++){
                if(abs(a[j][y]) > eps){
                    for(int k = y; k < m; k++){
                        swap(a[j][k], a[x][k]); 
                    }
                    break; 
                }
            }
        }
        for(int i = x + 1; i < n; i++){
            double k = a[i][y] / a[x][y]; 
            for(int j = y; j < m; j++){
                a[i][j] -= k * a[x][j]; 
            }
        }
        gauss(x + 1, y + 1); 
    }
    return ; 
}

int main(){
//	freopen("hh.txt", "r", stdin); 
    read(T); 
    while(T--){
        int n1; 
        read(n1); 
        set <string> s; 
        map <string, int> g;
        int cnt = 0; 
        memset(a, 0, sizeof(a)); 
        for(int i = 1; i <= n1; i++){
            string t; cin >> t;
            
            for(int j = 0; j < t.length(); ){
                string tmp = ""; 
                while(j < t.length() && isalpha(t[j])){
                    tmp.push_back(t[j]); 
                    j++;    
                }
                int x = 0; 
                while(j < t.length() && isdigit(t[j])){
                    x = x * 10 + (t[j] - '0'); 
                    j++; 
                }
                s.insert(tmp); 
                if(!g.count(tmp)) g[tmp] = cnt++; 
                a[g[tmp]][i-1] = x; 
            }
        }
        n = cnt, m = n1; 
        gauss(0, 0); 
        
        int sum = 0; 
        for(int i = 0; i < n; i++){
            bool flag = 0; 
            for(int j = 0; j < m; j++){
                if(abs(a[i][j]) >= eps) flag = 1; 
            }
            sum += flag; 
        }
        if(sum >= n1) cout << "N" << endl; 
        else cout << "Y" << endl; 

    }

    return 0; 
}