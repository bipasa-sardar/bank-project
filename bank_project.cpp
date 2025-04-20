#include<iostream>
#include<iomanip>
void showbalance(double balance);
double deposit();
double withdraw(double balance);
int main(){
    double balance=0;
    int choice=0;
    do{
    std::cout<<"enter your choice: ";
    std::cout<<"press 1 to show your balance\n";
    std::cout<<"press 2 to deposit\n";
    std::cout<<"press 3 to withdraw\n";
    std::cout<<"press 4 to exit\n";
    std::cin>>choice;

    switch(choice){
        case 1:
            showbalance(balance);
            break;
        case 2:
            balance+=deposit();
            showbalance(balance);
            break;
        case 3:
            balance-=withdraw(balance);
            showbalance(balance);
            break;
        case 4:
            std::cout<<"thank you for visiting!";
            break;
        default:
            std::cout<<"please enter a valid choice!";
            break;
    }
}while(choice!=4);

return 0;
}
void showbalance(double balance){
    std::cout<<"your balance is: "<<std::setprecision(2)<<std::fixed<<balance<<"\n";
}
double deposit(){
    double amount=0;
    std::cout<<"enter the amount to be deposited: ";
    std::cin>>amount;
    if(amount>0){
        return amount;
    }
    else{
        std::cout<<"that's not a valid amount!\n";
        return 0;
    }
}
double withdraw(double balance){
    double amount=0;
    std::cout<<"enter the amount to be withdrawn: ";
    std::cin>>amount;
    if(amount>balance){
        std::cout<<"insufficient fund";
        return 0;
    }
    else if(amount<0){
        std::cout<<"that's not a valid amount!";
        return 0;
    }
    else{
        return amount;
    }
}
