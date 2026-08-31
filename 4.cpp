#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    cout << "Elements of the collection are: " << endl;

    for (auto num : arr)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}