/* ライブラリインクルード */
#include <stdio.h>
#include <stdlib.h>

/* プロトタイプ宣言 */
int push_back(int *, int *, int);
int pop_back(int *);
int print(int *, int);

int main(void) {
    int N, Q;
    scanf("%d %d", &N, &Q);

    /* Nの数だけAに要素を追加 */
    int A[100];
    int size = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    size = N;

    /* queryNumによって分岐 */
    int queryNum = 0;
    for (int i = 0; i < Q; i++) {
        int value = 0;
        scanf("%d", &queryNum);
        switch (queryNum) {
            case 0: // push_back
                scanf("%d", &value);
                push_back(A, &size, value);
                break;

            case 1: // pop_back
                pop_back(&size);
                break;

            case 2: // print
                print(A, size);
                break;
        }
    }

    return 0;
}

/* 配列, サイズ, 値を受け取り、配列の最後(要素数[size])に値を追加 */
int push_back(int *array, int *size, int value) {
    array[*size] = value;
    *size += 1;

    return 0;
}

/* 有効な要素数を −１ する */
int pop_back(int *size) {
    *size -= 1;

    return 0;
}

/* 配列を有効要素数分、出力 */
int print(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
