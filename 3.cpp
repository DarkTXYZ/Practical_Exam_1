#include <iostream>

using namespace std;

string checkDangAvailability(int h1 , int m1 , string c1 , int h2 , int m2 , string c2){
    if(c1 == "PM")
        h1 += 12;
    if(c2 == "PM")
        h2 += 12;
    //printf("%d %d - %d %d\n",h1,m1,h2,m2);
    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;
    int temp ;
    if(t1 > t2){
        temp = t1;
        t1 = t2;
        t2 = temp;
    }
    if(t1 >= 8*60 + 30 && t2 <= 18*60 + 30)
        return "Yes";
    else
        return "No";  
}

int main(){
    cout << checkDangAvailability(10,25,"AM",12,45,"AM") << endl;
    //Yes
    cout << checkDangAvailability(8,25,"AM",1,0,"PM")<< endl;
    //No
    cout << checkDangAvailability(8,45,"AM",1,0,"PM")<< endl;
    //Yes
    cout << checkDangAvailability(6,0,"AM",8,0,"AM")<< endl;
    //No
    cout << checkDangAvailability(5,0,"PM",6,20,"PM")<< endl;
    //Yes
    cout << checkDangAvailability(8,30,"AM",6,30,"PM")<< endl;
    //Yes
    cout << checkDangAvailability(8,30,"AM",8,31,"AM")<< endl;
    //Yes
    cout << checkDangAvailability(3,50,"PM",7,0,"PM")<< endl;
    //No
}











