
// git init
// git add .
// git commit -m "COMMIT MESSAGE"
// git remote add origin https://github.com/td0g51/Distance-Between-Points.git
// git push -u origin master


// git config --global user.email "bob@example.com"
// git config --global user.name "Bob"

#include <iostream>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;

const float epsilon = 1e-6;
/* 0.000001 accuracy up to 6 decimal points
        Function prototypes
        Function that calculates the distance between two points
        x1, y1, x2, y2 and returns the calculated value */
double findDistance(int, int, int, int);
//test function that runs automated testing

void test();

int main() {
    do {
        int x1, y1, x2, y2;
        // variables th store two points (x1, y1) and (x2, y2)
        char ch;
        //FIXME - 10 bonus points - add loop until user wants to quit

        system("cls");
        cout << "Program calculates distance between 2 points on a 2d coordinates." << endl;
        cout << "Enter a point in the form (x, y): ";
        // parse the input stream

        cin >> ch >> x1 >> ch >> y1 >> ch;
        // value stored in ch is ignored

        printf("(x1, y1) = (%d, %d)\n", x1, y1);
        cout << "Enter a second point in the form (x, y): ";
        cin >> ch >> x2 >> ch >> y2 >> ch;
        // value stored in ch is ignored

        printf("(x2, y2) = (%d, %d)\n", x2, y2);
        test();
        cout << "The Distance between (x1, y1) and (x2, y2) is: " << findDistance(x1, y1, x2, y2) << endl;
        /* FIXME - call findDistance function passing proper arguments
        FIXME - Using printf function display the returned distance with proper description */

        cin.ignore(1000, '\n');
        cin.get();
    } while (1);
    return 0;
}

double findDistance(int x1, int y1, int x2, int y2) {
    // FIXME - Find the distance between (x1, y1) and (x2, y2)
    // following the algorithm step 1
    // return the calculated distance
    float distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return distance;
}

void test() {
    float i = 2.23607;
    assert(findDistance(4, 3, 5, 1) - i <= epsilon);
    assert(findDistance(5, 2, 6, 3) - i <= epsilon);
    assert(findDistance(6, 1, 7, 2) - i <= epsilon);
    cout << "all tests passed..." << endl;
}
