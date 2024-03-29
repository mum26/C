/* ライブラリヘッダをインクルード */
#include <stdio.h>
#include <string.h>

/* プロトタイプ宣言 */
void showNum(int);

int main(void) {

    /* 標準入力から値を受け取り, 末尾の改行を消す. */
    char str[16] = "\0";
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;

    /* 変数 str から値を N, M に代入する. */
    int N, M;
    sscanf(str, "%d %d", &N, &M);

    /* showNum関数を呼び出す */
    showNum(N);
    showNum(M);

    return 0;
}

/* 1 ~ num まで半角スペース区切りで出力する. */
void showNum(int num) {

    /* i が num 以下の場合, ループする. */
    for (int i = 1; i <= num; i++) {

        /* i を出力. */
        printf("%d", i);

        /* i が num 以上なら改行, でなければ半角スペースを出力. */
        if (i >= num) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
}
