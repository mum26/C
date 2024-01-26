/* ライブラリヘッダをインクルード */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* プロトタイプ宣言 */
void showNum(int);

/* メイン */
int main(void) {

    /* 標準入力から値を受け取り, 末尾の改行を削除 */
    char str[16] = "\0";
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    /* str を int に変換し max に代入 */
    int max = atoi(str);

    /* i が max 以下の場合, ループしてshoNum関数を呼び出す */
    for (int i = 1; i <= max; i++) showNum(i);

    return 0;
}

/* 1 ~ num まで半角スペースで出力する */
void showNum(int num) {
    /* i が　num 以下の場合, ループ */
    for (int i = 1; i <= num; i++) {

        /* i を出力 */
        printf("%d", i);

        /* i が　　num 以上なら改行, でなければ半角スペースを出力 */
        if (i >= num) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
}
