#include <iostream>
#include <string>
using namespace std;

enum Suit { CLUB, DIAMOND, HEART, SPADE };
char RANKS[] = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};

const int NUMBER_RANKS = 13;
const int NUMBER_SUITS = 4;

Suit get_suit(int index) {
    switch (index) {
        case 0:
            return CLUB;
        case 1:
            return DIAMOND;
        case 2:
            return HEART;
        case 3:
            return SPADE;
    }
}

string suit_to_string(Suit suit) {
    switch (suit) {
        case CLUB:
            return "CLUB";
        case DIAMOND:
            return "DIAMOND";
        case HEART:
            return "HEART";
        case SPADE:
            return "SPADE";
    }
}

char get_rank(int index) {
    return RANKS[index];
}

struct Card {
    Card* next;
	char rank;
	Suit suit;

    ~Card() {
        if (next != NULL) {
            delete next;
        }
    }
};

struct Deck {
	int size;
	Card* root;

	Deck() {
        bool first = true;
        Card* prev;

		size = NUMBER_RANKS * NUMBER_SUITS;

		for (int i = 0; i < NUMBER_RANKS; i++) {
			for (int j = 0; j < NUMBER_SUITS; j++) {
                Card* card = new Card();
                
                card->rank = get_rank(i);
                card->suit = get_suit(j);

                if (first) {
                    first = false;
                    root = card;
                    prev = root;
                }

                prev->next = card;
                prev = card;
			}
		}
	}

	~Deck() {
        delete root;
    }

    void print() {
        Card* card = root;
        cout << "Size: " << size << '\n';

        while (card != NULL) {
            cout << card->rank << '/' << suit_to_string(card->suit) << '\n';
            card = card->next;
        }
    }
};


int main(int argc, char** argv) {
    Deck deck;
    deck.print();
    return 0;
}
