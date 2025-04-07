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
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    double sales;
    double ts = 0;
    vector<double> temp;
    vector<vector<double>> Sales;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the Sales for Row # " << (i + 1) << " Column # " << (j + 1) << " ==> ";
            cin >> sales;
            ts += sales;
            temp.push_back(sales);
        }
        cout << endl;
        temp.push_back(ts);
        Sales.push_back(temp);
        temp.clear();
        ts = 0;
    }
    //Printing
    for (int i = 0; i < Sales.size(); i++)
    {
        for (int j = 0; j < Sales[i].size(); j++)
        {
            cout << Sales[i][j] << " ";
        }
        cout << endl;
    }
}
