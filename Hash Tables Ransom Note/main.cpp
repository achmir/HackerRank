#include <string>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <unordered_map>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    unordered_map<string,int> magWordsMap;
    unordered_map<string,int>::iterator got;
    for (string magWord : magazine)
    {
        got = magWordsMap.find (magWord);
        if (got==magWordsMap.end())
            magWordsMap.insert({magWord,1});
        else
            got->second++;
    }
    for (string ransomWord : ransom)
    {
        got = magWordsMap.find(ransomWord);
        if (got==magWordsMap.end())
            return false;
        else
        {         
            if (got->second < 1)
                return false;
            else
                got->second--;
        }
    }
    return true;    
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
