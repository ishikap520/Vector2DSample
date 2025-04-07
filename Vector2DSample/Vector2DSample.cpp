#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int y;
    vector<int> temp;
    vector<vector<int>> years;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the year for Row # " << (i + 1) << " Column # " << (j + 1) << " ==> ";
            cin >> y;
            temp.push_back(y);
        }
        cout << endl;
        years.push_back(temp);
        temp.clear();
    }
    //Printing
    for (int i = 0; i < years.size(); i++)
    {
        for (int j = 0; j < years[i].size(); j++)
        {
            cout << years[i][j] << " ";
        }
        cout << endl;
    }
}
