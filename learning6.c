/* ライブラリインクルード */
#include <stdio.h>
#include <string.h>

int main(void) {
    /* ループ中に使用する変数、縦・横区切りを宣言 */
    int iMax = 9, jMax = 9;
    int i, j;
    char verticalLine[] = " | ";
    char horizontalLine = '=';

    /* 1 ~ 9 の行を出力 */
    for (i = 1; i <= iMax; i++) {

        /* i * j を出力 */
        char result[1000] = "\0";
        for (j = 1; j <= jMax; j++) {

            /* tempに結果を代入し、resultに追加する */
            char temp[1000] = "\0";
            sprintf(temp, "%2d", i * j);
            strcat(result, temp);

            /* j より　jMax が大きかったら列区切りを　 result に代入, でなければ resultを主t力 */
            if (j < jMax) {
                strcat(result, verticalLine);
            } else {
                printf("%s\n", result);
            }
        }

        /* l が lMax 以上かつ i より iMax が大きかったら行区切りを length 回数出力 */
        int lMax = strlen(result);
        for (int l = 1; l <= lMax && i < iMax; l++) {
            if (l < lMax) {
                printf("%c", horizontalLine);
            } else {
                printf("%c\n", horizontalLine);
            }
        }
    }
}
