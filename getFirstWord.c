/* ライブラリをインクルード */
#include <stdio.h>
#include <string.h>

/* プロトタイプ宣言 */
int getFirstWord(char *, char *);

int main(void) {
    /* getFirstWord関数に値を渡す変数, 受け取る変数を宣言 */
    char str[] = "abc de fgh";
    char result[128] = "\0";
    getFirstWord(result, &str[1]);
    printf("%s\n", result);
}

/* 受け取った文字列から次のスペースまでの文字列を変数に戻す */
int getFirstWord(char *result, char *str) {
    /* result を初期化し, 受け取ったポインタが NULL なら終了 */
    result[0] = '\0';
    if (str == NULL) return 1;

    /* スペースを飛ばす */
    int i = 0;
    while (str[i] == ' ') i++;

    /* スペース or 終端文字 まで文字列を result に代入 */
    int j = 0;
    while (str[i] != ' ' && str[i] != '\0') result[j++] = str[i++];

    /* 終端文字を代入 */
    result[j] = '\0';

    return 0;
}
