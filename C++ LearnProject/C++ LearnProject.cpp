// C++ LearnProject.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include "pentagonal.h"
using namespace std;

int main()
{
    //std::cout << "Hello World!\n";
    //vector<int> tmpVec{0,11,25,748,45,6};
   
    const int elem_size = 8;
    int ia[elem_size] = { 12,8,43,0,6,21,3,7 };
    vector<int> ivec(ia, ia + elem_size);

    int ia2[elem_size];
    vector<int> ivec2(elem_size);
    
    Sub_Vec(ia, ia + elem_size, ia2, ia2 + elem_size, elem_size, greater<int>());
    
    for (size_t i = 0; i < elem_size; i++)
    {
        cout << ia2[i]<<" ";
    }
    cout << endl;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
