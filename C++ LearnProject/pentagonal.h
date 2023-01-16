#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
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

