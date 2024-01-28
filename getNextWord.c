/* 受け取った文字列から次のスペースまでの文字列を変数に戻す */
int getNextWord(char *result, char *str) {
    /* 受け取ったポインタが NULL なら終了 */
    if (str == NULL) return -1;

    /* スペースを飛ばす */
    int i = 0, j = 0;
    while (str[i] == ' ') i++;

    /* スペース or 終端文字 まで文字列を result に代入 */
    while (str[i] != ' ' && str[i] != '\0') result[j++] = str[i++];

    /* 終端文字を代入 */
    result[j] = '\0';

    return 0;
}
