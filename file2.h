#pragma once
#include <iostream>
#include <string>
#include <vector>

void Func_C()
{
	int a, b, chek, chek2 = 0, chek3, chek4;
	std::string _name;
	std::cout << "How many musicians _ ";
	std::cin >> a;
	Musician* cloud1 = new Musician[a];
	std::cout << "How many songs _ ";
	std::cin >> b;
	Song* cloud2 = new Song[b];
	Register_Func(a, b, cloud1, cloud2);
	std::cout << "\nHow much songs you want to transfer _ ";
	std::cin >> chek3;
	Song* fav2 = new Song[chek3];
	std::cout << "\nWhat song you want to transfer in the favorite, click numbers, and when you end click 0";
	while (chek != 0)
	{
		std::cin >> chek;
		for (int i = 0; i < b; i++)
		{
			if (chek == i + 1)
			{
				fav2[chek2++] = cloud2[i];
			}
		}
	}
	chek2 = 0;
	std::cout << "\nHow much musicians you want to transfer _ ";
	std::cin >> chek4;
	Musician* fav1 = new Musician[chek4];
	std::cout << "\nWhom you want to transfer in the favorite, click numbers, and when you end click 0";
	while (chek != 0)
	{
		std::cin >> chek;
		for (int i = 0; i < a; i++)
		{
			if (chek == i + 1)
			{
				fav1[chek2++] = cloud1[i];
			}
		}
	}
	std::cout << "\n1. Searching\n Song - 1\n Musician - 2\n";
	std::cin >> chek;
	if (chek == 1)
	{
		std::cout << "Enter song name _ ";
		getline(std::cin, _name);
		for (int i = 0; i < b; i++)
		{
			if (_name == cloud2[i].song_name)
			{
				cloud2[i].searchSong();
			}
		}
	}
	if (chek == 2)
	{
		std::cout << "Enter singer name _ ";
		getline(std::cin, _name);
		for (int i = 0; i < a; i++)
		{
			if (_name == cloud1[i]._name)
			{
				cloud1[i].searchMusician();
			}
		}
	}
	std::cout << "\n2. Add and remove from favorite\n Add - 1\n Remove - 2\n";
	std::cin >> chek2;
	if (chek2 == 1 && chek == 2)
	{
		std::cout << "Write singer name - ";
		getline(std::cin, _name);
		for (int i = 0; i < a; i++)
		{
			if (_name = cloud1[i]._name)
			{
				Musician* tmp = new Musician[chek4 + 1];
				for (int j = 0; j < chek4; j++)
				{
					tmp[j] = fav1[j];
				}
				tmp[chek4] = cloud1[i];
				delete[] fav1;
				fav1 = tmp;
			}
		}
	}
	if (chek2 == 1 && chek == 1)
	{
		std::cout << "Write song name - ";
		getline(std::cin, _name);
		for (int i = 0; i < b; i++)
		{
			if (_name = cloud2[i].song_name)
			{
				Song* tmp = new Song[chek3 + 1];
				for (int j = 0; j < chek3; j++)
				{
					tmp[j] = fav2[j];
				}
				tmp[chek3] = cloud2[i];
				delete[] fav2;
				fav2 = tmp;
			}
		}
	}
	
	if (chek2 == 2 && chek == 2)
	{
		std::cout << "Write singer name - ";
		getline(std::cin, _name);
		for (int i = 0; i < b; i++)
		{
			if (_name == fav1[i]._name)
			{
				int r = -1;
				Musician* tmp = new Musician[chek4 - 1];
				for (int j = 0; j < chek4; j++)
				{
					r++;
					if (j == i)
					{
						j -= 1;
						continue;
					}
					tmp[j] = fav1[r];
				}
				delete[] fav1;
				fav1 = tmp;
			}
		}
	}
	if (chek2 == 2 && chek == 1)
	{
		std::cout << "Write song name - ";
		getline(std::cin, _name);
		for (int i = 0; i < a; i++)
		{
			if (_name == fav2[i].song_name)
			{
				int r = -1;
				Song* tmp = new Song[chek3 - 1];
				for (int j = 0; j < chek3; j++)
				{
					r++;
					if (j == i)
					{
						j -= 1;
						continue;
					}
					tmp[j] = fav2[r];
				}
				delete[] fav2;
				fav2 = tmp;
			}
		}
	}
}
