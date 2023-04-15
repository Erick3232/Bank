#include <iostream>
#include <iomanip>
using namespace std;

void Balance(double balance);
double deposit();
double retire(double balance);
class User{
private:
    string user;
    string password;
public: 
    User(string user, string password){
        this -> user = user;
        this -> password = password;
    }
    void check(string username, string password){
            cout << "\n";
            cout << "You logged with sucess! \n";
            cout << "Welcome back, " << username << "!\n";
            cout << "\n";
    }
};

int main(){

    double balance = 0;
    int choices = 0;
    int choice = 0;

    do{
        cout << "Enter the User is using: \n";
        cout << "1.Merick \n";
        cout << "2.Grazer \n";
        cout << "3.Lucas \n";
        cout << "4.Felps \n";
        cout << "5.Colasso \n";
        cin >> choice;
    }while(choice != 1 && choice != 2 && choice != 3 && choice != 4 && choice != 5);

    string real_username;
    string real_password;

    User username(real_username, real_password);

    string user;
    string password;

    cout << "Enter your username: ";
    cin >> user;
    cout << "Enter your password: ";
    cin >> password;
    
    username.check(user, password);

    do {
    cout << "What's your choice?: \n";
    cout << "1.Show the Balance \n";
    cout << "2.Deposit Money \n";
    cout << "3.Retire Money \n";
    cout << "4.Exit \n";
    cin >> choices;

    switch (choices)
    {
    case 1:Balance(balance);
            break;
    case 2:balance += deposit();
           Balance(balance);
           break;
    case 3:balance -= retire(balance);
           Balance(balance);
           break;
    case 4: cout << "Thanks for using \n";
            break;
    default: cout << "Invalid Choice \n";
    }
    } while (choices != 4);
    
    return 0;
}

void Balance(double balance){
    cout << "Your balance is: R$" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
    double add = 0;

    cout << "Enter amount to deposited: ";
    cin >> add;

    if (add > 0){
        return add;
    } else{
        cout << "That's not a valid amount \n";
        return 0;
    }
    return add;
}
double retire(double balance){

    double add = 0;
    cout << "Enter amount to retire: ";
    cin >> add;

    if (add > balance){
        cout << "You have insufficient funds \n";
    } else if(add < 0){
        cout << "That's a invalid amount\n";
    } else{
        return add;
    }   
    return 0;
}
