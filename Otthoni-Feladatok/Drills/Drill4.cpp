#include "/home/csapi/Templates/std_lib_facilities.h"

int main(){
	
	double small = 200;
	double large = 0;
	double InputValue = 0;
	string unit;
	vector<double> Values ;
	

  while(unit != "quit") {
	cout<<"\nEnter a number : ";
	cin>>InputValue;
	cout<<"\nEnter a unit (cm, m, in, ft): ";
	cin>>unit;


	if(unit == "m") {
		Values.push_back(InputValue);
	}
	else if(unit == "cm") {
		Values.push_back(InputValue/100);
	}
	else if(unit == "in") {
		Values.push_back(InputValue*0.0254);
	}
	else if(unit == "ft") {
		Values.push_back(InputValue*0.3048);
	}
	else {
		cout<<"\nIncorrect unit."<<endl;
	}

		if(InputValue<small) {
			small = InputValue;
		}
		else if (InputValue>large) {
			large = InputValue;
		}
	}
	sort(Values);
	cout<<"smallest value : "<<small<<endl;
	cout<<"largest value : "<<large<<endl;
	cout<<"size of the vector : "<<Values.size()<<endl;
	cout<<"values sorted : "<<endl;
	for(int i = 0;i<Values.size();i++) {
	cout<<Values[i]<<"m"<<endl; 
	}
	
	return 0;


}