/* ライブラリをインクルード */
#include <math.h>

/* 第一引数を第二引数の指定桁数で四捨五入 */
int roundDoubleToPrecision(double *value, int digit) {
    int numOfDigit = pow(10, digit);
    *value = round(*value * numOfDigit) / numOfDigit;

    return 0;
}
