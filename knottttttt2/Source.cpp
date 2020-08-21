#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char NATO;
		printf("enter character :");
		scanf_s("%c",&NATO);
		switch (NATO)
		{
		case 'A': case 'a':
			printf("%c -> Alpha\n",NATO);
			break;
		case 'B': case 'b':
			printf("%c -> Bravo\n", NATO);
			break;
		case 'C': case 'c':
			printf("%c -> Charlie\n", NATO);
			break;
		case 'D': case 'd':
			printf("%c -> Delta\n", NATO);
			break;
		case 'E': case 'e':
			printf("%c -> Echo\n", NATO);
			break;
		case 'F': case 'f':
			printf("%c -> Foxtrot\n", NATO);
			break;
		case 'G': case 'g':
			printf("%c -> Golf\n", NATO);
			break;
		case 'H': case 'h':
			printf("%c -> Hotel\n", NATO);
			break;
		case 'I': case 'i':
			printf("%c -> India\n", NATO);
			break;
		case 'J': case 'j':
			printf("%c -> Juliett\n", NATO);
			break;
		case 'K': case 'k':
			printf("%c -> Kilo\n", NATO);
			break;
		case 'L': case 'l':
			printf("%c -> Lima\n", NATO);
			break;
		case 'M': case 'm':
			printf("%c -> Mike\n", NATO);
			break;
		case 'N': case 'n':
			printf("%c -> November\n", NATO);
			break;
		case 'O': case 'o':
			printf("%c -> Oscar\n", NATO);
			break;
		case 'P': case 'p':
			printf("%c -> Papa\n", NATO);
			break;
		case 'Q': case 'q':
			printf("%c -> Quebec\n", NATO);
			break;
		case 'R': case 'r':
			printf("%c -> Romeo\n", NATO);
			break;
		case 'S': case 's':
			printf("%c -> Sierra\n", NATO);
			break;
		case 'T': case 't':
			printf("%c -> Tango\n", NATO);
			break;
		case 'U': case 'u':
			printf("%c -> Uniform\n", NATO);
			break;
		case 'V': case 'v':
			printf("%c -> Victor\n", NATO);
			break;
		case 'W': case 'w':
			printf("%c -> Whiskey\n", NATO);
			break;
		case 'X': case 'x':
			printf("%c -> X-ray\n", NATO);
			break;
		case 'Y': case 'y':
			printf("%c -> Yankee\n", NATO);
			break;
		default :
			printf("%c -> Zulu\n", NATO);
			
		}

	return 0;
}