#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;

int main()
{
    int item1,item2,item;
    UnsortedType<int> ul1;
    UnsortedType<int> ul2;
    UnsortedType<int> ml;
    ul1.InsertItem(10);
    ul1.InsertItem(7);
    ul1.InsertItem(9);
    ul2.InsertItem(10);
    ul2.InsertItem(7);
    ul2.InsertItem(9);
    ul1.ResetList();
    ul2.ResetList();
    ul1.GetNextItem(item1);
    ul2.GetNextItem(item2);
    while(ul1.LengthIs()>0&&ul2.LengthIs()>0){
        ul1.GetNextItem(item1);
        ul2.GetNextItem(item2);
        if (ul1.LengthIs()>0||ul2.LengthIs()>0)
        {break;}
        if (ul1.LengthIs()>0&&ul2.LengthIs()>0) {
            if(item1<item2){
                ml.InsertItem(item1);
                ul1.DeleteItem(item1);
                ul1.GetNextItem(item1);
            }

            else if(item1>item2){
                ml.InsertItem(item2);
                ul2.GetNextItem(item2);
            }
            else {
                ml.InsertItem(item1);
                ul1.DeleteItem(item1);
                ul2.DeleteItem(item2);
                ul1.GetNextItem(item1);
                ul2.GetNextItem(item2);
            }
        }


    }
    while(ul1.LengthIs()>0){
        ul1.GetNextItem(item1);
        ml.InsertItem(item1);
        ul1.DeleteItem(item1);

    }
    while(ul2.LengthIs()>0){
        ul2.GetNextItem(item2);
        ml.InsertItem(item2);
        ul2.DeleteItem(item2);

    }
    ml.ResetList();
cout<<"adadad";
    while(ml.LengthIs() > 0){
        ml.GetNextItem(item);
        cout << item << " ";
        ml.DeleteItem(item);

    }











   /* int m,n,value,item,item1,item2;

    cin>>m;
    for(int i=0; i<5; i++)
    {
        cin>>value;
        ul1.InsertItem(value);
    }
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>value;
        ul2.InsertItem(value);
    }

    UnsortedType<int> ml;
    ul1.ResetList();
    ul2.ResetList();
    while(ul1.LengthIs()>0&&ul2.LengthIs()>0){
        ul1.GetNextItem(item1);
        ul2.GetNextItem(item2);
         if (ul1.LengthIs() == 0 || ul2.LengthIs() == 0)
            {break;}
            if (ul1.LengthIs() > 0 && ul2.LengthIs() > 0) {
                 if(item1<item2){
            ml.InsertItem(item1);
            ul1.GetNextItem(item1);
        }

        else if(item1>item2){
            ml.InsertItem(item2);
            ul2.GetNextItem(item2);
        }
        else {
            ml.InsertItem(item1);
            ul1.GetNextItem(item1);
            ul2.GetNextItem(item2);
        }
            }


    }
    while(ul1.LengthIs() > 0){
            ul1.GetNextItem(item1);
         ml.InsertItem(item1);

    }
    while(ul2.LengthIs() > 0){
            ul2.GetNextItem(item2);
         ml.InsertItem(item2);

    }
    ml.ResetList();

    while(ml.LengthIs() > 0){
            ml.GetNextItem(item);
         cout << item << " ";

    }
    cout<<"hello";
*/
    return 0;
}
