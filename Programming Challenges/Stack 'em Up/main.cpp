#include <iostream>
#include <string>

using namespace std;

string get_suit(int n,int mod)
{
    int number;
    
    number = n/13;
    if(mod!=0)
        number++;
        
    switch(number)
    {
        case 1:
            return "Clubs";
        break;
        
        case 2:
            return "Diamonds";
        break;
        
        case 3:
            return "Hearts";
        break;
        
        case 4:
            return "Spades";
        break;
    };
}

string get_card(int n)
{
    int mod = n%13;
    string suit = get_suit(n, mod);
    
    switch(mod)
    {
        case 1:
            return "Two of " + suit;
        break;
        
        case 2:
            return "Three of " + suit;
        break;
        
        case 3:
            return "Four of " +suit;
        break;
        
        case 4:
            return "Five of " +suit;
        break;
        
        case 5:
            return "Six of " + suit;
        break;
        
        case 6:
            return "Seven of " + suit;
        break;
        
        case 7:
            return "Eight if " + suit;
        break;
        
        case 8:
            return "Nine of " +suit;
        break;
        
        case 9:
            return "Ten of "+suit;
        break;
        
        case 10:
            return "Jack of "+suit;
        break;
        
        case 11:
            return "Queen of "+suit;
        break;
        
        case 12:
            return "King of"+suit;
        break;
        
        case 0:
            return "Ace of "+ suit;
        break;
        
    };
}



int main()
{
    cout<< get_card(29)<<endl;
    return 1;
}
