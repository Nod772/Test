#include"Header.h"



void PrintVector(arr a)
{
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;
}

bool NotPair(int elem)
{
	return elem % 2 != 0;
}

bool IsBiger(int elem)
{
	return elem < 5;
}


void Train::Print()
{
	cout << "Train Number  :: " << number << endl;
	cout << "Train Time    :: "; time.print();
	cout << "Train Station :: " << Station << endl;

}

void Train::Fill()
{
	cout << "Enter number : ";
	cin >> number;
	time.Fill();
	cout << "Enter Station : ";
	cin >> Station;
}

bool Train::operator<(Train& a)
{
	if (number<a.number)
	{
		return true;
	}
	else
	{
		return false;
	}
	// TODO: вставьте здесь оператор return
}

bool Train::operator>(Train& a)
{
	if (number > a.number)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int Train::GetNumber()
{
	return number;
}

void Vokzal::AddTrain()
{
	Train temp;
	temp.Fill();

	arr.push_back(temp);
}

void Vokzal::AddTrain(Train& a)
{
	arr.push_back(a);
}

void Vokzal::DelTrain(int i)
{
	if (i>arr.size())
	{
		cout << "\nIncorect index!\n";
	}
	else
	{

		arr.erase(arr.begin() + i);
	}
}

void Vokzal::Show()
{
	//sort(arr.begin(), arr.end());
	for (int i = 0; i < arr.size(); i++)
	{
		arr[i].Print();

		cout << endl;
	}

}

Train& Vokzal::operator[](int index)
{
	return arr[index];
	// TODO: вставьте здесь оператор return
}

void Vokzal::SortByNumber()
{
	sort(arr.begin(),arr.end());
}
