//week05-3a.cpp
///cpe 這次的第二題 nva 483 word scranalbe
 #include <iostream>
 #include <string>
 #include <sstream>
 using namespace std;
 int main()
 {
     string line;/// patr 1:input
     while (getline(cin, line)){
     ///讀入一行 一職讀 讀到ctrl-z才結束

        ///part 2:output
        cout << line << endl; ///先隨便印出來
     }
 }
