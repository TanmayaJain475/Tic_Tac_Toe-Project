#include <iostream>
#include <time.h>

int PlayerChoice;
int CompChoice;
using namespace std;

string line = "   |   |";
string square_1 = "___|"; 
string square_2 = "___|"; 
string square_3 = "___"; 
string square_4 = "___|"; 
string square_5 = "___|"; 
string square_6 = "___"; 
string square_7 = "   |"; 
string square_8 = "   |"; 
string square_9 = "   ";
int number = 5;
bool PlayerWin;

void board(){
    cout << line << "\n"<< square_1 << square_2 << square_3 << endl;
    cout << line << "\n"<< square_4 << square_5 << square_6 << endl;
    cout << line << "\n"<< square_7 << square_8 << square_9 << endl;
    cout << "\n" << endl;
    }

void playerChoice(){
    switch (PlayerChoice)
    {
    case 1:
        square_1 = "_0_|";
        break;
    case 2:
        square_2 = "_0_|";
        break;
    case 3:
        square_3 = "_0_";
        break;
    case 4:
        square_4 = "_0_|";
        break;
    case 5:
        square_5 = "_0_|";
        break;
    case 6:
        square_6 = "_0_";
        break;
    case 7:
        square_7 = " 0 |";
        break;
    case 8:
        square_8 = " 0 |";
        break;
    case 9:
        square_9 = " 0  ";
        break;
    
    default:
        cout << "Type a number between 1-9 "<< endl;
        cout << "" << endl;
        break;
    }
}

