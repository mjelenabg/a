#include <iostream>	

using namespace std;

int main()
{
  double v,t,bmi;
  char pol;
  
  cout<<"Unesite svoju visinu u m:\n";
  cin>>v;
  if(v>1 && v<3){
  cout<<"Unesite svoju tezinu u kg:\n";
  cin>>t;
  if(t>0 && t<500){
	  bmi=t/(v*v);
  cout<<"Unesite m ako ste muskog pola ili z ako ste zenskog:\n";
  cin>>pol;
 switch (pol){
		case 'm':
			if (bmi<20.7){
			cout<<"Vas BMI je jednak "<<bmi<<" i prenizak je\n";}
		 else if(bmi>=20.7 && bmi<= 26.4){
			 cout<<"Vas BMI je jednak "<<bmi<<" i idealan je\n";}
		 else if(bmi>=26.5 && bmi<=27.8){
			 cout<<"Vas BMI je jednak "<<bmi<<" i malo je iznad normale\n";}
		 else if(bmi>=27.9 && bmi<=31.1){
			 cout<<"Vas BMI je jednak "<<bmi<<" i visok je\n";}
		 else if(bmi>=31.2 && bmi<=45.4){
			 cout<<"Vas BMI je jednak "<<bmi<<" i previsok je\n";}
		 else{
			 cout<<"BMI je jednak "<<bmi<<" i izrazito je visok\n";}
		 break;
		case 'z':
		if (bmi<19.1){
			cout<<"Vas BMI je jednak "<<bmi<<" i prenizak je\n";}
		 else if(bmi>=19.1 && bmi<= 25.8){
			 cout<<"Vas BMI je jednak "<<bmi<<" i idealan je\n";}
		 else if(bmi>=25.9 && bmi<=27.3){
			 cout<<"Vas BMI je jednak "<<bmi<<" i malo je iznad normale\n";}
		 else if(bmi>=27.4 && bmi<=32.2){
			 cout<<"Vas BMI je jednak "<<bmi<<" i visok je\n";}
		 else if(bmi>=32.3 && bmi<=44.8){
			 cout<<"Vas BMI je jednak "<<bmi<<" i previsok je\n";}
		 else{
			 cout<<"BMI je jednak "<<bmi<<" i izrazito je visok\n";}
		 break;
		default:cout<<"Uneta vrednost pola je neodgovarajuca, ponovo pokrenite program\n";}}
  else {cout<<"Uneta vrednost tezine je neodgovarajuca, ponovo pokrenite program\n";}}
  else {cout<<"Uneta vrednost visine je neodgovarajuca, ponovo pokrenite program\n";}
  system("pause");
  return 0;
}