#include <stdio.h>
/* qsort, malloc, free関数を含むライブラリ */
#include <stdlib.h>
#include <string.h>

/* 文字列昇順用比較関数 */
int compareStrings(const void *, const void *);

int main(void) {
    int N, K;
    scanf("%d %d", &N, &K);

    /* char型ポインタ変数 sを [N]要素宣言 */
    char *s[N];
    for (size_t i = 0; i < N; i++) {
        /* s[i]に16バイトのメモリ領域を割り当て */
        s[i] = malloc(16 * sizeof(char));
        scanf(" %s", s[i]);
    }
    /* qsort(ソートする配列へのポインタ, 配列の要素数, 一要素のサイズ, 比較関数へのポインタ) */
    qsort(s, N, sizeof(char *), compareStrings);

    printf("%s\n", s[K - 1]);

    /* メモリの解放 */
    for (size_t i = 0; i < N; i++) {
        free(s[i]);
    }

    return 0;
}

int compareStrings(const void *a, const void *b) {
    
    /* *a == *b なら0, *a > *b なら正, *a < *b なら負の値を返す, */
    return strcmp(*(const char **)a, *(const char **)b);
}
