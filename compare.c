#include <string.h>

/* int型昇順比較 */
int compareIntsASC(const void *a, const void *b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;

    if (arg1 > arg2) return 1;  // arg1がarg2より大きい場合、正の値を返す
    if (arg1 < arg2) return -1; // arg1がarg2より小さい場合、負の値を返す
    return 0;                  // 両者が等しい場合、0を返す
}

/* int型降順比較 */
int compareIntsDESC(const void *a, const void *b) {
    int arg1 = *(const int *)a;
    int arg2 = *(const int *)b;

    if (arg1 < arg2) return 1;  // arg1がarg2より小さい場合、正の値を返す
    if (arg1 > arg2) return -1; // arg1がarg2より大きい場合、負の値を返す
    return 0;                  // 両者が等しい場合、0を返す
}

/* 文字列昇順比較 */
int compareStringsASC(const void *a, const void *b) {
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;

    return strcmp(str1, str2);
}

/* 文字列降順比較 */
int compareStringsDESC(const void *a, const void *b) {
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;

    return strcmp(str2, str1);
}
