#pragma once
#include <iostream>
#include <string>
#include "clsString.h"
#include "clsDate.h"
using namespace std;

class clsInputValidate
{
public:

	template <typename T> static bool IsNumberBetween(T Number, T From, T To)
	{
		return (Number >= From && Number <= To);
	}

	template <typename T> static T ReadNumber(string ErrorMessage = "Invalid Number, Enter agian\n")
	{
		T Number = 0;

		while (!(cin >> Number))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << ErrorMessage;
		}

		return Number;
	}

	template <typename T> static T ReadNumberBetween(T From, T To, string ErrorMessage)
	{
		T Number = ReadNumber<T>();

		while (!IsNumberBetween(Number, From, To))
		{
			cout << ErrorMessage << endl;
			Number = ReadNumber<T>();
		}

		return Number;
	}

	static bool IsDateBetween(clsDate Date, clsDate From, clsDate To)
	{
		return ((((clsDate::IsDate1AfterDate2(Date, From)) || (clsDate::IsDate1EqualToDate2(Date, From)))
			&&
			((clsDate::IsDate1BeforeDate2(Date, To)) || (clsDate::IsDate1EqualToDate2(Date, To))))
			||
			(((clsDate::IsDate1AfterDate2(Date, To)) || (clsDate::IsDate1EqualToDate2(Date, To)))
				&&
				((clsDate::IsDate1BeforeDate2(Date, From)) || (clsDate::IsDate1EqualToDate2(Date, From)))));
	}

	static bool IsValidDate(clsDate Date)
	{
		return clsDate::IsValidDate(Date);
	}

	static string ReadString()
	{
		string S1 = "";
		getline(cin >> ws, S1);
		return S1;
	}
};

