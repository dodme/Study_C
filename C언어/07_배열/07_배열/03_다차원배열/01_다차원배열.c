#include <stdio.h>

// 陥託据 壕伸
/// - 壕伸聖 推社稽 握澗 壕伸

int main()
{

	// 2託据 壕伸
	/// - [2託据 掩戚][1託据 掩戚] 稽 2託据 壕伸聖 識情拝 呪 赤柔艦陥.
	int my_array[3][4];
	/// [けけけけ]
	/// [けけけけ]
	/// [けけけけ]

	// 戚託据 壕伸 掩戚
	int size2 = sizeof(my_array) / sizeof(my_array[0]);
	printf("戚託据 壕伸 掩戚 : %d \n", size2);

	// 析託据 壕伸 掩戚
	int size1 = sizeof(my_array[0]) / sizeof(my_array[0][0]);
	printf("析託据 壕伸 掩戚 : %d \n", size1);

	// 唖 推社拭 拝雁吃 葵
	int number = 0;

	// 戚託据 壕伸聖 授噺拝 壕伸
	for (int i = 0; i < size2; ++i)
	{
		// 析託据 壕伸聖 授噺拝 壕伸
		for (int j = 0; j < size1; ++j)
		{
			// 唖唖税 推社拭 葵聖 拝雁杯艦陥.
			my_array[i][j] = number++;
			printf("%d ", my_array[i][j]);
		}
		printf("\n");
	}

	return 0;
}