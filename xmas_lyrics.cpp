#include <iostream>
using namespace std;

int main() 
{
    cout << "The Twelve Days of Christmas Lyrics:\n\n";

    for (int day = 1; day <= 12; day++) {
        cout << "On the " << day << " day of Christmas my true love sent to me\n";

        switch (day) {
            case 12:
                cout << "Twelve drummers drumming,\n";
                // Fall through
            case 11:
                cout << "Eleven pipers piping,\n";
                // Fall through
            case 10:
                cout << "Ten lords a-leaping,\n";
                // Fall through
            case 9:
                cout << "Nine ladies dancing,\n";
                // Fall through
            case 8:
                cout << "Eight maids a-milking,\n";
                // Fall through
            case 7:
                cout << "Seven swans a-swimming,\n";
                // Fall through
            case 6:
                cout << "Six geese a-laying,\n";
                // Fall through
            case 5:
                cout << "Five golden rings,\n";
                // Fall through
            case 4:
                cout << "Four calling birds,\n";
                // Fall through
            case 3:
                cout << "Three French hens,\n";
                // Fall through
            case 2:
                cout << "Two turtle doves,\n";
                cout << "And a partridge in a pear tree.\n\n";
                break;
            case 1:
                cout << "A partridge in a pear tree.\n\n";
                break;  // End of the switch for day 1
        }
    }
    return 0;
}