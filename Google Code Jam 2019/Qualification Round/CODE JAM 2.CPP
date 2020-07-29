#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
struct imps{
    int num;
    string st;
};
int main(){

    int memos ;
    cin >> memos ;

    imps arr[memos] ;

    for (int i = 0; i < memos; ++i) {
        cin>> arr[i].num;
        cin>> arr[i].st;
    }
    int count{0};
    for (int j = 0; j < memos; ++j) {

        for (int i = 0; i < arr[j].st.length(); ++i) {

            if (arr[j].st[i] == 'S'){
                arr[j].st[i] = 'E';
            } else {
                if (arr[j].st[i] == 'E')
                    arr[j].st[i] = 'S';
            }
        }
        cout << "Case #" << count++ << ": " << arr[j].st << endl ;
    }

    getch();
}
