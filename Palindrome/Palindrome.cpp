// Palindrome.cpp : Checks if a string is Palindrome.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>

std::vector<std::string> Reverse (std::string Input)
{
	auto temp = Input.size();
	std::vector<std::string> Pile;
	std::string U;

	for (int i = 0; i <= Input.size(); i++)
	{
		U = Input[temp - i];
		Pile.push_back(U);
	}
	return Pile;
}


int main()
{
	std::string temp;
	std::string Lineinput;
	std::vector <std::string> Pile;
	int C = 0;
	std::string U;

	std::cout << "Let's see if magic happens\n";
	std::getline(std::cin, Lineinput);
	Pile = Reverse(Lineinput);

	for (int i = 0; i <= Pile.size() - 1; i++)
	{
		std::cout << Pile[i] << "\n";
	}

	//C= Lineinput.size();	
	//
	//for (int i =0 ; i<=C; i++)
	//{
	//	if (Lineinput[i] == Lineinput[C - i])
	//		U = Lineinput[i];
	//		//Lineinput[i]=U;
	//	Pile.push_back[U];
	//	//Pile.push_back[Lineinput[i]];
	//	/*Pile.push_back[Lineinput[i]];*/
	//}
	//
	//{
	//	for (int k = 0; k <= Pile.size(); k++)

	//		std::cout << Pile[k] << "\n";
	//}
	return 0;
}

