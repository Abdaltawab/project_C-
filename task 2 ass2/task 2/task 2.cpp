/******************************************************************************
    ID for the first student: 20200310
*the name for the first student: Abdaltawab Hussien Abdaltawab
      ID for the second student: 20200156
*the name for the second student: Hassan Mohamed Nafed Mohamed
                              
*******************************************************************************/

#include <iostream>
#include<string>

using namespace std;

void func1();                            //Fuction It takes the name of the 3 candidates
void func2();                     //Fuction it works with the old elections.
void func3();                //Fuction it works with the new elections.
void func4();           //Fuction shows who is the winner in both countries and looks at it as output

string s1, s2, s3, s4, s5, s6;
int voters;
int count1 = 0, count2 = 0, count3 = 0, point1 = 0, point2 = 0, point3 = 0;

int main()
{
    func1();
    func2();
    func3();
    func4();

    return 0;
}
void func1() {
    cout << "Enter the names of 3 condidates : ";
    cin >> s1 >> s2 >> s3;
      while(s1==s2||s2==s3||s3==s1){
          cout<<"you can't repeat names,please enter again : ";
            cin>>s1>>s2>>s3;

      }
    cout << "Enter the numbers of voters :";
    cin >> voters;

}
void func2() {
    for (int i = 0; i < voters; i++) {
        cout << "Enter your first choice of 3 condidates :";
        cin >> s4;


        cout << "Enter name of 3 condidates in order of preference:";
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
    }


}
void func3() {

    
    if (s4 == s1) {
        point1 += 3;
        if (s5 == s2) {
            point2 += 2;
            point3 += 1;
        }
        else {
            point2 += 1;
            point3 += 2;
        }
                                                                        //da el new system
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
void func4() {                        // da el output pta7 el old w new

    if (count1 > count2 && count1 > count3) {
        cout << "The winner according to the normal elecrtion:  " << s1 << "\n";
    }
    if (count2 > count1 && count2 > count3) {
        cout << "The winner according to the normal elecrtion:  " << s2 << "\n";
    }
    if (count3 > count2 && count3 > count1) {
        cout << "The winner according to the normal elecrtion:  " << s3 << "\n";
    }
    if (point1 > point2 && point1 > point3) {
        cout << "The winner according to the new point system election:" << s1;
    }
    if (point2 > point1 && point2 > point3) {
        cout << "The winner according to the new point system election:" << s2;
    }
    if (point3 > point2 && point3 > point1) {
        cout << "The winner according to the new point system election:" << s3;
    }





}

