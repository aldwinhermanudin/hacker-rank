#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int input;
    cin >> input;
    long long sum = 0;
    while(cin >> input){
        sum += input;
    }
    cout << sum;
    return 0;
}
