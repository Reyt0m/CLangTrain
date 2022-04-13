#include <stdio.h>
#define SIZE 10

int linear_search(int target, int *a, int n);

int main(void)
{
    int    a[SIZE] = { 12, 12432, 43, 395, 27, 1, 324, 532, 65, 90 };
    int    target;
    int    idx;
    int    i;

    printf("入力された値を、%d個のデータの中から線形探索法で探します。\n", SIZE);
    printf("\n探す値はなんですか?");
    scanf("%d", &target);

    idx = linear_search(target, a, SIZE);
    if (idx == -1)    //エラー処理
   		printf("\n見つかりませんでした\n");
    else
   		printf("\n値%dは添え字番号%d番目で見つかりました\n", target, idx);
    printf("\n 配列data=[");
    for (i = 0; i < SIZE; i++)    //配列の出力
    {
   		printf("%d,", a[i]);
    }
    printf("]\n");

    return (0);
}

int    linear_search(int target, int a[], int n)
{
    // int	*p;
	int	i;
    int idx = -1;    //targetがいなかった場合にエラー処理

	i = 0;
	while (i < n)
	{
		if(a[i] == target)
		{
			idx = i;
			return (idx);
		}
		i++;
	}
	/*
    for (p = a; p < a + n; p++) //aのアドレスを参照する
    {
   	 if (*p == target)
   	 {
   		 idx = p - a; // 配列のアドレスを指定
   		 return idx;    //見つかったタイミングで値を返す
   	 }
    }

	*/

    /*
    // while 文を使う場合の処理
    p = a;
    while (p++ < a + n)
    {
   	 if (*p == target)
   	 {
   		 idx = p - a; // 配列のアドレスを指定
   		 return idx;
   	 }
    }
    */
    return idx;

}