void compChoice(){
    srand(time(0));
	CompChoice = (rand()%9)+1;
    
    switch (CompChoice)
    {
    case 1:
        if (square_1 == "_0_|"){
            CompChoice = (rand()%9)+1;            
        }
        else if(square_1 == "_X_|"){
            CompChoice = (rand()%9)+1;           
        }
        else{
            square_1 = "_X_|";
            break;
        }
    case 2:
        if (square_2 == "_0_|"){
            CompChoice = (rand()%9)+1;            
        }
        else if(square_2 == "_X_|"){
            CompChoice = (rand()%9)+1;            
        }
        else{
            square_2 = "_X_|";
            break;
        }
    case 3:
        if (square_3 == "_0_"){
                CompChoice = (rand()%9)+1;               
            }
            else if(square_3 == "_X_"){
                CompChoice = (rand()%9)+1;                
            }
        else{
            square_3 = "_X_";
            break;
        }
    case 4:
        if (square_4 == "_0_|"){
                CompChoice = (rand()%9)+1;               
            }
            else if(square_4 == "_X_|"){
                CompChoice = (rand()%9)+1;                
            }
        else{
            square_4 = "_X_|";
            break;
        }
    case 5:
        if (square_5 == "_0_|"){
               CompChoice = (rand()%9)+1;              
            }
            else if(square_5 == "_X_|"){
                CompChoice = (rand()%9)+1;                
            }
        else{
            square_5 = "_X_|";
            break;
        }
    case 6:
        if (square_6 == "_0_"){
               CompChoice = (rand()%9)+1;              
            }
            else if(square_6 == "_X_"){
                CompChoice = (rand()%9)+1;               
            }
        else{
            square_6 = "_X_";
            break;
        }
    case 7:
        if (square_7 == " 0 |"){
               CompChoice = (rand()%9)+1;              
          }
          else if(square_7 == " X |"){
              CompChoice = (rand()%9)+1;              
          }
        else{
            square_7 = " X |";
            break;
        }
    case 8:
        if (square_8 == " 0 |"){
                   CompChoice = (rand()%9)+1;                 
             }
             else if(square_8 == " X |"){
                 CompChoice = (rand()%9)+1;             
             }
        else{
            square_8 = " X |";
            break;
        }
    case 9:
        if (square_9 == " 0  "){
                   CompChoice = (rand()%9)+1;           
              }
              else if(square_9 == " X  "){
                  CompChoice = (rand()%9)+1;             
              }
        else{
            square_9 = " X  ";
            break;
        }
}
}
int main(){
    cout << "Welcome to...." << endl;
    cout << "\n";
    cout << " #######  #######  #######    #######  #######  #######    #######  #######  #######" << endl;
    cout << "    #        #     #             #     #     #  #             #     #     #  #     " << endl;
    cout << "    #        #     #             #     #     #  #             #     #     #  #     "<< endl;
    cout << "    #        #     #             #     # ### #  #             #     #     #  #######" << endl;
    cout << "    #        #     #             #     #     #  #             #     #     #  #     " << endl;
    cout << "    #        #     #             #     #     #  #             #     #     #  #     " << endl;
    cout << "    #     #######  #######       #     #     #  #######       #     #######  #######" << endl;
    cout << "\n";
    board();
    for (int i = 0; i < number; i++){

        // Player Checkwin //
        if(square_1 == "_0_|" && square_2 == "_0_|" && square_3 == "_0_"){
        cout << "You Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_4 == "_0_|" && square_5 == "_0_|" && square_6 == "_0_"){
        cout << "You Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_7 == " 0 |" && square_8 == " 0 |" && square_9 == " 0  "){
        cout << "You Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_1 == "_0_|" && square_4 == "_0_|" && square_7 == " 0 |"){
        cout << "You Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_2 == "_0_|" && square_5 == "_0_|" && square_8 == " 0 |"){
        cout << "You Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_3 == "_0_" && square_6 == "_0_" && square_9 == " 0  "){
        cout << "You Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_3 == "_0_" && square_5 == "_0_|" && square_7 == " 0 |"){
        cout << "You Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_1 == "_0_|" && square_5 == "_0_|" && square_9 == " 0  "){
        cout << "You Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}

        // Computer Checkwin//
        if(square_1 == "_X_|" && square_2 == "_X_|" && square_3 == "_X_"){
        cout << "Computer Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_4 == "_X_|" && square_5 == "_X_|" && square_6 == "_X_"){
        cout << "Computer Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_7 == " X |" && square_8 == " X |" && square_9 == " X  "){
        cout << "Computer Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_1 == "_X_|" && square_4 == "_X_|" && square_7 == " X |"){
        cout << "Computer Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_2 == "_X_|" && square_5 == "_X_|" && square_8 == " X |"){
        cout << "Computer Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_3 == "_X_" && square_6 == "_X_" && square_9 == " X  "){
        cout << "Computer Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_3 == "_X_" && square_5 == "_X_|" && square_7 == " X |"){
        cout << "Computer Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}
        if(square_1 == "_X_|" && square_5 == "_X_|" && square_9 == " X  "){
        cout << "Computer Win!!" << endl;
        number = 0;
        PlayerWin = true;
        break;
}


        cout << "Enter a number: ";
        cin >> PlayerChoice;
        if (PlayerChoice > 9){
            number++;
            playerChoice();
        }
        else if(PlayerChoice < 1){
            number++;
            playerChoice();
        }


        // checking number is crossed
        else if(square_1 == "_X_|" && PlayerChoice == 1){
            square_1 = "_X_|";
            cout << "Enter a number which is not crossed" << endl;
            number++;
        }
        else if(square_2 == "_X_|" && PlayerChoice == 2){
            square_2 = "_X_|";
            cout << "Enter a number which is not crossed" << endl;
            number++;
        }
        else if(square_3 == "_X_" && PlayerChoice == 3){
            square_3 = "_X_";
            cout << "Enter a number which is not crossed" << endl;
            number++;
        }
        else if(square_4 == "_X_|" && PlayerChoice == 4){
            square_4 = "_X_|";
            cout << "Enter a number which is not crossed" << endl;
            number++;
        }
        else if(square_5 == "_X_|" && PlayerChoice == 5){
            square_5 = "_X_|";
            cout << "Enter a number which is not crossed" << endl;
            number++;
        }
        else if(square_6 == "_X_" && PlayerChoice == 6){
            square_6 = "_X_";
            cout << "Enter a number which is not crossed" << endl;
            number++;
        }
        else if(square_7 == " X |" && PlayerChoice == 7){
            square_7 = " X |";
            cout << "Enter a number which is not crossed" << endl;
            number++;
        }
        else if(square_8 == " X |" && PlayerChoice == 8){
            square_8 = " X |";
            cout << "Enter a number which is not crossed" << endl;
            number++;
        }
        else if(square_9 == " X  " && PlayerChoice == 9){
            square_9 = " X  ";
            cout << "Enter a number which is not crossed" << endl;
            number++;
        }


        // checking number is zerod
        else if(square_1 == "_0_|" && PlayerChoice == 1){
            square_1 = "_0_|";
            cout << "Enter a number which is not zerod" << endl;
            number++;
        }
        else if(square_2 == "_0_|" && PlayerChoice == 2){
            square_2 = "_0_|";
            cout << "Enter a number which is not zerod" << endl;
            number++;
        }
        else if(square_3 == "_0_" && PlayerChoice == 3){
            square_3 = "_0_";
            cout << "Enter a number which is not zerod" << endl;
            number++;
        }
        else if(square_4 == "_0_|" && PlayerChoice == 4){
            square_4 = "_0_|";
            cout << "Enter a number which is not zerod" << endl;
            number++;
        }
        else if(square_5 == "_0_|" && PlayerChoice == 5){
            square_5 = "_0_|";
            cout << "Enter a number which is not zerod" << endl;
            number++;
        }
        else if(square_6 == "_0_" && PlayerChoice == 6){
            square_6 = "_0_";
            cout << "Enter a number which is not zerod" << endl;
            number++;
        }
        else if(square_7 == " 0 |" && PlayerChoice == 7){
            square_7 = " 0 |";
            cout << "Enter a number which is not zerod" << endl;
            number++;
        }
        else if(square_8 == " 0 |" && PlayerChoice == 8){
            square_8 = " 0 |";
            cout << "Enter a number which is not zerod" << endl;
            number++;
        }
        else if(square_9 == " 0  " && PlayerChoice == 9){
            square_9 = " 0  ";
            cout << "Enter a number which is not zerod" << endl;
            number++;
        }


        else{   
            playerChoice();
            compChoice();
        }   
        board();
    }
    return 0;
}
