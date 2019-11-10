
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
     int n1,n2;
    cin >> n1 ;
    cin >> n2 ;
    
    // Write Your Code Here
   for(int i=n1; i<=n2; i++){
      
    if(n1 == 1 || n2 ==1){
        cout<<"one"<<endl;
    }
 else if(n1 == 2 || n2==2){
        cout<<"two"<<endl;
    }
 else if(n1 == 3 || n2==3){
        cout<<"three"<<endl;
    }
     else if(n1 == 4 || n2==4){
        cout<<"four"<<endl;
    }
     else if(n1 == 5 || n2==5){
        cout<<"five"<<endl;
    }
     else if(n1 == 6 || n2==6){
        cout<<"six"<<endl;
    }
     else if(n1 == 7 || n2==7){
        cout<<"seven"<<endl;
    }
     else if(n1 == 8 || n2 ==8){
        cout<<"eight"<<endl;
    }else if(n1 == 9 || n2==9){
        cout<<"nine"<<endl;
    }
    else if(n1 % 2 == 0){
        cout<<"even"<<endl;
    }
else{
    cout<<"odd"<<endl;
}

 n1 = n1 + 1;
   }

    return 0;
}


Sample Input

8
11

Sample Output

eight
nine
even
odd
