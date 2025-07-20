#include <iostream>
using namespace std;

int main(){
    int age = 22;
    float pi = 3.14;
    double length = 245.9876;
    bool isStudent = true;
    char name = 'P';

    cout << "age: " << age << endl;
    cout << "pi:" << pi << endl;
    cout << "length:" << length << endl;
    cout <<"char:" << name << endl;
    cout <<"Is student:" << (isStudent ? "Yes" : "No") << endl;
    return 0;
}


//Take input percentage of a student and print the grade according according to marks 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "Percentage obtained by students is :";
    cin>> n;

    if ( n>80 && n<=100){
        cout<<n<< " is very good"<<endl;
    }
    if ( 61<n && n<=80){
        cout<<n<< " is Good"<<endl;
    }
    if ( 41<n && n<=60){
        cout<<n<< " is Average"<<endl;
    }
    if ( n<=40){
        cout<<n<< " is Fail"<<endl;
    }
}

//print even numbers
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n;";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0){
            cout<<"the value is:"<<i<<endl;
        }
    }
}




#include<iostream>
using namespace std;
 int main(){

 }