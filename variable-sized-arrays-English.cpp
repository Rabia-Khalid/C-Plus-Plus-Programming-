#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int noofrow,noofq;
        int sizz,input;
        int row,index;
        std::vector<int> vc1;
cout<<"Enter no of rows that you want for rows : " ;
cin >> noofrow;
cout<<"Enter no of question that you want to ask : ";
cin >>noofq;
//======================================================
for(int i = 0; i < noofrow ; i++){
        cout<< "How many Numbers you want to enter : ";
        cin >> sizz;
        cout << "Input Data : " ;
        for (int i = 0; i < sizz; i++) {//for taking input form the user
            cin >> input;
            vc1.push_back(input);
        }
        
        cout << "print data of vector : " ;
        for (int i = 0; i < sizz; i++) {
            cout << vc1[i] << " " ;
        }
}
        cout<<"\n";
        for(int i = 0 ; i< noofq; i++){
        cout<< "Enter question ";
        cin >> row >> index;
        cout << vc1[index] <<endl;
        }
      }  

}
        
        
        
        
