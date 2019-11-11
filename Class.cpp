#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.

We can store details related to a student in a class consisting of his age (int), first_name (string), last_name (string) and standard (int
*/
class Student{

int m_age;
string first_name;
string last_name;
int m_standard;

public:
void set_age(int age){
    m_age= age;
}
int get_age(){
    return m_age;
}
void set_first_name(string fname){
    first_name = fname;
}
string get_first_name(){
    return first_name;
}

void set_last_name(string lname){
    last_name = lname;
}
string get_last_name(){
    return last_name;
}

  void set_standard(int standard){
      m_standard = standard;
  }
int get_standard(){
    return m_standard;
}
 string to_string(){
        return std::to_string(m_age) + "," + first_name + "," + last_name + "," + std::to_string(m_standard);
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
// ===================================

Sample Input

15
john
carmack
10
Sample Output

15
carmack, john
10

15,john,carmack,10

