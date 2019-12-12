#include <stdio.h>
//冒泡排序
void BubbleSort(int array[], int size)
{//循环size
	for (int i = 0; i < size - 1; i++)
	{
		int ordered = 1;//优化程序，若发现数组本来就是有序的，则不用进行比较
		//有序：[size-i,size)
		//无序；[0,size-i)
		for (int j = 0; j < size - i - 1; j++)
		{
			if (array[j] >array[j + 1])
			{
				int swap = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swap;
			}
			ordered = 0;
		}
		if (ordered = 1)
		{
			break;
		}
	}
}

//二分查找
int binarySeach(int array[], int size, int value)
{
	int left = 0;          //左边界  left                right  
	int right = size;          //右边界,1,2,3,4,5,6,7,8,9
	while (left<right) // 数组地址      0,1,2,3,4,5,6,7,8
	{
		int mid = (left + right) / 2;
		if (value == array[mid])
		{
			return mid;
		}
		else if (value < array[mid])
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int array[] = { 9, 5, 8, 3, 12, 14, 52, 1,6 };
	int size = sizeof(array) / sizeof(int);
	BubbleSort(array, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
	int index = binarySeach(array, size, 3);
	printf("3在%d\n", index);

	return 0;
}