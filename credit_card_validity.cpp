#include<iostream>
int getdigit(const int number);
int sumodddigits(const std::string cardnumber );
int sumevendigits(const std::string cardnumber);
int main(){
    std::string cardnumber;
    int result=0;
    std::cout<<"enter a credit card number: ";
    std::cin>>cardnumber;
    result=sumodddigits(cardnumber)+sumevendigits(cardnumber);
    if(result%10==0){
        std::cout<<cardnumber<<"is valid";
    }
    else{
        std::cout<<cardnumber<<"is not valid";
    }
    return 0;
}
int getdigit(const int number){
    return number%10+(number/10%10);//if the number is 18,this function will split 18 to 1 and 8

}
int sumodddigits(const std::string cardnumber ){
    int sum=0;
    int i;
    for(i=cardnumber.size()-1;i>0;i-=2){
        sum+=getdigit(cardnumber[i]-'0');
    }
    return sum;

}
int sumevendigits(const std::string cardnumber){
    int sum=0;
    int i;
    for(i=cardnumber.size()-2;i>0;i-=2){
        sum+=getdigit((cardnumber[i]-'0')*2);
    }
    return sum;
}