/*
Write a storyline.
My own story.
First choice(business/invest)
I study coding at the age of 29.
Second choice(no coding/no coding)
I will get a job.
Third choice
I will start a business.
*/

#include <iostream>

using namespace std;
int main () {
	
	int age = 29;
	int energy = 500;
	int skills = 0;
	char firstChoice;
	int secondChoice;
	int thirdChoice;
	char cont;
    
	for (energy = 500; skills<800&&age<=60&&energy>=-900;energy--){ 
		cout<<"You are an architect of your life. ";
		cout<<"You are "<<age<<". You want to be rich.\nYou will have choices.";
		cout<<"You can choose either doing business or investing. \nWhat is your choice? (b for business/i or invest) : ";
		cin>>firstChoice;
		//check if they have the right answer
		while (firstChoice!='b'&&firstChoice!='B'&&firstChoice!='i'&&firstChoice!='I'){
			age++;
			cout<<"\n\nThat is not a valid answer but you just aged.\nYour age : "<<age<<"\n";
			cout<<"What is your choice? (b for business/i or invest) : ";
			cin>>firstChoice;
		}
		age++;
    
   		//make the screen blank
		system("CLS");
    
		if(firstChoice == 'b'||firstChoice == 'B'){
        	cout<<"You chose BUSINESS. Business is definitely one of the greatest ways to create wealth. What is the best thing to do?\nYou have two choices.";
			cout<<"\n\n\n1. Make products people want without knowledge of coding. I haven't got much time. I am already "<<age<<" years old.";
			cout<<"\n\n2. Study. I feel like I need to know how to MAKE products.";
        	cout<<"\n\nWhat is your choice? (1 or 2) : ";
			cin>>secondChoice;
			age++;
        	if(secondChoice==1){
        		system("CLS");
        		cout<<"You chose to make products without coding. \n\n\n1. Now you have to hire developers. \nYou need to make money to pay them. (Energy -300)";
				
				energy=energy-300;
				cout<<"\n\nYour skills : "<<skills;
				cout<<"\nYour energy (-300) = "<<energy;
				
				cout<<"\n\nPress any key to continue\t";
				cin>>cont;
				
				cout<<"\n2. Even if you hired developers,\nit will be hard to interact with developers consistently to make products you want. (Energy -300)"<<"\n";
				energy -=300;
				cout<<"\n\nYour skills : "<<skills;
				cout<<"\nYour energy (-300) = "<<energy<<"\n";
				cout<<"Your age : "<<age;
				cout<<"\n\nPress any key to continue\t";
				cin>>cont;
				system("CLS");
       		} else if (secondChoice==2){
       			system("CLS");
       			cout<<"You chose to study. Good choice. Investors don't invest in business owners who don't know how to make products.";
				energy-=300;
				skills+=300;
				cout<<"\nYour skills : "<<skills;	
				cout<<"\nYour energy : "<<energy<<"\n";
				system("CLS");
				cout<<"Now you have to decide how much you will study\n\n";
				cout<<"1. 2 hours/ day\n"<<"2. 12 hours/ day (1 or 2) : ";
				int thirdChoice;
				cin>>thirdChoice;
				age++;
				if(thirdChoice==1){
					cout<<"\n\nYou study only 2 hours? You will not even get a job as a software engineer. You have to study harder.\n\n";
					skills-=200;
					cout<<"Your skills : "<<skills<<"\n";
					cout<<"\n\nPress any key to continue\t";
					cin>>cont;
					system("CLS");
				}else if (thirdChoice ==2){
					system("CLS");
					cout<<"You became the expert of your field.\n";
					skills+=500;
					cout<<"Your skills : "<<skills<<"\n";
					cout<<"Now you have to learn other things. \n\nIt won't be easy but \nif you are compassionate about other people.\nYou will know what people want.\n";
					cout<<"Your skills : "<<skills<<"\n";
					cout<<"Your energy : "<<energy<<"\n";
					cout<<"Your age : "<<age<<"\n";
					cout<<"\n\nPress any key to continue\t";
					cin>>cont;
					
				}
				}
    	} else if(firstChoice == 'i'||firstChoice == 'I'){
     		cout<<"You made a choice in INVESTING. But you now have to learn to invest. How would you invest?\n1. Start investing with my gut feeling. I have a good feeling about this.\n2. Study. Gosh this is boring.\n";
      		cin>>secondChoice;
      		age++;
      		if(secondChoice==1){
      			system("CLS");
				cout<<"\n\nYou chose GUT FEELING. \n\n\tGambling addiction center : https://www.addictioncenter.com/drugs/gambling-addiction/\n\tTedx talk about gambling addict : https://youtu.be/7AN3VLLlkdI\n\n\n";
      			skills-=500;
      			energy-=1000;
      			cout<<"Your skills : "<<skills<<"\n";
      			cout<<"Your energy : "<<energy<<"\n";
      			cout<<"Your age : "<<age<<"\n";
      			cout<<"\n\nPress any key to continue\t";
				cin>>cont;
				break;
			} else if(secondChoice==2){
				system("CLS");
				cout<<"\nYou chose to STUDY. Okay, now how long will you study per day?\n\n";
				cout<<"1. 2 hours/day\n";
				cout<<"2. 12 hours/day\n\n\n";
				cin>>thirdChoice;
				age++;
				if(thirdChoice==1){
					cout<<"\n\nYou study only 2 hours? Welcome to average life. I hope you will at least get a job somewhere.\n";
					skills-=200;
					cout<<"Your skills : "<<skills<<"\n";
					
					cout<<"\n\nPress any key to continue\t";
					cin>>cont;
					system("CLS");
					cout<<"I hope you will be able to pay bills too.\n";
					energy-=200;
					cout<<"Your energy - 200: "<<energy<<"\n";
					
					cout<<"\n\nPress any key to continue\t";
					cin>>cont;
					
					system("CLS");
				
				} else if (thirdChoice==2){
					cout<<"You dedicated your precious time on the right thing.\n";
					cout<<"Make sure to learn coding because investing is all about numbers/statistics.\nYou will have to manage big amount of data.\n\n";
					skills+=500;
					cout<<"Your skills (+500) : "<<skills<<"\n";
					cout<<"\n\nPress any key to continue\t";
					cin>>cont;
					break;
				}
			}
    	}
	}
	if(energy<0){
		if(skills = 0||age>=60){
		cout<<"\n\nG A M E    O V E R";
		} else if(skills>0&&age<60){
			cout<<"You are exhausted. However You can start over.\nYou have "<<skills<<"\n";
			cout<<"Would you like to start over?(Y or N) : ";
			char startover;
			cin>>startover;
			if(startover=='y'||startover=='Y'){
				energy=500;
			} else {
				cout<<"Bye. You tried.";
			}
		}
	} else if (skills>=800){
		system("CLS");
		cout<<"V I C T O R Y. Enjoy your life. :)";
	}
    return 0;

}
