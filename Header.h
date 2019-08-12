#pragma once
#include<iostream>
#include<vector>
#include<ctime>
#include<algorithm>
#include<string>

using namespace std;

typedef vector<int> arr;

void PrintVector(arr a);
bool NotPair(int elem);
bool IsBiger(int elem);

class Data
{
public:
	Data() :hour(0), minute(0) {};
	Data(int hour, int minute) :hour(hour), minute(minute) {};

	void print() {
		cout << hour << " : " << minute << endl;
	}
	void Fill()
	{
		cout<<"Enter hour : ";
		cin >> hour;
		cout<<"Enter minute : ";
		cin >> minute;
	}

	

private:
	int hour;
	int minute;
};


class Train
{
public:
	Train() :number(0), time(), Station("none") {};
	Train(int number, int hour, int minute, string Station) :number(number), time(hour, minute), Station(Station) {};
	
	void Print();
	void Fill();

	bool operator< (Train& a);
	bool operator> (Train& a);

	int GetNumber();

	Data GetData()
	{
		return time;
	}
	string GetStation()
	{
		return Station;
	}

protected:
	int number;
	Data time;
	string Station;

};

class Vokzal:public Train
{
public:
	Vokzal() :Train() {};
	~Vokzal(){};

	void AddTrain();
	void AddTrain(Train& a);
	void DelTrain(int i);
	
	
	void Show();

	Train& operator [] (int index);

	void SortByNumber();


private:
	vector<Train> arr;
};

