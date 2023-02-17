#include<iostream>
#include<string>
using namespace std;
 
            
int main() {

    string s1, s2, s3, s4, s5, s6;
    int voters, count1=0, count2=0, count3=0, point1=0, point2=0, point3=0;
    cout << "entr the names ofthe 3 condates:" ;
    cin >> s1 >> s2 >> s3;  
    //dool el main candidates
    cout << "entr the numbers of the voters : ";
    cin >> voters;
   
    for (int i = 0; i < voters; i++) {
        cout << "entre your first chois :";
        cin >> s4;
        cout << "entr name of 3 condidates in order of preference:";
        cin >> s4 >> s5 >> s6;
        if (s4 == s1) {
            count1++;
        }
                                       // da el old system
        else if (s4 == s2) {
            count2++;
        }
        else if (s4 == s3) {
            count3++;
        }
        
                                       //da el new system
        if (s4 == s1) {
            point1 += 3;
            if (s5 == s2) {
                point2 += 2;
                point3 += 1;
            }
            else {
                point2 += 1;
                point3 += 2;t
            }

        }
        else if (s4 == s2) {
            point2 += 3;
            if (s5 == s1) {
                point2 += 3;
                point3 += 1;
            }
            else {
                point2 += 1;
                point3 += 2;
            }
        }
        else if (s4 == s3) {
            point3 += 3;
            if (s5 == s2) {
                point2 += 3;
                point1 += 1;
            }







        }

    }
    if (count1 > count2 && count1 > count3) {
        cout << "the winner according to the normal elecrtion:  " << s1<<"\n";
    }
    if (count2 > count1 && count2 > count3) {
        cout << "the winner according to the normal elecrtion:  " << s2<<"\n";
    }
    if (count3 > count2 && count3 > count1) {
        cout << "the winner according to the normal elecrtion:  " << s3<<"\n";
    }
    if (point1 > point2 && point1 > point3) {
        cout << "the winner according to the new point system election:" << s1;
    }
    if (point2 > point1 && point2 > point3) {
        cout << "the winner according to the new point system election:" << s2;
    }
    if (point3 > point2 && point3 > point1) {
        cout << "the winner according to the new point system election:" << s3;
    }


    


        return  0;
}

    
    
