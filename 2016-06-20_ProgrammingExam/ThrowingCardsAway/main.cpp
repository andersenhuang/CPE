#include <iostream>
#include <vector>
using namespace std;



vector<int> cards;
vector<int> dicarded_cards;

void PopFront()
{
    for(int i=1;i<cards.size();i++)
    {
        cards[i-1] = cards[i] ;
    }
    cards.pop_back();

}

int main()
{
    int num;

    while(cin >> num)
    {
        cards = {};
        dicarded_cards = {};
        if(num == 0 )
            break;

        for(int i=1; i<=num; i++)
        {
            cards.push_back(i);
        }

        while(true)
        {
            if(cards.size()==1)
                break;

            dicarded_cards.push_back(cards[0]);
            PopFront();

            if(cards.size()==1)
                break;

            int temp = cards[0];
            PopFront();
            cards.push_back(temp);
        }

        cout << "Discarded cards: ";
        for(int i = 0 ; i< dicarded_cards.size()-1 ; i++ )
        {
            cout << dicarded_cards[i] << ", ";
        }
        cout << dicarded_cards[dicarded_cards.size()-1] << endl;
        cout << "Remaining card: " << cards[0] << endl;





    }

    return 0;
}
