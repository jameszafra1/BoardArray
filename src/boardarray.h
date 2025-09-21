#include <iostream>
#include "board.h"
#define SIZE 5
using namespace std;

class BoardArray : public Board {
    Entry* array;
    int index;

    public:
        BoardArray() {
            array = new Entry[SIZE];
            index = 0;
        }

<<<<<<< HEAD
       void add(Entry* entry) {
    if (index < SIZE) {
        int i = index - 1;
        while (i >= 0 && array[i].score < entry->score) {
            array[i + 1] = array[i];
            i--;
=======
        void add(Entry* entry) {
            // TODO: IMPLEMENT THIS FUNCTION
            // ALGORITHM IS PROVIDED IN INSTRUCTIONS.TXT
            return;
>>>>>>> 8faef5761d96023510ba3a2e61bf4770615e7616
        }
        array[i + 1] = *entry;
        index++;
    } 
    else {
        if (entry->score <= array[index - 1].score) {
            cout << entry->name << "'s score is too low to be added!\n";
            return;
        }
        int i = index - 2;
        while (i >= 0 && array[i].score < entry->score) {
            array[i + 1] = array[i];
            i--;
        }
        array[i + 1] = *entry;
    }
}


        void print() {
            for (int i = 0; i < index; i++) {
                cout << i + 1 << ". ";
                array[i].print();
            }
        }
};