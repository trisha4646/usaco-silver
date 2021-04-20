/*
 USACO 2018 US Open Contest, Silver
 Problem 2. Lemonade Line
 http://www.usaco.org/index.php?page=viewproblem2&cpid=835
*/

#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
 
bool cmp (int a, int b) {
    if (a > b) {
        return true;
    }
    return false;
}
 
int main() {
    ifstream fin ("lemonade.in");
    ofstream fout ("lemonade.out");
    int n;
    fin >> n;
    vector <int> ids;
    for (int i = 0; i < n; i++) {
        int a;
        fin >> a;
        ids.push_back(a);
    }
    sort(ids.begin(), ids.end(), cmp);
    
    vector<int> endcows;
    
    int i = 0;
    while (true) {
        if (ids[i] >= (i)) {
            endcows.push_back(ids[i]);
        }
        
        if (ids[i] == ids[n-1]) {
            break;
        }
        i++;
    }
    fout << endcows.size();
    return 0;
}
