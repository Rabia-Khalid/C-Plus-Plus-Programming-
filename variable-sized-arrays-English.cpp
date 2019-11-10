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
// =======================================

vector<vector<int>> vec; // declare 2D vector

    for (int i=0; i<=3; i++) {
        vector<int> row;  // create a row vector which adds a row to vec
        for (int j=0; j<=4; j++) {
            row.push_back(j*10); // push elements 0,10,20,30,40 to row 
        }
        vec.push_back(row); // add this row to vec
        // Repeat this procedure 4 times to make a 4*5 2D vector
    }

    cout<<"output is "<<vec[2][4]; // output is 40
// ============================================

Declaring a two dimensional vector is similar to declaring an array. You can also use it in same way...

vector<vector<int> > vec;

for(int i = 0; i < 5; i++)
{
    vector<int> row;
    vec.push_back(row);
}

vec[0].push_back(5);
cout << vec[0][0] << endl;

// ================================================================================

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,q;
cin >> n >> q;
vector< vector<int> > a(n);

// input each array
for (int i=0;i<n;i++) {
    int k;
    cin >> k;

    for (int j=0;j<k;j++) {
        int data;
        cin >> data;
        a[i].push_back(data);
    }
}

// do the queries
for (int i=0;i<q;i++) {
    int x,y;
    cin >> x >> y;
    cout << a[x][y] << endl;
}

    return 0;
}
// ================================================

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

vector< vector<int> > a(noofrow);
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
       /* for(int i = 0 ; i< noofq; i++){
            int index;
        cout<< "Enter question ";
        cin >> row >> index;
        cout << vc1[row][index] <<endl;;
        }*/
        for (int i=0;i<noofq;i++) {
    int x,y;
    cin >> x >> y;
    cout << a[x][y] << endl;
}
        

}
        
        
        
        



        
        
        
