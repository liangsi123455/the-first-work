#include<iostream>
using namespace std;
int subset_direct(int* A, int n)
{
    int sum_max = -99999;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum = sum + A[j];
            if (sum > sum_max) {
                sum_max = sum;
            }
        }
    }
    return sum_max;
}
int main()
{
    int A[] = { 1,2,8,-3,-8,5,6,10,5,-6 };
    cout << subset_direct(A, 10) << endl;
    return 0;
    system("pause");
    return EXIT_SUCCESS;
}
