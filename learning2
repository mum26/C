#include <stdio.h>
#include <string.h>

int main(void){
    char str[1010] = "\0";
    while(fgets(str, sizeof(str), stdin) != NULL) {
        str[strcspn(str, "\n")] = 0;
        int length = strlen(str);
        int whiteSpace = 0;
        for(int i = 0; i < length; i++) {
            if(str[i] == ' ') {
                whiteSpace++;
                if(whiteSpace % 3 == 0) {
                    str[i] = '\n';
                }
            }
        }
        printf("%s", str);
    }
    return 0;
}
