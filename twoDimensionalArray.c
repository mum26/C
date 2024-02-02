#include <stdio.h>

int main(void) {
    /* 二次元配列の宣言、初期化 */
    int array[][6] = {{1, 2, 3, 4, 5, 6}, {8, 1, 3, 3, 1, 8}};

    /* 行数の計算 */
    int rows = sizeof(array) / sizeof(array[0]);

    /* 列数の計算 */
    int cols = sizeof(array[0]) / sizeof(array[0][0]);

    /* 要素数の計算 */
    int arrayElements = rows * cols;

    printf("%d\n", arrayElements);

    return 0;
}
