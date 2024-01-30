#include <stdio.h>
#include <string.h>

int main(void) {
    int N = 0, Q = 0;
    scanf("%d %d", &N, &Q);

    int i, j;
    /* C99以前では変数調配列には対応していないらしいので注意 */
    char S[N][100], T[Q][100];
    for (i = 0; i < N; i++) {
        /* " %s"　スペースを含めると前の入力の改行文字をスキップするらしい */
        scanf(" %s", &S[i][0]);
    }
    for (j = 0; j < Q; j++) {
        scanf(" %s", &T[j][0]);
    }

    for (i = 0; i < Q; i++) {
        int isFound = 0;
        for (j = 0; j < N; j++) {
            /* strcmp関数は Trueの場合に 0を返すので注意 */
            if (!strcmp(T[i], S[j])) {
                printf("%d\n", j + 1);
                isFound = 1;
                break;
            }
        }

        /* 見つからなかった場合は -1を出力する */
        if (!isFound) printf("-1\n");
    }

    return 0;
}
