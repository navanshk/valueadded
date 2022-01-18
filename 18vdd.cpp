#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n;
    cin>>n;
    int ar[100000],i;
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    int j;
    int max_sum=0;
    int sum=0;
        for(j=0;j<n;j++){
            sum += ar[j];
            if(sum>max_sum){
            max_sum = sum;
        }
    if(sum<0){
        sum = 0;
    }
        }
        
    
    cout<<max_sum;
    return 0;
}
