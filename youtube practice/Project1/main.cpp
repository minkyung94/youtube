//���� 17ȭ~

//ǥ�� ����� �Լ� ��� standard input output
#include <stdio.h>



/*
* <�Լ�>
* 
* factorial
* 8! 
* �ڵ� �����ϱ� ���� �Լ� ���
*/

int Factorial(int _iNum) //�Է� ������ Ƚ��
{
	int iValue = 1;

	for (int j = 0; j < _iNum - 1; ++j)
	{
		iValue *= (j + 2);
	}

	// Factorial(10); 
		// �ڱ��ڵ� �ȿ� �ڱ� �Լ� �ϳ� �� ȣ�� ������ �ϳ� �� ����, 
		// ������ ����ȵǰ� �����Լ��� return�ȵ�, stack overflow

	return iValue;
}


//���� 18ȭ~
/*
* <����Լ�>
* �Լ��ȿ��� �ڱ� �ڽ� ȣ��
* ���� ��� ���ص� �߿�
	* ����: ������, ������ �����ϰ� ������(���α׷��� �ͼ����� ����), �������� �ϱ� ����
	* ����: ������ ���� ������ �ݺ��� ��ü ����(stack �̳� queue ���)
*		stackoverflow ����


*	 ����Լ��� ���丮�� �����غ��� 
			(Recursion �ݺ��Ǵ� �����)
*/
int Factorial_Re(int _iNum) 
				/*�Ȱ��� ���� ���ϴ� ���丮�� �� �־��*/
{
	if (1 == _iNum)
	{
		return 1; 
		/*���� : �Լ� ���� ����*/
	}

	return _iNum * Factorial_Re(_iNum - 1);
	/* ���� ��� 7! = 7 x 6! */
}


/* <�Ǻ���ġ ����> 
	(0) 1 1 2 3 4 8 13 21 34 55 ...
*/
int Fibonacci(int _iNum)
{

}


int main() /*���丮�� ����*/
{
	int iValue = Factorial(4); 
		/* �Լ����� ����: �������� */
	iValue = Factorial(10);
	iValue = Factorial_Re(10);

	iValue = Fibonacci(10);





	return 0;
}

/* �Լ����� ����ϴ� �޸� ���� =  ���� �޸� ���� 
ȣ�� ������ ���� : �޸� ��Ȳ ������
*/