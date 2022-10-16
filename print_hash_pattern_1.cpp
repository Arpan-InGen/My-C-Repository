/* To print the following pattern:

########
 ######
  ####
   ## 

*/

#include <iostream>

using namespace std;

int main()
{
    for (int row = 0; row < 4; row++)
    {
        int space = row;
        while (space > 0)
        {
            cout << " ";
            space--;
        }

        for (int hashNum = 1; hashNum <= 8 - (2 * row); hashNum++)
            cout << "#";

        cout << "\n";
    }
    return 0;
}