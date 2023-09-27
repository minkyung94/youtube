//강의 17화~

//표쥰 입출력 함수 헤더 standard input output
#include <stdio.h>



/*
* <함수>
* 
* factorial
* 8! 
* 코드 재사용하기 위해 함수 사용
*/

int Factorial(int _iNum) //입력 변수명 횟수
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);
	}

	// Factorial(10); 
		// 자기코드 안에 자기 함수 하나 더 호출 스택이 하나 더 생김, 
		// 문제는 종료안되고 메인함수로 return안됨, stack overflow

	return iValue;
}


//강의 18화~
/*
* <재귀함수>
* 함수안에서 자기 자신 호출
* 동작 방식 이해도 중요
	* 장점: 가독성, 구현의 용이하고 직관적(프로그래밍 익숙해진 기준), 계층구조 하기 좋음
	* 단점: 성능이 많이 떨어짐 반복문 대체 가능(stack 이나 queue 사용)
*		stackoverflow 문제


*	 재귀함수로 팩토리얼 구현해보기 
			(Recursion 반복되는 재귀의)
*/
int Factorial_Re(int _iNum) 
				/*똑같이 내가 원하는 팩토리얼 값 넣어야*/
{
	if (1 == _iNum)
	{
		return 1; 
		/*리턴 : 함수 스택 종료*/
	}

	return _iNum * Factorial_Re(_iNum - 1);
	/* 예를 들어 7! = 7 x 6! */
}


/* <피보나치 수열> 
	(0) 1 1 2 3 4 8 13 21 34 55 ...
*/
int Fibonacci(int _iNum)
{

}


int main() /*팩토리얼 구현*/
{
	int iValue = Factorial(4); 
		/* 함수안의 변수: 지역변수 */
	iValue = Factorial(10);
	iValue = Factorial_Re(10);

	iValue = Fibonacci(10);





	return 0;
}

/* 함수들이 사용하는 메모리 영역 =  스택 메모리 영역 
호출 스택이 뭔지 : 메모리 상황 보여줘
*/