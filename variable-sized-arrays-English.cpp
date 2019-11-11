#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

int noOfRows;
int noOfQuestions;
 cin >> noOfRows >> noOfQuestions;
 // Create a vector of vector with size 
    // equal to no of row. 
vector< vector<int> > vec(noOfRows);

for(int i = 0; i < noOfRows; i++){

 int sizeOfRow;
 cin>>sizeOfRow;

for(int j=0; j < sizeOfRow; j++){
int input;
cin>>input;
vec[i].push_back(input);
}
}
// give answers for question that we entered
for(int i =0; i < noOfQuestions; i++){
int rowNo;
int indexNo;
cin >> rowNo >> indexNo;
cout << vec[rowNo][indexNo] <<endl;
}
return 0;

}



