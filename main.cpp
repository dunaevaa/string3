#include<iostream>
#include<string>
using namespace std;
int main(int argc, char* argv[]) {
    string str1 = argv [1];
    char symbol = argv [2][0];
    char symbol2 = argv [3][0];
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == symbol)
        str1[i] = symbol2;
    }
     cout << str1 << endl;
}
