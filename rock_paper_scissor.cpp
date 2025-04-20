#include<iostream>
#include<ctime>
char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void choosewinner(char user,char computer);
int main(){
    char player;
    char computer;
    player=getuserchoice();
    std::cout<<"your choice is \n";
    showchoice(player);

    computer=getcomputerchoice();
    std::cout<<"computer choice is:\n";
    showchoice(computer);

    choosewinner(player,computer);
    return 0;
}
char getuserchoice(){
    char player;
    do{
    std::cout<<"ROCK-PAPER-SCISSOR GAME!\n";
    std::cout<<"choose one of the following \n";
    std::cout<<"press 'r'for rock\n";
    std::cout<<"press'p'for paper\n";
    std::cout<<"press 's'for scissor\n";
    std::cin>>player;
    }while(player!='r'&&player!='p'&&player!='s');
    return player;

}
char getcomputerchoice(){
    srand(time(NULL));
    int num=(rand()%3)+1;
    switch(num){
        case 1:return 'r';
        case 2: return 'p';
        case 3:return 's';
    }

}
void showchoice(char choice){
    switch(choice){
        case 'r':
            std::cout<<"ROCK\n";
            break;
        case 'p':
            std::cout<<"PAPER\n";
            break;
        case 's':
            std::cout<<"SCISSOR\n";
            break;
        default:
            std::cout<<"enter any one among r,p and s only!";
            break;
    }
}
void choosewinner(char user,char computer){
    switch(user){
        case 'r':
            if(computer=='r'){
                std::cout<<"it's a tie!";
            }
            else if(computer=='p'){
                std::cout<<"you lose!";
            }
            else{
                std::cout<<"you win!";
            }
            break;
        case 'p':
            if(computer=='p'){
                std::cout<<"it's a tie!";
            }
            else if(computer=='s'){
                std::cout<<"you lose!";
            }
            else{
                std::cout<<"you win!";
            }
            break;
        case 's':
            if(computer=='s'){
                std::cout<<"it's a tie!";
            }
            else if(computer=='r'){
                std::cout<<"you lose!";
            }
            else{
                std::cout<<"you win!";
            }
            break;
    }
}