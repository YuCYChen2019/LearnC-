#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

inline bool PentagonalValueValid(int Index,int& result) {
	int64_t value = Index * (3 * Index - 1) / 2;
	if (value > 0 && value <= INT_MAX) {
		result = value;
		return true;
	}
	else {
		return false;
	}
}
void PentagonalArray(vector<int>& resultVec, int MaxSize);
void PrintPentagonalArrayElement(const vector<int>& sourceVec, string& TypeStr);

const vector<int>*  PentagonalAdaptArray(int maxSize);
int FindTheElmentInPos(int pos);

template<typename T>
T max(const vector<T>& vec)
{
	if (vec.size() <= 0)return 0;
	vector<T> SortedVec = vec;
	sort(SortedVec.begin(), SortedVec.end(), [](T& a, T& b) {
		return a > b;
		});
	return SortedVec[0];
}

int max(const int a, const int b);
float max(const float a,const float b);
string max(const string& a,const string& b);
int max(const vector<int>& vec);
float max(const vector<float>& vec);
string max(const vector<string>& vec);
int max(const int* a, int size);
float max(const float* a, int size);
string max(const string* a, int size);

template<typename InputIterator,typename OutputIterator,typename ElemType,typename Comp>
OutputIterator Filter(InputIterator first,InputIterator last,OutputIterator at,const ElemType &Val,Comp pred) {
	while ((first = find_if(first,last,bind2nd(pred,Val)))!=last)
	{
		cout << "found value: " << *first << endl;
		*at++ = *first++;
	}
	return at;
}

template<typename InputIterator,typename OutputIterator,typename ElemType, typename Comp>
OutputIterator Sub_Vec(InputIterator first, InputIterator last, OutputIterator at, OutputIterator end, const ElemType& Val, Comp pred) {
	copy(first, last, at);
	end = at + (last - first);
	sort(at, end, pred);
	end = find_if(at, end, bind2nd(pred, Val));
	return at;
}