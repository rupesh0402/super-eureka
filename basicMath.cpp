// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;

int countDigits(int n) {
    int count = 0; 
    while(n>0) {
        count++;
        n/=10;
    }
    return count;
}

int reverseNumber(int n) {
    int reverseNum = 0;
    int rem;
    while(n>0) {
        rem = n%10;
        reverseNum = (reverseNum * 10) + rem;
        n/=10;
    }
    return reverseNum;
}

bool palindrome(int n) {
    int original = n;
    int reverseNum = 0;
    int rem;
    while(n>0) {
        rem = n%10;
        reverseNum = (reverseNum * 10) + rem;
        n/=10;
    }
    
    return original == reverseNum;
}

//euclidean 
int findinghcf(int a, int b) {
    while(a > 0 && b > 0) {
        if(a>b) a = a-b;
        else b = b - a; 
    }
    if(a <= 0) return b;
    return a;
}

int armstrong(int num) {
    int original = num;
    int sum = 0;
    while(num>0) {
        sum += pow(num%10, 3);
        num/=10;
    }
    return sum == original;
}

void allDivisors(int num) {
    for(int i= 1; i*i<=num; i++) {
        if(num%i == 0) {
            cout << i << " ";
        
        if(num/i != i) {
            cout << num/i << " ";
        }
        }
    }
}

bool prime(int num ) {
    int count = 0;
    for(int i = 1; i*i<=num; i++) {
        if(num%i == 0) {
            count++;
        
        if(num/i != i) {
            count++;
        }
        }
    }
    if(count > 2) return false;
    return true;
}

int main() {
    //int number = 12;
    //int result = countDigits(number);
    //int result = reverseNumber(number);
    //bool result = palindrome(number);

//int a = 40 , b = 20;
//int result = findinghcf(a, b);

//int num = 1;
//int result = armstrong(num);


int num = 14;
//allDivisors(num);
bool result = prime(num);
string res = result ? "prime" : "not prime"; 
cout <<  res; 
//    cout << result;
    return 0;
}











