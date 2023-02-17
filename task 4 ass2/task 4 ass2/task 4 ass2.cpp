#include <iostream>
#include<string>
#include<cmath>
using namespace std;
  
void func1();                                                         //numbars of the days
void func2();                                                      // start and end the trip
void func3();                                                // in the case of the plane or taxi or private_car
                                                        // AND Parking fee calculated
void func5();                                                 //Calculated entrance fees for the conference  
void func6();                                              // Accommodation fee 
void func7();                                             //Cost per meal
void func8();                                     //output total cost

int  numdays, s_hour , s_min  ,s_sec , e_hour  , e_min , e_sec, numDay_of_taxi, numDays_of_accomodation, days_of_parking;               //s_hour  start time 
               //s_hour  start time 
char y;          //y=":"                                                             //e_hour end time
string  method, plane , taxi , private_car;
double  distanc, cost_plan, cost_of_taxi, cost_of_conference, cost_of_Parking, cost_of_accommodation,cost_of_car_rental, total_paid, total_refund, total_rejected, paid1, reund1, paid2, reund2,cost_of_Parking_in_car_rental, paid3, reund3, paid4, reund4, paid5, reund5;
int breakfast, lunch, dinner;

int main() {
 func1();
 func2();
 func3(); 

 func5();
 func6();
 func7();
 func8();
 
 




    return 0;
}
void func1() { 
    cout << "How many days were spent on the trip: ";
    cin >> numdays;
}
void func2() {
    cout << "At what time did the employee depart on the first day of the trip:";
    cin >> s_hour >> y >> s_min >> y >> s_sec;
    if (s_hour > 23 || s_min > 59 || s_sec > 59 || s_hour < 0 || s_min < 0 || s_sec < 0)
    {
        cout << "not allow entering negative times,or times that are great than 23:59:59.\n";
        cout << "enter time again: ";
        cin >> s_hour >> y >> s_min >> y >> s_sec;
        

    }
    cout << "at what time did the employee arrive back home on the last day of the trip : ";
    cin >> e_hour >> y >> e_min >> y >> e_sec;
    if (e_hour > 23 || e_min > 59 || e_sec > 59 || e_hour < 0 || e_min < 0 || e_sec < 0)
    {
        cout << "not allow entering negative times,or times that are great than 23:59:59.\n";
        cout << "enter time again: ";
        cin >> e_hour >> y >> e_min >> y >> e_sec;
       
    }
}
void func3() {
    cout << "How it traveled by the (the plane or taxi or private_car)? ";
    cin >> method;
    if (method == "plane")
    {
        cout << "How much did the plane tickets cost: ";
        cin >> cost_plan;
        return;
    }
    else if (method == "taxi")
    {
        cout << "How many days did you take a taxi? ";
        cin >> numDay_of_taxi;
        cout << "How much did the taxi cost in all day : ";
        cin >> cost_of_taxi;
        paid1 = cost_of_taxi;
        reund1 = numDay_of_taxi * 100;

    }
    else if (method == "private_car")
    {
        cout << "How much you took the kilometer ?";
        cin >> distanc;
        cout << "How much is the parking fee in private_car ? ";
        cin >> cost_of_Parking;
        paid2 = (distanc * 0.775) + cost_of_Parking;
        reund2 = (distanc * 0.775) + cost_of_Parking;

        
        return;

    }
    else if (method == "car rental")
    {
        cout << "How much did the car rental cost:";
        cin >> cost_of_car_rental;
        cout << "How much is the parking fee in car rental ? ";
        cin >> cost_of_Parking_in_car_rental;
        cout << "How many days you parked the car";
        cin >> days_of_parking;
        paid3 = (days_of_parking * cost_of_Parking_in_car_rental)+ cost_of_car_rental;
        reund3 = (25 * days_of_parking) + cost_of_car_rental;



        return;

    }

    else
        cout << "invalid answer,please enter again : ";
}

void func5() {
    cout << "How much is the entrance fee for the conference or seminar? ";
    cin >> cost_of_conference;

}
void func6() {
    cout << "How much is the accommodation fee? ";
    cin >> cost_of_accommodation;
    cout << "How many days you accomodation ?";
    cin >> numDays_of_accomodation;
    paid4 = cost_of_accommodation * numDays_of_accomodation;
    reund4 = 500 * numDays_of_accomodation;
}
void func7(){
    for (int i = 1;i <= numdays;i++) {
        cout << "Breakfast price per day " << i<<"?";
        cin >> breakfast;
        breakfast++;
        cout << "The price of the lunch meal per day " << i<<"?";
        cin >> lunch;
        lunch++;
        cout << "The price of the evening meal " << i<<"?";
        cin >> dinner;
        dinner++;
        if  (i == 1)
        {
            if (e_hour < 9)
                breakfast = 0;

            if (e_hour < 13)
               lunch = 0;

            if (e_hour < 19)
               dinner = 0;

        }
        if (i == numdays)
        {
            if (s_hour > 8)
                breakfast = 0;

            if (s_hour > 12)
               lunch = 0;

            if (s_hour > 18)
                dinner = 0;
        }
        paid5 = breakfast + lunch + dinner;
        reund5 = (40 * numdays) + (60 * numdays) + (80 * numdays);
    }
    
}
void func8() {
    total_paid = cost_plan + paid1 + paid2 + paid3 + cost_of_conference + paid4 + paid5;
    total_refund = cost_plan + cost_of_conference + reund1 + reund2 + reund3 + reund4 + reund5;
    total_rejected = abs(total_paid - total_refund);
    cout << "total_paid  = " << total_paid << "EGP\n";
    cout<<" total_refund = "<< total_refund << "EGP\n";
    cout<<" total_rejected = "<< total_rejected << "EGP\n";

    
   
 }



        