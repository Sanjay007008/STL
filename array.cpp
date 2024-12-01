#include <bits/stdc++.h>
using namespace std;
// arrays
int main()
{
    size_t n = 6;                                  //(int_64 it can store only positive numbers)for iteration and maintain count/size
    array<int, 9> data{1, 2, 3, 4, 5, 6, 7, 8, 9}; // container based declaration of array
    cout << data.front() << " ";                   // access specifier
    cout << data.at(5) << " ";                     // index based working
    cout << data.back() << " ";
    auto itr = data.begin();
    cout << *itr << " "; //*itr means dereferenceing
    int *x = &data[8];
    x++;
    *x = -100;
    auto itr2 = data.end();
    cout << *itr2 << " ";
    cout << *data.rbegin() << " ";
    cout << "\n";
    int arr[5] = {0, 1, 2, 3, 4};
    cout << "size " << data.size() << "\n";
    int c = data.max_size();
    cout << data.empty() << "\n";

    int len = sizeof(arr) / sizeof(arr[0]);
    cout << "size of the array " << len << "\n";
}