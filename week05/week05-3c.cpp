///week05-3c.cpp
///part3
//cpe
 #include <iostream>
 #include <string>
 #include <sstream>
 #include <algorithm>
 using namespace std;
 int main()
 {
     string line;/// patr 1:input
     while (getline(cin, line)){
     ///Ū�J�@�� �@¾Ū Ū��ctrl-z�~����
        stringstream ss (line);
        string word;
        ss >> word;
        reverse( word.begin(), word.end() );
        cout << word;
        while( ss>> word){
            reverse( word.begin(), word.end() );
            cout << " " << word;
        }
        cout << endl; ///���H�K�L�X��
     }
 }
