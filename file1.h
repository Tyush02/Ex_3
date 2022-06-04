#pragma once
#include <iostream>
#include <string>
#include <vector>

class Musician
{
public:
	Musician& operator=(const Musician& oth)
	{
		this->_name = oth._name;
		this->_surname = oth._surname;
		this->_country = oth._country;
		this->birth_date = oth.birth_date;
		for (int i = 0; i < oth._playlist.size(); i++)
		{
			this->_playlist[i] = oth._playlist[i];
		}

		return *this;
	}
	void searchMusician()
	{
		std::cout << "Name _ " << _name << "\nSurname _ " << _surname << "\nCountry _ " << _country << "\nBirthday _ " << birth_date << "\nPlaylist\n" << std::endl;
		for (int i = 0; i < _playlist.size(); i++)
		{
			std::cout << i + 1 << " _ " << _playlist[i] << std::endl;
		}
	}
	//friend void Register_Func(int a, int b, Musician* ptr1, Song* ptr2);
//private:
	std::string _name;
	std::string _surname = "";
	std::string _country = "";
	int birth_date;
	std::vector<std::string> _playlist;
};

class Song
{
public:
	Song& operator=(const Song& oth)
	{
		this->song_name = oth.song_name;
		this->_relize = oth._relize;
		this->singer_name = oth.singer_name;
		this->song_dur = oth.song_dur;

		return *this;
	}
	void searchSong()
	{
		std::cout << "Singer _ " << singer_name << "\nRelize _ " << _relize << "\nDuration _ " << song_dur << std::endl;
	}
	//friend void Register_Func(int a, int b, Musician* ptr1, Song* ptr2);
//private:
	std::string song_name;
	int _relize;
	std::string singer_name;
	float song_dur;
};

void Register_Func(int a, int b, Musician* ptr1, Song* ptr2)
{
	for (int i = 0; i < a; i++)
	{
		std::cout << "Musician " << i + 1 << ".\n" << std::endl;
		std::string nn;
		int num;
		std::cout << "Name _ ";
		getline(std::cin, ptr1[i]._name);
		std::cout << "Do you want to write surname?\n Yes - 1\n No - 2\n";
		std::cin >> num;
		if (num == 1)
		{
			std::cout << "Surname _ ";
			getline(std::cin, ptr1[i]._surname);
		}
		std::cout << "Do you want to write the country?\n Yes - 1\n No - 2\n";
		std::cin >> num;
		if (num == 1)
		{
			std::cout << "Country _ ";
			getline(std::cin, ptr1[i]._country);
		}
		std::cout << "Birth Date _ ";
		std::cin >> ptr1[i].birth_date;
		std::cout << "How many song he/she has _ ";
		std::cin >> num;
		std::cout << std::endl;
		for (int j = 0; j < num; j++)
		{
			std::cout << j + 1 << " _ ";
			getline(std::cin, nn);
			ptr1[i]._playlist.push_back(nn);
		}
		std::cout << "______\n";
	}
	for (int i = 0; i < b; i++)
	{
		std::cout << "Song " << i + 1 << ".\n" << std::endl;
		std::cout << "Song Name _ ";
		getline(std::cin, ptr2[i].song_name);
		std::cout << "Relize _ ";
		std::cin >> ptr2[i]._relize;
		std::cout << "Singer's Name _ ";
		getline(std::cin, ptr2[i].singer_name);
		std::cout << "Duration _ ";
		std::cin >> ptr2[i].song_dur;
		std::cout << "______\n";
	}
}
