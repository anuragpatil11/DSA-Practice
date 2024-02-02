#include <iostream>
using namespace std;

int main() {
//    cout << "Hello, World!" << endl;
    char ch;
    cout<<"Enter ch:\n";
    cin>>ch;

    if (ch>='a' && ch<='z'){
        cout<<ch<<" is lowercase";
    }
    else if (ch>='A' && ch<='Z'){
        cout<<ch<<" is uppercase";
    }
    else if (ch>='0' && ch<='9'){
        cout<<ch<<" is numeric";
    }

    return 0;
}
