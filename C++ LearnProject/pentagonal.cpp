#include "pentagonal.h"


void PentagonalArray(vector<int>& resultVec, int MaxSize)
{
	if (MaxSize <= 0)return;
	for (size_t i = 0; i < MaxSize; i++)
	{
		int inputParam = i + 1;
		int PentagonalValue = 0;
		if (PentagonalValueValid(inputParam, PentagonalValue))
		{
			resultVec.push_back(PentagonalValue);
		}
		else {
			resultVec.clear();
			printf("resultVec Element out of INT_MAX range");
			return;
		}
	}
}

void PrintPentagonalArrayElement(const vector<int>& sourceVec, string& TypeStr)
{
	if (sourceVec.size() <= 0)return;

	TypeStr = typeid(sourceVec[0]).name();
	cout << "Type Name:" + TypeStr << endl;
	cout << "Array Elment Content:";
	for (size_t i = 0; i < sourceVec.size(); i++)
	{
		cout << sourceVec[i] << " ";
	}
}

const vector<int>*  PentagonalAdaptArray(int maxSize)
{
	static vector<int> StoredPentagonalArray{};
	int len = StoredPentagonalArray.size();
	if (len < maxSize) {
		for (size_t i = len; i < maxSize; i++)
		{
			int inputParam = i + 1;
			int PentagonalValue = 0;
			if (PentagonalValueValid(inputParam, PentagonalValue))
			{
				StoredPentagonalArray.push_back(PentagonalValue);
			}
			else {
				printf("resultVec Element out of INT_MAX range");
				return &StoredPentagonalArray;
			}
		}
	}
	return &StoredPentagonalArray;
}

int FindTheElmentInPos(int pos)
{
	const vector<int>* pentagonalArr = PentagonalAdaptArray(pos+1);
	int len = pentagonalArr->size();
	if (pos<len)
	{
		return *(pentagonalArr->begin()+pos);
	}
	return 0;
}



//int max(const int a, const int b)
//{
//	return a > b ? a : b;
//}
//
//float max(const float a, const float b)
//{
//	return a > b ? a : b;
//}
//
//string max(const string& a, const string& b)
//{
//	return a > b ? a : b;
//}

//int max(const vector<int>& vec)
//{
//	if (vec.size() <= 0)return 0;
//	vector<int> SortedVec = vec;
//	sort(SortedVec.begin(), SortedVec.end(), [](int& a, int& b) {
//		return a > b;
//	});
//	return SortedVec[0];
//}
//
//float max(const vector<float>& vec) {
//	if (vec.size() <= 0)return 0;
//	vector<float> SortedVec = vec;
//	sort(SortedVec.begin(), SortedVec.end(), [](float& a, float& b) {
//		return a > b;
//		});
//	return SortedVec[0];
//}
//
//string max(const vector<string>& vec) {
//	if (vec.size() <= 0)return 0;
//	vector<string> SortedVec = vec;
//	sort(SortedVec.begin(), SortedVec.end(), [](string& a, string& b) {
//		return a > b;
//		});
//	return SortedVec[0];
//}

int max(const int* a, int size)
{
	if (!a)return 0;
	int max = *a;
	for (size_t i = 1; i < size; i++)
	{
		int tmp = *(a + i);
		if (tmp > max) {
			max = tmp;
		}
	}
	return max;
}

float max(const float* a, int size)
{
	if (!a)return 0;
	float max = *a;
	for (size_t i = 1; i < size; i++)
	{
		float tmp = *(a + i);
		if (tmp > max) {
			max = tmp;
		}
	}
	return max;
}

string max(const string* a, int size)
{
	if (!a)return 0;
	string max = *a;
	for (size_t i = 1; i < size; i++)
	{
		string tmp = *(a + i);
		if (tmp > max) {
			max = tmp;
		}
	}
	return max;
}



