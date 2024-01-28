#include <string.h>

/* 受け取った文字列から次のスペースまでの文字列を変数に戻す */
int getNextWord(char *result, char *str) {
    /* 受け取ったポインタが NULL なら終了 */
    if (str == NULL) return -1;

    /* スペース or 終端文字 まで文字列を result に代入 */
    int i = 0, j = 0, length = 0;
    while (str[i] != ' ' && str[i] != '\0') result[j++] = str[i++];

    /* 終端文字を代入 */
    result[j] = '\0';

    /* 文字数を取得 */
    length = strlen(result);
    
    /* 文字数を返す */
    return length;
}
