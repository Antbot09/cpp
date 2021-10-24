#include <iostream>
using namespace std;

int main()
{
    int value[] = {1, 2, 4, 6};
    int max = value[0];
    int min = value[0];
    for (int i = 1; i < 4; i++)
    {
        if (value[i] > max)
        {
            max = value[i];
        }
        else
        {
            if (value[i] < min)
            {
                min = value[i];
            }
        }
    }
    cout << "The max value is " << max << endl;
    cout << "The min value is " << min << endl;
   
    return 0;
}