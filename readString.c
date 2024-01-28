#include <stdio.h>
#include <string.h>

int readString(char *str) {
    /* 標準入力から読み取り, strに代入 */
    fgets(str, sizeof(str), stdin);

    /* 改行を削除 */
    str[strcspn(str, "\n")] = '\0';

    /* 文字数を取得 */
    int length = strlen(str);

    /* 文字数を返す */
    return length;
}
