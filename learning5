/* 標準ライブラリ ヘッダファイルのインクルード */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* プロトタイプ宣言 */
void showNum(int);

int main(void) {
    /* 標準入力から文字列を受け取り, 出力回数を max に代入 */
    char string[10500] = "\0"; /* 文字列配列を初期化する場合は, '' ではなく "" */
    if (fgets(string, sizeof(string), stdin) == NULL) return 1;
    string[strcspn(string, "\n")] = '\0';
    int max = atoi(string);

    /* 標準入力から値を半角スペース区切りの値を受け取り, 改行を処理 */
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = '\0';

    /* i が max より小さければループ */
    int i, j = 0;
    for (i = 0; i < max; i++) {

        /* showNum関数に渡す値を入れる num 配列, インデックス番号用の index を宣言, 初期化 */
        char num[128] = "\0";
        int index = 0;

        /* string[j] が　' ' でも '\0' でもなければループ */
        while (string[j] != ' ' && string[j] != '\0') {

            /* num[index] に string[j] を代入し, index, j をインクリメント */
            num[index++] = string[j++];
        }
        /* インクリメントを忘れると前回の空白文字をスキップできず, while に入れなくなり, 正しく動作しない */
        j++;

        /* num を char から　int に 変換して showNum に渡す */
        showNum(atoi(num));
    }

    return 0;
}

void showNum(int num) {
    for (int i = 1; i <= num; i++) {
        printf("%d", i);
        if (i >= num) {
            printf("\n");
        } else {
            printf(" ");
        }
    }

    return;
}
