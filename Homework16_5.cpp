#include<iostream>
#include<string>


int main()
{

	const int size = 2;
	int array[size][size] = { {1,2}, {4,3}, };//(1 �������)]
	int date = 8 % 2;



	for (int f = 0; f < 5; ++f)// ������� ������ 5 ���(2 �������)
	{
		for (int i = 0; i < size; ++i)
		{
			;
			for (int j = 0; j < size; ++j)
			{

				std::cout << array[i][j];
			}
			std::cout << '\n';
		}
	}

	if (date % 2 == 0)// ��� ������ ������
	{
		int sum = 0;//���������� �������� ������ ������(3 �������)
		for (int c = 0; c < size; ++c)
		{
			sum += array[c][0];

		}

		std::cout << "Sum first row is : " << sum << std::endl;
	}
	else
	{

		int  equal = 0;
		for (int u = 0; u < size; ++u)
		{
			equal += array[0][u];

		}
		std::cout << "Sum first row is : " << equal << std::endl;

	}
	return 0;

}