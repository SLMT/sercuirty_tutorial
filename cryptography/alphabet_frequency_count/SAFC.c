#include <stdio.h>

#define NUM_ALPHAS 26

int main(int argc, char *argv[]) {
	/* 宣告變數 */
	FILE *in;
	char ch;
	int times[NUM_ALPHAS], i, sum;

	/* 檢查輸入的參數數量是否正確 */
	if (argc != 2) {
		printf("Usage: SAFC [Input File]\n", argc);
		return 0;
	}

	/* 初始化陣列 */
	for (i = 0; i < NUM_ALPHAS; i++)
		times[i] = 0;

	/* 開啟檔案 */
	in = fopen(argv[1], "r");

	/* 逐字讀取並記錄次數 */
	while ((ch = fgetc(in)) != EOF) {
		if (ch >= 'a' && ch <= 'z')
			times[ch - 'a']++;
		else if (ch >= 'A' && ch <= 'Z')
			times[ch - 'A']++;
	}

	/* 關閉檔案 */
	fclose(in);

	/* 計算總和 */
	sum = 0;
	for (i = 0; i < NUM_ALPHAS; i++)
		sum += times[i];

	/* 顯示次數 */
	printf("[alphabet] => [times] ([proportion])\n");
	for (i = 0; i < NUM_ALPHAS; i++)
		printf("%c => %d (%.2f %%)\n", 'A' + i, times[i], (float) times[i] / (float) sum * 100);

	return 0;
}
