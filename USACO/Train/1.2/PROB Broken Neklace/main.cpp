/*
ID: ibrahim54
LANG: C++
PROG: beads
*/

#include <iostream>;

using namespace std;

int main()
{
    int beadCount;
    cin >> beadCount;

    int bestScore = -1;

    string necklace;
    cin >> necklace;

    for (int i = 1; i < beadCount; ++i) {
        string firstHalf, secondHalf;
        int storedScore = 0;

        for (int j = 0; j < i; ++j) {
            firstHalf += necklace[j];

            if(j == 0)
            {
                storedScore++;
                continue;
            }
            
            if(necklace[j] == firstHalf[j-1] || firstHalf[j] == 'w')
                storedScore++;
        }

        for (int j = beadCount - 1; j > i; --j) {
            secondHalf += necklace[j];

            if(j == beadCount - 1)
            {
                storedScore++;
                continue;
            }

            if(necklace[j] == necklace[j-1] || secondHalf[j] == 'w')
                storedScore++;


            neckl
        }

        if(storedScore > bestScore)
        {
            bestScore = storedScore;
        }

        cout << endl;
        cout << "Original:" << necklace << endl;
        cout << firstHalf << " | " << secondHalf << endl;
        cout << bestScore << endl;
        cout << endl;
    }
    return 0;
}