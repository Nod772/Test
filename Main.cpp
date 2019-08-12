#include"Header.h"



int main()
{
//	arr::iterator it;
//	arr a1(10);
//	
////	PrintVector(a1);
//
//	a1.push_back(100);
//	a1.insert(a1.begin(), 10);
//
//	//PrintVector(a1);
//
//	a1.insert(a1.end(), { 1,2,3,4 });
//	
//	//PrintVector(a1);
//
//
//	arr a2;
//
//	a2.insert(a2.begin(), a1.begin(), a1.begin() + 3);
//
//	//PrintVector(a2);
//
//	a2.insert(a2.end(), 5, 10);
//	//PrintVector(a2);
//
//	arr a3 = {1,2,3,4,5,6,7,8};
//	//a3.assign(a2.begin(), a2.end());
//
////	a1.clear();
//	//if (a1.empty())
//	//{
//	//	cout << "Vector empty!!\n";
//	//}
//	//else
//	//{
//	////	PrintVector(a1);
//	//}
//	//
//	//a2.resize(2);
//	////PrintVector(a2);
///*
//
//	PrintVector(a2);
//	PrintVector(a3);
//
//	a2.swap(a3);
//
//	PrintVector(a2);
//	PrintVector(a3);
//
//	cout<<a2.capacity()<<endl;
//	a2.reserve(12);
//	cout << a2.capacity()<<endl;
//
//	a2.shrink_to_fit();
//	cout << a2.capacity() << endl;
//*/
//	arr test(10);
//	//copy(a3.begin(), a3.end() - 1, test.begin());
//
////	PrintVector(a3);
//
//	copy_if(a3.begin(), a3.end(), test.end()-10, NotPair);
//	
//	PrintVector(test);
//	random_shuffle(test.begin(), test.end());
//	PrintVector(test);
//
//	sort(test.begin(), test.end());
//	PrintVector(test);
//	
//	it = test.begin();
//	it += 8;
//	cout<<*it;


	Vokzal a;
	
	Train b(111, 12, 10,"Dubno");
	Train c(112, 13, 11, "Rivne");
	Train d(132, 14, 15, "Ostroh");

	a.AddTrain(c);
	a.AddTrain(d);
	a.AddTrain(b);

	a.Show();

	cout << "\nSort\n";
	a.SortByNumber();
	a.Show();

	cout << "\nDEL\n";
	a.DelTrain(2);
	a.Show();

	cout << "\n[ ]\n";
	a[1].Print();
}