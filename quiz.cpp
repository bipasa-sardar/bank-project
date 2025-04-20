#include<iostream>
int main(){
    int i,j;
    std::string questions[]={"1. in which year c++ invented?",
                             "2. who invented c++?",
                            "3. in which year indian constitution got adoped?",
                             "4. who is the father of indian constitution?"};

    std::string options[4][4]={{"A.1975","B.1985","C.1963","D.1999"},
                               {"A.john stevenson","B.Bjarne stroustrup","C.michel collin","D.james bond"},
                               {"A.1945","B.1955","C.1950","D.1951"},
                               {"A.mahatma gandhi","B.subhas chandra bose","C.ballav vai patel","D.b r ambedkar"}};
    char answerkey[]={'B','B','C','D'};
    int size=sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;
    for(i=0;i<size;i++){
        std::cout<<"*************************************\n";
        std::cout<<questions[i]<<"\n";
         std::cout<<"*************************************\n";

         for(j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
            std::cout<<options[i][j]<<"\n";
         }
         std::cin>>guess;
         guess=toupper(guess);
         
         if(guess==answerkey[i]){
            std::cout<<"CORRECT!"<<"\n";
            score++;
         }
         else{
            std::cout<<"WRONG!\n";
            std::cout<<"answer: "<<answerkey[i]<<'\n';
         }
    }
    return 0;

}