#include<stdio.h>
#include<Windows.h>
#include<string.h>
//����һ���ַ��������ַ����е�ĳһλ�ã������һ���㷨��
//������iλ�����ڵ���ಿ���ƶ����ұߣ����Ҳಿ���ƶ�����ߡ�
//�����ַ���A�����ĳ���n�Լ��ض�λ��p���뷵����ת��Ľ����
//����������
//"ABCDE FGH", 8, 4
//���أ�"FGHABCDE"
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