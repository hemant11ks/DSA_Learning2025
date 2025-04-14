#include <iostream>
#include <string>
#include <set>
#include <unordered_map>
using namespace std;

int findSubString(string& str) {
    set<char>s;
    for(char c:str)
        s.insert(c);
    
    int i = 0;
    int j = 0;
    int ans = str.size();
    int n = s.size();
    
    unordered_map<char, int>m;
    
    while(i<str.size()){
        m[str[i]]++;
        if(m.size()==n){
            while(m[str[j]]>1){
                m[str[j]]--;
                j++;
            }
            ans = min(ans, i-j+1);
        }
        i++;
    }
    return ans;
}

int main() {
    string str = "aabcbcdbca";
    cout << "Smallest window length: " << findSubString(str) << endl;
    return 0;
}