#include <iostream>
#include <string>
#include "Stick.h"
#include "Stick.cpp"
#include <cmath>
#include "Math.h"
#include <vector>
#include "List.h"
#include "List.cpp"
using namespace std;
int perevod_v_int(string Number)
{
	int Numberal;
	int sum=0;
	for (int i = Number.length() - 1,j=0; i >= 0; i--,j++)
	{
		Numberal = (int)Number[i] - 48;
		sum += Numberal * pow(10, j);
	}
	return sum;
}
string perevod_v_string(int number)
{
	string Number;
	int d = 0;
	while (number != 0)
	{
		d = number % 10;
		number = number / 10;
		Number = (char)(d + 48)+Number;
	}
	return Number;
}
int Priotiry(char op)
{
	switch (op)
	{
	case '+':
	case '-':
		return 1;
		break;
	case '/':
	case '*':
		return 2;
		break;
	case '(':
	case ')':
		return 3;
		break;
	}
}

int main()
{
    Stick<char>operands;
	string MathProblem;
	string Polish;
	int i = 0;
	bool mode = true;
	getline(cin, MathProblem);
	do
	{
		if ((MathProblem[i] >= '0') && (MathProblem[i] <= '9'))
		{
			Polish += MathProblem[i];
			i++;
			if (i != MathProblem.size() - 1)
			{
				if (!((MathProblem[i] >= '0') && (MathProblem[i] <= '9')))
				Polish += " ";
			}
			
		}
		else if ((operands.GetSize() == 0) || (operands.TopElem() != ')'))
		{
			if (operands.GetSize() == 0)
			{
				operands.push(MathProblem[i]);
				i++;
			}
			else if (operands.GetSize() != 0)
			{
				if (i != MathProblem.length())
				{
					operands.push(MathProblem[i]);
					i++;
				}
				int temp = Priotiry(operands.TopElem());
				temp = Priotiry(operands.predTopElem());
				if ((i == MathProblem.length()) && (operands.TopElem() != ')'))
				{
					while (operands.GetSize() != 0)
					{
						Polish += operands.TopElem();
						Polish += " ";
						operands.deleteTopElem();
					}
				}
				else
				{
					while (((Priotiry(operands.TopElem()) <= Priotiry(operands.predTopElem())) && (operands.predTopElem() != '(')))
					{
						if (operands.predTopElem() != -1)
						{
							Polish += operands.predTopElem();
							Polish += " ";
							operands.deletePredTopElem();
						}
					}
				}
			}
		}
		else if (operands.TopElem() == ')')
		{
			while (operands.TopElem() != '(')
			{
				if (operands.TopElem() == ')')
				{
					operands.deleteTopElem();
				}
				else if (operands.TopElem() == '(')
				{
					operands.deleteTopElem();
					break;
				}
				Polish += operands.TopElem();
				Polish += " ";
				operands.deleteTopElem();
			}
			operands.deleteTopElem();
		}
		if (i >= MathProblem.length() && operands.GetSize() == 0)
		{
			mode = false;
		}

	} while (mode==true);

	std::cout << Polish << endl;
	Stick<int>Numbers;
	string arr[100];
	string Numeral="";
	char buf;
	int index=0;
	for (int j = 0; j < Polish.length(); j++)
	{
		if ((Polish[j] >= '0') && (Polish[j] <= '9'))
		{
			Numeral += Polish[j];
		}
		else if ((Polish[j] == ' ')&&(Numeral!=""))
		{
			arr[index] = Numeral;
			Numeral = "";
			index++;
		}
		else
		{
			if (Polish[j] == '+')
			{
				arr[index] = "+";
				index++;
			}
			else if (Polish[j] == '-')
			{
				arr[index] = "-";
				index++;
			}
			else if (Polish[j] == '*')
			{
				arr[index] = "*";
				index++;
			}
			else if (Polish[j] == '/')
			{
				arr[index] = "/";
				index++;
			}			
		}
	}
	int num;
	int a, b;
	int TheResult = 0;
	for (int i = 0; i < index; i++)
	{
		if ((arr[i] != "+") && (arr[i] != "-") && (arr[i] != "/") && (arr[i] != "*"))
		{
			num = perevod_v_int(arr[i]);
			Numbers.push(num);
		}
		else
		{
			buf = (arr[i])[0];
			b = Numbers.TopElem();
			Numbers.deleteTopElem();
			a = Numbers.TopElem();
			Numbers.deleteTopElem();
			switch (buf)
			{
			case '+':
				TheResult = a + b;
				break;
			case '-':
				TheResult = a - b;
				break;
			case '*':
				TheResult = a * b;
				break;
			case '/':
				TheResult = a / b;
				break;
			}
			Numbers.push(TheResult);
		}
	}
	cout << "The Result is:" << TheResult << endl;
	return 0;
}
