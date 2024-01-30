/* ライブラリインクルード */
#include <stdio.h>

/* 定数 */
#define WALL '#'
#define ROAD '.'

int main(void) {
    int H, W, r, c;
    scanf("%d %d %d %d", &H, &W, &r, &c);

    char S[H][W];
    for (int i = 0; i < H; i++) {
        /* バッファをクリアしないと、scanf関数が正しく読み込めない */
        getchar();
        for (int j = 0; j < W; j++) {
            char temp = '\0';
            scanf("%c", &S[i][j]);
        }
    }

    if (S[r - 1][c - 1] == WALL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}
