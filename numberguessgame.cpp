#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int difficulty,x;
    cout <<"\n Number Guessing game !\n\nChoose the game difficulty:-\n1.Easy(0 to 20)\n2.Medium(0 to 50)\n3.hard(0 to 100)\n\n";
    cin >>difficulty;
    switch(difficulty){
        case 1:
            x = 21;
            break;
        case 2:
            x = 51;
            break;
        case 3:
            x = 101;
            break;
        default:
            cout<<"\nPlease select any of three levels";
            exit(1);
    }
    int randomNumber = rand()%x;
    int guess;
    int attempts = 0;
    string choice;
    while(1){
        cout<<"\nEnter the number you guessed ! : ";
        cin>>guess;
        attempts++;
        if(guess == randomNumber){
            cout <<"\nYou guessed the correct number at "<<attempts<<" attempts! Congratulations You won the Game !!";
            if(attempts<=3){
                cout << "\nYou guessed answer in only "<<attempts<<" attempts you are a champion !!!";
            }
            break;
        }else if(guess - randomNumber >= 10){
            cout<<"\nThe number you guessed is too high ! do you want to guess again (yes/no) or (y/n) : ";
            cin>>choice;
            if(choice[0]=='n'){
                cout <<"\nThe Number was "<<randomNumber<<" ! Better luck next time"<<endl;
                break;
            }
        }else if(guess - randomNumber <= -10){
            cout <<"\nThe number you guessed is too low  ! do you want to guess again (yes/no) or (y/n) : ";
            cin>>choice;
            if(choice[0]=='n'){
                cout <<"\nThe Number was "<<randomNumber<<" ! Better luck next time"<<endl;
                break;
            }
        }else if(guess - randomNumber < 10 && guess - randomNumber > 0){
            cout <<"\nThe number you guessed is high  ! do you want to guess again (yes/no) or (y/n) : ";
            cin>>choice;
            if(choice[0]=='n'){
                cout <<"\nThe Number was "<<randomNumber<<" ! Better luck next time"<<endl;
                break;
            }
        }else if(guess - randomNumber > -10 && guess - randomNumber < 0){
            cout <<"\nThe number you guessed is low ! do you want to guess again (yes/no) or (y/n) : ";
            cin>>choice;
            if(choice[0]=='n'){
                cout <<"\nThe Number was "<<randomNumber<<" ! Better luck next time"<<endl;
                break;
            }
        }
    }
}