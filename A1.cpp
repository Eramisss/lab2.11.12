#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <iostream>
#include <vector>
using namespace std;

int solve(vector<int> A)
{
    int c=0;
    int n=A.size();
    int prev=A[0];
    for (int i=0; i<n; i++)
        if (A[i]>prev)
        {
            prev=A[i];
            c++;
        }
    return c;

}

TEST_CASE("Dulustan's tests"){
    CHECK(solve({100000}) == 0);
    CHECK(solve({1,4,7,100}) == 3);
    CHECK(solve({-100,99,88,55}) == 1);
    CHECK(solve({1,-2,3,-4,5,-6,7,-7,8,-8,9,-9}) == 5);
}

//минимум 4 теста
TEST_CASE("Student's tests"){
    CHECK(solve({0}) == 0);
    CHECK(solve({0,0,0,0}) == 0);
    CHECK(solve({100,99,88,55}) == 0);
    CHECK(solve({20,21,19,29,30}) == 3);
}

// main отвечает за ввод-вывод
// int main()
// {

// }
