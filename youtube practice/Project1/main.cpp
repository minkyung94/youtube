// 강의 25화 정적변수 & 외부변수

#include <stdio.h>
#include "func.h"


/*전역변수*/
int g_i = 0; // Data영역

/*정적변수*/
static int g_iStatic = 0;

int main()
{
	int i = Mul(10, 20);

	return 0;
}
