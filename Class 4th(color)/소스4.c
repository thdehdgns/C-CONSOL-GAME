#include <stdio.h>
#include <windows.h>

#define WITDH 20
#define HEIGHT 10

char maze[WITDH][HEIGHT] =
{
	{'1','1' ,'1','1','1','1','1','1','1','1'},
	{'1','1' ,'1','1','1','1','1','1','1','1'},
	{'1','1' ,'1','1','0','0','0','0','0','1'},
	{'1','1' ,'1','0','1','1','1','1','1','0'},
	{'1','1' ,'1','0','1','1','1','1','1','0'},
	{'1','1' ,'1','0','1','1','1','1','1','0'},
	{'1','1' ,'1','1','0','0','0','0','0','1'},
	{'1','1' ,'1','1','1','1','1','1','0','1'},
	{'1','1' ,'1','1','1','1','1','1','0','1'},
	{'1','1' ,'1','1','1','1','1','1','0','1'},
	{'1','1' ,'1','1','1','1','1','1','0','1'},
	{'1','1' ,'1','1','1','1','1','1','0','1'},
	{'1','1' ,'1','1','1','1','1','1','0','1'},
	{'1','1' ,'1','1','1','1','1','1','0','1'},
	{'1','0' ,'1','1','0','0','1','1','0','1'},
	{'1','1' ,'0','0','1','1','0','0','1','1'},
	{'1','1' ,'1','1','1','1','1','1','1','1'},
	{'1','1' ,'1','1','1','1','1','1','1','1'},
	{'1','1' ,'1','1','1','1','1','1','1','1'},
	
};

void Render()
{
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (maze[i][j] == '1')
			{
				printf("■");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
int main()
{
#pragma region 이차원 배열
	// 배열의 요소로 또다른 배열을 만드는 배열입니다.

	// 2차원 배열은 행과 열로 구분되며 앞에 있는 배열은 
	// 열을 의미하고, 뒤에있는 배열은 행을 의미합니다.

	//	int array[3][4] = { { 1 , 2, 3, 4 },
	//						{5,6,7,8}, 
	//						{9, 10, 11, 12}
	//						};
	//	
	//	for (int i = 0; i < 3; i++)
	//	{
	//		for (int j = 0; j < 4; j++)
	//		{
	//			printf("%d   ",array[i][j]);
	//	
	//		}
	//		printf("\n");
	//	}
#pragma endregion
	Render();

	
	return 0;
}