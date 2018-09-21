#include "std_lib_facilities.h"

int main() {
cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
string first_name;
cin >> first_name;
cout << "Enter a friends name now (also followed by 'enter'):\n";
string friend_name;
cin >> friend_name;
char friend_sex = 0;
cout << "Enter m if the friend is male or f if the friend is female: ";
cin >> friend_sex;
cout<<"How old is " << first_name << "?\n";	
int age;			
cin>> age;
cout << "Dear " << first_name << "," <<"\n";
cout << "How are you? I am doing fine, and i miss you. \n";
cout << "Im writing this letter as I have yet to hear from you and i also wanted to let you know that i am doing relatively well\n";
cout << "Have you seen " << friend_name << " lately? ";



if( friend_sex == 'm') cout<<"If you see "<<friend_name<<" please ask him to call me.\n";
else if( friend_sex == 'f') cout<<"If you see "<<friend_name<<" please ask her to call me.\n";

if(age <= 0 || age >= 110 ) simple_error("you're kidding!");
else cout<<"I hear you just had a birthday and you are "<<age<<" years old.\n";

if( age<12 ) cout<<"Next year you will be "<<age+1<<"\n";
else if( age==17 ) cout<<"Next year you will be able to vote.\n";
else if( age>70 ) cout<<"I hope you are enjoying retirement.\n";
cout<<"Yours sincerely,\n\n";
cout<<"Csaba Szegedi\n";


}
