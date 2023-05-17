#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct tag_Friend
{
	char name[256];
	int age;
} Friend, * Friends;

void initialize_friend_array(Friends friends, int friend_count);
// void initialize_friend_array(Friend *friends);
void print_friend(const Friend *friend, int friend_count);
void change_freind_info(Friend* friend);

int main()
{
	Friend friends[5];
	int length = sizeof(friends) / sizeof(friends[0]);
	initialize_friend_array(friends,length);


	while (1)
	{
		for (int i = 0; i < length; ++i)
			print_friend(&friends[i], i);

		int index;
		printf("index : ");
		scanf("%d", &index);
		while (getchar() != '\n');

		change_freind_info(&friends[index]);
	}

	return 0;
}

void initialize_friend_array(Friends friends, int friend_count)
{
	for (int i = 0; i < friend_count; ++i)
	{
		strcpy(friends[i].name, "-NONE-");
		friends[i].age = 0;
	}
}

void print_friend(const Friend *friends, int index)
{
		printf("*---------[%d]\n", index);
		printf("  name = %s \n", (*friend).name);
		printf("   age = %d", friend->age);
		/// - (->) : 포인터 변수가 가리키는 구조체 멤버에 접근할 때 사용할 수 있는 연산자
}

void change_freind_info(Friend* friend)
{
	printf(" 친구 이름은 ? ");
	scanf("%[^\n]s", friend->name);
	while (getchar() != '\n');

	printf("나이는 ? ");
	scanf("%d", &friend->age);

	system("cls");
}
