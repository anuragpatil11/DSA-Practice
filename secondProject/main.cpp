#include <iostream>
using  namespace std;
int main() {
    int n;
    cout<<"Enter n:\n";
    cin>>n;
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; j++) {
            if (j == i) {
                cout << j;
            } else {
                cout << j << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
Enter n:
4

1 2 3 4
1 2 3
1 2
1
  */