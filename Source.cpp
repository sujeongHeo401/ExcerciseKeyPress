#include <stdio.h> // standard input/output
#include <conio.h> // 키와 관련된 include 라이브러리

void main()
{
	//char c;
	//c = _getch();

	//printf("key :  %d \n", c);
	//while (1) // infinte loop
	//{
	//	// Detect keyboard pressing // give value except 0
	//	if (_kbhit())
	//	{
	//		printf("Detect keyboard inut");
	//		break;
	//	}
	//	printf("waiting input... \n");
	//}
	while (true)
	{
		char pressKey;

		// Catch when input
		if (_kbhit())
		{
			// Enter the key
			pressKey = _getch();
			switch (pressKey)
			{
			case 72:
				printf("Up key (72)\n");
				break;
			case 75:
				printf("Left key (75)\n");
				break;
			case 77:
				printf("Right key (77)\n");
				break;
			case 80:
				printf("Down key (80)\n");
				break;
			}
		}
	}
}

