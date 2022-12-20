#include <iostream>
#include<string>

using namespace std;
int main() {
    string n1,n2,n3,n4;
    long long int num;
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
    cout<<"?????: ";
    getline(cin, n1);
    cout<<"Fahsai: Wow!!! "<< n1<<" is a really cool name.\n";
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout<<n1<<": ";
    cin>>num;
    cout<<"Fahsai: I think you may be GEAR "<< (num/10000000)-12<<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n";
    cout<<"Fahsai: What movie do you want to watch?\n";
    cout<<n1<<": ";
    cin.ignore();
    getline(cin, n2);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<n1<<": ";
    getline(cin, n3);
    cout<<"Fahsai: "<<n3<<"....that is OK!!! I'm looking forward to watching "<<n2<<" with you.\n";
    cout<<n1<<": ";
    cin.ignore();
    cout<<"Fahsai: 555+ see you "<<n3<<". Bye Bye \\(^ ^)/";

}
