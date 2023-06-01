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
    string l[30];
    int x = 0;
    void showClass(){
        ifstream in;
        in.open("main.cpp");
        while(getline(in, line)) {
            if (line.find("class ",0) == 0){
                l[x] = line;
                l[x].pop_back();
                x++;
            }
        }
        cout << x << " class in main.cpp" << endl;
        for (int i = 0; i < x; i++){
            cout << l[i]<< endl;
        }
        in.close();
    }
};
int main(){
    readClass rfile;
    rfile.showClass();
    return 0;
}//成功版
