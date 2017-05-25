#include <cstdio>
#include <vector>
#include <iostream>


using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = n-k; a_i < n; a_i++){
        cin >> a[a_i];      
    }
    for(int a_i = 0; a_i < n-k; a_i++){
        cin >> a[a_i];      
    }
    for(int i = 0; i < n;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
