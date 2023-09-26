// 전 처리기 매크로 구문(#)모든 컴파일 과정 중 제일 먼저 수행
			   // 이진수 각 자리수
#define HUNGRY  0x001		// 치환, HUNGRY코드를 1로 치환
						// #define 구문 쓰는 이유: 1. 가독성, 2.유지 보수적 측면 이점,
#define THIRSTY 0x002		//16진수: 0xn
#define TIRED	0x004
#define FIRE	0x008

#define COLD	0x010
#define POISON1	0x020
#define POISON2	0x040
#define POISON3	0x080

#define COLD	0x100
#define POISON4	0x200
#define POISON5	0x400
#define POISON6	0x800




// 주석 자료형
// 설명 역할, 코드로 인식되지 않는다.

/*
	<자료형 data type>
	: 어떠한 자료를 나타내는지 설명(크기,byte)
	(내가 선언할 메모리 공간에 이름을 부여(변수이름) 크기 형태 부연 설명해주는 역할)

		- 정수형: char(1), short(2), int(4), long(4), long long(8)
		- 실수형: float(4), double(8)


	문법: 변수 선언 먼저 -> 대입 연산자

	

	*/

int main()
{
	int i = 0;
	
	// 1바이트로 양수만 표현
	// 256가지 -> 양의 정수만 0~255까지
	unsigned char c = 0; 
	
		c = 0; // (초기화, 0으로 밀어줘)
		c = -1;
		
	
	// 1바이트로 양수 음수 모두 표현
	// -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = 127; // 127 초과 시 -1로 받아들여짐


	// 음의 정수 찾기 (2의 보수법)
		// 대응되는 양수의 부호를 반전 후, +1



	int a = 4 + (int) 4.0;

	/*
	정수표현 방식과 실수 표현 방식 다름
	실수표현 방식은 정밀도에 의존
		따라서 double(8) 자료형이 float(4)보다 더 아래의 소수점까지 정확히 표현 가능

	정수는 정수까리, 실수는 실수끼리 연산하되, 두 표현방식의 피연산자가 연산도리 경우 명시적으로 변환하자
	*/

	float f = 1.2415f + (float)20;
		// 1.234f (folat 4바이트)
		// 1.234 (f X는 double 8바이트 간주)
	

	/*
	<연산자>
	
	대입연산자  =
	산술연산자  + - * / %(모듈러스, 나머지, 피연산자가 모두 정수) 
	증감 연산자 ++ --

	*/

	int data = 10 + 10;
	// data = data + 20;
	data += 20; 
	// += 더해서 = 마감 꼭 필요

	
	data = (int)(10. / 3.);

	data = 0;
	++data; // 전위(전치)
	data++; // 후위(후치)

	data = 0;

	a = 10;
	data = a++; // 10
	data = ++a; // 11 대입연산자보다 먼저 수행
	// 후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀림.
	// 전위로 쓰는 습관 들이자

	data = 0;

	a = 10;
	data = ++a;
	data = a++;

	data = 0;
	data--;
	data++;


	/*
	<논리 연산자>

	// !(역), &&(And), ||(Or)
	// 참true : 0이 아닌 값,주로 1
	// 거짓false : 0
	 // bool: 0, 1만 다루는 자료형
	*/

	bool TrueFalse = false;
	
	bool IsTrue = 100;

	IsTrue = true;
	IsTrue = !IsTrue;

	int iTrue = 0;
	iTrue = !iTrue;

	iTrue = 100 && 200; // 참, 1
		iTrue = 0 && 200; // 거짓, 0

	iTrue = 0 || 300; // 하나만 참이어도 참, 1
		iTrue = 0 || 0; // 둘다 거짓, 0


	/*
	
	<비교 연산자>
	 ==, !=, <, >, <=, >=
	// 참, 거짓 대답

	*/



	/*
	* 
	<구문>

	//if, else
	//swich case
=

	*/


	data = 0;

	if (0 && 200)
	{
		data = 100;
	}

	if (data == 100)
	{
		// if가 참인 경우에 수행
	}
	else
	{
		// if가 거짓인 경우에 수행
	}
	
	//if, else if
	/*
	* if, else if

	if ()
	{

	}
	else if ()
	{

	}
	else if ()
	{

	}
	else if ()
	{

	}
	else
	{

	}

	*/

	//swuich case 시 break중요

	int iTest = 10;
	switch (iTest)
	{
	case 10:
		break;

	case 20:
		break;

	default:
		break;
	}
	

	if (iTest == 10)	//case 10: break;
	{

	}
	else if (iTest == 20)	//case 20: break;
	{

	}
	else				//default: break;
	{

	}

	if (iTest == 10 || iTest == 20 || iTest == 30)	//case 10 case 20 case 30 : break;
				// 1	or			0				0
				// 셋 중 하나만 걸려도 참으로 인식
	{

	}



	// 삼항연산자 if else 쓰기 번거로워서 간략하게
	// : ?
	iTest == 20 ? iTest = 100 : iTest = 200;
	// 참이면	-> 수행
	// 거짓이면						-> 수행
	
	// 아래 if문이랑 같음. 가독성 문제 생김

	if (iTest == 20)
	{
		iTest = 100;
	}
	else
	{
		iTest = 200;
	}


	// <비트연산자>
	// 비트 단위로 연산
			// 비트 쉬프트 << , >>

	unsigned char byte = 1;
	byte <<= 1; // 0000 0001 -> 0000 0010 (전체에서 2배)
				// 축약: byte = byte << 1;
	byte <<= 2; // 4배
	byte <<= 3; // 8배

	byte >>= 1; // 2^n 나눈 못



	//강의 11강
	// <비트 단위 연산 시 쓰이는 기호, 곱(&), 합(|), 반전(~) xor(^)>
	// 
			// 곱(&) : 둘다 1인 경우 1 
			// 합(|) : 둘 중 하나만 1이어도 1
			// 반전(~) : 각 자리 비트 뒤집어 
			//				ex) 1101 1010 -> 0010 0101
			// xor(^) : 2각 자리 비트가 같으면 0, 다르면 1
			//				ex)	1101 0101 랑
			//					0010 1010 비교 시
			//					1111 1111  (다 다르니까 1)		



	unsigned int iStatus = 0;		// 32bit = 4byte, 경우의 수 2^32
	

	// <상태 추가>
	iStatus |= HUNGRY;
	iStatus |= THIRSTY;


	// < 상태 확인>
	if (iStatus & THIRSTY)
	{
		// 지정한 자리에 비트가 1이 있는지
	}


	// <특정 자리 비트 제거>
	iStatus &= ~THIRSTY; // 구문 암기: 이 비트 빼겠다는 소리

		 
	return 0;



}