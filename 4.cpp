#include<iostream>
#include<cmath>

using namespace std;

void printNum(double x){
	if(x < 0){
		cout << "(" << x << ")";
	}else{
		cout << x;
	}
}

void printPow(double x, double k){
	printNum(x);
	cout << "^";
	printNum(k);
}

int main(){
	double a[] = {3,0,-2,44,-4,1,69,2,-5,2,-2,0,7,-12,4,1,6,35,0,5};
	double b[] = {4,1,0,117,10,1,260,2,-12,-2,-2,-1,25,0,7,2,9,12,-49,0};
	double c[] = {5,1,2,125,25,2,-269,1,-13,0,-1,6,25,12,11,3,6,37,49,5};
	int k;
	cout << "Enter k: ";
	cin >> k;
	int i = 0, count = 0;
	while(i < 20){
        double x = pow(c[i],k);
        double y = pow(a[i],k);
        double z = pow(b[i],k);
		if(x == y+z){
            printPow(c[i],k);
			cout << " = ";
			printPow(a[i],k);
			cout << " + ";
			printPow(b[i],k);		
            cout << endl;	
            count++;
        }
        ++i;
	}
	cout << "Totally " << count << " place(s)"; 
	return 0;
}

/*
Enter k: 1
1^1 = 0^1 + 1^1
2^1 = 1^1 + 1^1
0^1 = 2^1 + (-2)^1
11^1 = 4^1 + 7^1
3^1 = 1^1 + 2^1
5^1 = 5^1 + 0^1
Totally 6 place(s)

Enter k: 2
5^2 = 3^2 + 4^2
1^2 = 0^2 + 1^2
2^2 = (-2)^2 + 0^2
125^2 = 44^2 + 117^2
(-269)^2 = 69^2 + 260^2
(-13)^2 = (-5)^2 + (-12)^2
12^2 = (-12)^2 + 0^2
37^2 = 35^2 + 12^2
49^2 = 0^2 + (-49)^2
5^2 = 5^2 + 0^2
Totally 10 place(s)

Enter k: -1
1^(-1) = 2^(-1) + 2^(-1)
(-1)^(-1) = (-2)^(-1) + (-2)^(-1)
Totally 2 place(s)
*/