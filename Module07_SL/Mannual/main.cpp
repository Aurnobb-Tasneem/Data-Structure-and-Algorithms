#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"

using namespace std;

class timeStamp {
private:
    int h, m, s;
public:

    timeStamp() : s(0), m(0), h(0) {}

    timeStamp(int s, int m, int h) : h(h), m(m), s(s) {}

    void print() {

        if (s >= 10)
            cout << s;
        else
            cout << 0 << s;
        cout << " : ";
        if (m >= 10)
            cout << m;
        else
            cout << 0 << m;
        cout << " : ";
        if (h >= 10)
            cout << h;
        else
            cout << 0 << h;
    }

    bool operator<(timeStamp T) {
        if (h < T.h)return true;
        if (h > T.h)return false;
        if (m < T.m)return true;
        if (m > T.m)return false;
        return (s < T.s);
    }

    bool operator ==(timeStamp T) {
        if (h == T.h && m == T.m && s == T.s) { return true; }
        else return false;
    }


};


int main() {
    SortedType<timeStamp> time;
    time.InsertItem(timeStamp(15, 34, 23));
    time.InsertItem(timeStamp(13, 13, 02));
    time.InsertItem(timeStamp(43, 45, 12));
    time.InsertItem(timeStamp(25, 36, 17));
    time.InsertItem(timeStamp(52, 02, 20));
    timeStamp currentTime;
    int l = time.LengthIs();
    for (int i = 0; i < l; i++) {
        time.GetNextItem(currentTime);
        currentTime.print();
        cout<<"\n";
    }


    return 0;
}








