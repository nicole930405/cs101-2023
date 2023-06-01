#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class mystring {
    private:
        string m_str;
    public:
        mystring(string s) {
            m_str = s;
        }
};
class readClass {
    public:
    string line;
    int x = 0;
    void showClass(){
        ifstream in;
        string line;
        in.open("main.cpp");
        while(getline(in, line)) {
            if (line.find("class",0)){
                x++;
            }
        }
        in.close();
        cout << x;
    }
};
int main(){
    readClass rfile;
    rfile.showClass();
    return 0;
}
