C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:

Declaration:

string a = "abc";
Size:

int len = a.size();
Concatenate two strings:

string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
Accessing  element:

string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
P.S.: We will use cin/cout to read/write a string.

Input Format

You are given two strings,  and , separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

Output Format

In the first line print two space-separated integers, representing the length of  and  respectively.
In the second line print the string produced by concatenating  and  ().
In the third line print two strings separated by a space,  and .  and  are the same as  and , respectively, except that their first characters are swapped.

Sample Input

abcd
ef
Sample Output

4 2
abcdef
ebcd af

//======This method will not work for all inputs
#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
string input1; //Should be declared before
string input2;
 
  string str_concat;
  cin >> input1 >> input2;
  int length1 = input1.size();
  int length2 = input2.size();

 cout <<length1 <<" " << length2 <<endl; 
  str_concat = input1+input2;
 cout << str_concat << endl;

string s1 = str_concat.substr(1, str_concat.size() - 3);
//cout<<s1 << endl;
// get value  at 0 index
char index0 = str_concat[0];
//cout<< index0 << endl;
// get value at second last index
char secondlast = str_concat[str_concat.size() -2];
//cout << secondlast << endl;
// get value of last index
char last = str_concat[str_concat.size() -1];
//cout << last << endl;
// swap value at 0 index with value at second last index
char temp;
temp = index0;
index0 = secondlast;
secondlast = temp;
 //string result = secondlast + s1 + index0 + last;
 cout << index0 << s1 <<" " << secondlast<< last;

// ==========This method will work for all inputs
 string a ,b;

cin >> a ;
cin >> b ;

int len = a.size();
int lenth = b.size();

cout << len << " " << lenth << endl;
string c = a + b;

cout << c << endl ;
a[0] = b[0];
b[0] = c[0];

cout << a <<" " << b <<endl;

    return 0;
}

