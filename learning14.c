#include <stdio.h>

int main(void) {
    // ポインタの配列で各行を表現
    int row1[] = {1};
    int row2[] = {2, 3};
    int row3[] = {4, 5, 6};
    int *array[] = {row1, row2, row3};

    // 各行の要素数
    int lengths[] = {sizeof(row1) / sizeof(row1[0]),
                     sizeof(row2) / sizeof(row2[0]),
                     sizeof(row3) / sizeof(row3[0])};

    // 各行の要素数を出力
    size_t num_rows = sizeof(array) / sizeof(array[0]);
    for (size_t i = 0; i < num_rows; i++) {
        printf("%d\n", lengths[i]);
    }

    return 0;
}
