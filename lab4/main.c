#include <stdio.h>
void replace_all(char*str, char oldChar, char newChar){
    int len = sizeof(str)/sizeof(char)-1;
    for(int i = 0; i<len; i++){
        if(str[i]== oldChar){
            str[i]=newChar;
        }
    }
}
int main(){
    char oldChar = 'a';
    char newChar = 'A';
    char str[100];
    replace_all(str, oldChar, newChar);
    printf("Enter any string:");
    scanf("%s", str);
    printf("\nString before replacing: \n%s", str);
    replace_all(str, oldChar, newChar);
    printf("\n\nString after replacing %c with %c: \n%s", oldChar, newChar, str);
    return 0;
}
