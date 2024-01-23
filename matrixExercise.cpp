#include<iostream>
using namespace std;

int main() {
    int chart[5][5];

    for(int i = 0; i < 5; i++) {
        int rollNo = 0;
        cout << "Please type the roll no of student " << i+1 << " :";
        cin >> rollNo;
        chart[i][0] = rollNo;
    }

    for(int i = 0; i < 5; i++) {
        int test2 = 0;
        cout << "Please type the marks of test1 of Student " << i+1 << " :";
        cin >> test2;
        chart[i][1] = test2;
    }

    for(int i = 0; i < 5; i++) {
        int test2 = 0;
        cout << "Please type the marks of test2 of Student " << i+1 << " :";
        cin >> test2;
        chart[i][2] = test2;
    }

    for(int i = 0; i < 5; i++) {
        int test3 = 0;
        cout << "Please type the marks of test3 of Student " << i+1 << " :";
        cin >> test3;
        chart[i][3] = test3;
    }
    

    
    for(int i = 0; i < 5; i++) {
        int a = chart[i][1]; // Initialize with a large value
        int minRow, minCol;

        for(int j = 1; j < 4; j++) {
            if (chart[i][j] <= a) {
                a = chart[i][j];
                minRow = i;
                minCol = j;
            }
        }
        int saveVal[]={minRow,minCol};
        chart[minRow][minCol] = 0;

        int sum = 0;
        for(int j = 1; j < 4; j++) {
            sum += chart[i][j];
        }

        chart[i][4] = sum;
        
        
        chart[saveVal[0],saveVal[1]];
    }

    for(int i = 0; i < 5; i++) {
    	cout<<"the summ of total sessional marks of student "<<i+1<<" is :";
    	cout<<chart[i][4]<<endl;
    }

    return 0;
}
