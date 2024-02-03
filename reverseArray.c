#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y);
void reverse(int *array, size_t size);

int main(void) {
    int N;
    scanf("%d", &N);

    int array[N];
    for (size_t i = 0; i < N; i++) {
        scanf(" %d", &array[i]);
    }

    reverse(array, N);

    for (size_t i = 0; i < N; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}

/* 受け取った変数の値を入れ替える */
void swap(int *x, int *y) {
    /* xの値を tempに代入 */
    int temp = *x;

    /* yの値を xに代入 */
    *x = *y;

    /* temp(受け取ったx)の値を yに代入 */
    *y = temp;
}

void reverse(int *array, size_t size) {
    /* 要素数 / 2 回ループ */
    for (size_t i = 0; i < size / 2; i++) {
        /* 現在地と末尾を入れ替える */
        swap(&array[i], &array[size - i - 1]);
    }
}
