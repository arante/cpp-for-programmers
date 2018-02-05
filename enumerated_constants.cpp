#include <iostream>

using namespace std;

int main()
{
        enum MONTH {
                January, February, March, April, May, June,
                July, August, September, October, November, December
        };

        MONTH bestMonth;
        
        bestMonth = July;

        if (bestMonth == July) {
                cout << "I'm not so sure July is the best month.\n";
        }

        return 0;
}
