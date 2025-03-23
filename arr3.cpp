// WAP to reverse/all operation elements of array.

#include <iostream>
using namespace std;

int arr[8] ={12,45,65,1,89,23,31,9};
void sumElements();
void largestElements();
void reverseElements();
void displayElements();
void oddEvenElements();
void multMatrix();

int main(){
    cout <<"Display element : " ;
    displayElements();
    sumElements();
    largestElements();
    reverseElements();
    oddEvenElements();
    multMatrix();

    return 0;
}

//sum of all elements of array
void sumElements(){
    int sum =0;

    for(int i=0; i<8; i++){
        sum += arr[i];
    }
    cout <<"Sum of elements of array : "  <<sum <<endl;
}

//find largest elements of array
void largestElements(){
    int max = arr[0];

    for(int i=0; i<8; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout <<"Largest elements of array : " <<max <<endl;
}

//reverse elements of array
void reverseElements(){
    int num1,num2;
    for(int i=0; i<8/2; i++){
        num1 = arr[i];
        num2 = arr[8-i-1];
        arr[i] = num2;
        arr[8-i-1] = num1;
    }
    cout <<"Display  reverse element : ";
    displayElements();
}

//find odd and even elements of array
void oddEvenElements(){
    for(int i=0; i<8; i++){
        if(arr[i] % 2 == 0){
            cout <<"Even elements : " <<arr[i] <<endl;
        } else {
            cout <<"Odd elements : " <<arr[i] <<endl;
        }
    }
}

//display of elements of array
void displayElements(){
    for(int i=0; i<8; i++){
        cout <<arr[i]  <<", ";
    }
    cout <<endl;
}

//print product of two matrix
void multMatrix(){
    int arr2[8]={1,2,3,4,5,6,7,8};
    int result[8];

    cout <<"Result array of elements : \n";
    for(int i=0; i<8; i++){
        result[i] = arr[i] * arr2[i];
        cout <<arr[i] <<" * " <<arr2[i] <<" = " <<result[i] <<"\n";
    }
    cout <<endl;
}