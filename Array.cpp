#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size;
cin >> size;
int array[size];
for(int i=0; i<size; i++){
    cin >> array[i];

}
for(int i=size-1;i >= 0;i--){
    cout <<array[i]<<" ";
}

    return 0;
}

// ================================
Sample Input

4
1 4 3 2

Sample Output

2 3 4 1
