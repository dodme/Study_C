#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>


#define TRUE 1
#define FALSE 0


int main()
{
	int size = 0;
	int* parray = NULL;

	while (TRUE)
	{
		system("cls");
		// 요소 출력
		if (size != 0)
		{
			for (int i = 0; i < size; ++i)
				printf("%d", parray[i]);
			printf("\n");
		}


		printf("정수를 입력하세요 (종료 : -1) : ");
		int input;
		scanf("%d", &input);

		++size;
		
		// 종료
		if (input == -1)
		{
			// 메모리 할당이 진행된 상태라면
			if (parray != NULL)
			{
				// 메모리 삭제
				free(parray);
				parray = NULL;
			}
			// 반복문 종료
			break;
		}

		// 메모리 할당이 진행되지 않은 상태라면
		if (parray == NULL)
		{
			// 새로운 메모리 할당
			parray = (int*)calloc(size, sizeof(int));
		
			// 첫 번쨰 요소에 값 할당
			*parray = input;
		}
	
		// 메모리 할당이 진행된 상태라면
		else 
		{
			// parray 가 가리키는 메모리 영역 지정
			// int* temp = parray;

			//// parray 에 새로운 메모리 영역 할당
			//parray = (int*)calloc(size, sizeof(int));

			//// 값 옮기기
			//for (int i = 0; i < size - 1; ++i)
			//	parray[i] = temp[i];

			// temp 가 가리키는 메모리 영역 해제
			// free(temp);

			parray = (int*)realloc(parray, size * sizeof(int));
			/// - realloc(p, size) : p 가 가리키는 메모리 영역의 크기를 size 크기로 재할당 합니다.
			/// - 재할당전 입력한 값을 유지하며, 새로 추가된 메모리에는 쓰레기값이 들어있습니다.
			/// - 만약 realloc 을 통해서 용량을 줄인다면 입력된 데이터는 사라질 수 도 있다.
			/// - 메모리 재할당 과정에서 메모리 위치가 변경될 수 있으므로, 항상 realloc() 함수의
			///   반환값을 다시 받아야합니다.

			// 새로운 요소에 값 삽입
			parray[size - 1] = input;
		}
	}

	return 0;
}