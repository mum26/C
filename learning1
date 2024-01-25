/* standard input output header file */
#include <stdio.h>
/* string header file */
#include <string.h>

int main(void) {
  /* 受け取る値は最大1001文字となるため,大きめに要素を確保. 大きい配列の場合,初期化しないとバグが発生することがある. */
  char string[1050] = "\0";

  /* 標準入力の１行目をstrの要素数分受け取り,strに代入する. */
  fgets(str, sizeof(str), stdin);

  /* strの文字数を代入 */
  int length = strlen(str);

  /* result用のインデックス番号を宣言,初期化. */
  int index = 0;

  /* strにカンマを追加した結果を代入する. 要素数は1001 + '\n' + '\0' + カンマ(1001 / 3) で大きめに1400とした. */
  char result[1400] = "\0";

  /* resutlのインデックス番号(strの文字数を3で割った余り)に最初のカンマをつける. 余りが 0(length == 3^N) だった場合は3.　*/
  int firstComma = length % 3;
  if(firstComma == 0) firstComma = 3;

  /* i より length が大きい間, ループする. */
  for(int i =0; i < length; i++) {

    /* i と　firstComma が等しくなったら result[index] に ',' を代入し, index をインクリメント. firstComma に + 3. */
    if(i == firstComma) {
      resutl[index++] = ',';
      firstComma += 3;
    }

    /* resut[index] に str[i] を代入し, index をインクリメント. */
    result[index++] = str[i];
  }

  /* 結果を出力 */
  printf("%s\n", result);

  return 0; 
}
