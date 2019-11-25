#include<stdio.h>
#include<Windows.h>
#include<string.h>
//对于一个字符串，和字符串中的某一位置，请设计一个算法，
//将包括i位置在内的左侧部分移动到右边，将右侧部分移动到左边。
//给定字符串A和它的长度n以及特定位置p，请返回旋转后的结果。
//测试样例：
//"ABCDE FGH", 8, 4
//返回："FGHABCDE"
void xuanzhuan(int *strr, int n, int p){
	for (int i = 0; i <= p; i++){
          char start = strr[0];
		for (int j = 0; j < n-1; j++){
			strr[j] = strr[j + 1];
		}
		strr[n - 1] = start;
	}
}
int main(){
	char str[] = { "ABCDEFGH" };
	int n = sizeof(str) / sizeof(str[0]) - 1;
	int p = 4;
    xuanzhuan(str, n, p);
    printf("%s", str);
    system("pause");
    return 0;
	
}