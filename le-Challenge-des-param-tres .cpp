#include <iostream>
using namespace std;
#include <vector>

void processParameters(const vector<int> &params)
{
    cout << "Handling " << params.size() << " parameters..." << endl;
}

int main()
{
    try
    {
        for (int i = 1;; i *= 2)
        {
            vector<int> params(i, 1);
            processParameters(params);
        }
    }
    catch (const bad_alloc &e)
    {
        cout << "Error: Memory allocation failed: " << e.what() << endl;
    }
}
