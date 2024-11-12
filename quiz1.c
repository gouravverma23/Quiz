#include<stdio.h>
int main(){
    char a[5];
    printf("What is the smallest planet in our solar system?\nA) Earth\nB) Mars\nC) Mercury\nD) Venus\nEnter the answer : ");
    scanf(" %c",&a[0]);
    printf("Which country is known as the 'Land of the Rising Sun'? \n A. China \n B. Japan \n C. South Korea \n D. Thailand \nEnter the answer : ");
    scanf(" %c",&a[1]);
    printf("Who developed the theory of general relativity? \n A. Isaac Newton \n B. Nikola Tesla \n C. Albert Einstein \n D. Galileo Galilei \nEnter the answer : ");
    scanf(" %c",&a[2]);
    printf("Which gas is most abundant in Earth's atmosphere? \n A. Oxygen \n B. Carbon Dioxide \n C. Nitrogen \n D. Hydrogen \nEnter the answer : ");
    scanf(" %c",&a[3]);
    printf("Which continent is the Sahara Desert located on? \n A. Asia \n B. Africa \n C. South America \n D. Australia \nEnter the answer : ");
    scanf(" %c",&a[4]);
    int b=0;
    if(a[0]=='C' || a[0]=='c'){b=b+1;}
    if(a[1]=='B' || a[1]=='b'){b=b+1;}
    if(a[2]=='C' || a[2]=='c'){b=b+1;}
    if(a[3]=='C' || a[3]=='c'){b=b+1;}
    if(a[4]=='B' || a[4]=='b'){b=b+1;}
    printf("your score is : %d\n",b);
    printf("Answers entered: %c %c %c %c %c\n", a[0], a[1], a[2], a[3], a[4]);

return 0;
}