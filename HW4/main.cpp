#include <iostream>
#include <string>

using namespace std;

class Tictacto{
    public:
    bool real = false;
    char num [10] = "123456789";
    int check [9] ={0, 0, 0, 0, 0, 0, 0, 0, 0};
    int check2=1;
    int turn= 0;
    string winner;
    char a;
    char b;
    int x;
    int c;
    int f;
    void map(){
        cout << "-- Tic Tac To -- CSIE@CGU\n";
        cout << "Player 1 (X)  -  Player 2 (O)\n\n";
        cout << "     ■     ■     \n";
        cout << "  " << num[0] << "  ■  " << num[1] << "  ■  " << num[2] <<endl;
        cout << "     ■     ■     \n";
        cout << "■■■■■■■■■■■■■■■■■\n";
        cout << "     ■     ■     \n";
        cout << "  " << num[3] << "  ■  " << num[4] << "  ■  " << num[5] <<endl;
        cout << "     ■     ■     \n";
        cout << "■■■■■■■■■■■■■■■■■\n";
        cout << "     ■     ■     \n";
        cout << "  " << num[6] << "  ■  " << num[7] << "  ■  " << num[8] <<endl;
        cout << "     ■     ■     \n\n";
    }
    
    void decide(){
        if(num[0]==num[1] && num[0]==num[2]){
            real= true;
            x=1;
            if(num[0]=='X'){
                winner = "player 1";
            }else{
                winner = "player 2";
            }
        }else if(num[3]==num[4] && num[3]==num[5]){
            real= true;
            x=1;
            if(num[3]=='X'){
                winner = "player 1";
            }else{
                winner = "player 2";
            }
        }else if(num[6]==num[7] && num[6]==num[8]){
            real= true;
            x=1;
            if(num[6]=='X'){
                winner = "player 1";
            }else{
                winner = "player 2";
            }
        }else if(num[0]==num[4] && num[0]==num[8]){
            real= true;
            x=1;
            if(num[0]=='X'){
                winner = "player 1";
            }else{
                winner = "player 2";
            }
        }else if(num[2]==num[4] && num[2]==num[6]){
            real= true;
            x=1;
            if(num[2]=='X'){
                winner = "player 1";
            }else{
                winner = "player 2";
            }
        }else if(num[0]==num[3] && num[0]==num[6]){
            real= true;
            x=1;
            if(num[0]=='X'){
                winner = "player 1";
            }else{
                winner = "player 2";
            }
        }else if(num[1]==num[4] && num[1]==num[7]){
            real= true;
            x=1;
            if(num[1]=='X'){
                winner = "player 1";
            }else{
                winner = "player 2";
            }
        }else if(num[2]==num[5] && num[2]==num[8]){
            real= true;
            x=1;
            if(num[2]=='X'){
                winner = "player 1";
            }else{
                winner = "player 2";
            }
        }else{
            real = false;
            x=0;
        }
    }
    
    void run(){
        while(real == false){
            map();
            if(turn==0){
                cout << "player 1, 請輸入『1～9』的數字：";
                cin >> a;
                c=a - 49;
                if(num[c]==a){
                    num[c] = 'X';
                    f=f+1;
                    turn=1;
                }else if(num[c]=='O' || num[c] == 'X'){
                    cout << "請重新輸入：";
                    cin >> a;
                    c=a- 49;
                }
            }else if(turn==1){
                cout << "player 2, 請輸入『1～9』的數字：";
                cin >> b;
                c=b - 49;
                if(num[c]==b){
                    num[c] = 'O';
                    f=f+1;
                    turn=0;
                }else if(num[c]=='O' || num[c] == 'X'){
                    cout << "請重新輸入：";
                    cin >> a;
                    c=a- 49;
                }
            }
            decide();
            if(f==9){
                real = true;
            }
            
        }
        if(x==0){
            map();
            cout << "==> game draw";
        }else{
            map();
            cout << "==> " << winner << " win";
        }
    }
};
int main(){
    Tictacto game;
    game.run();
    return 0;
}
