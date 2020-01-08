#include<math.h>
#include<string.h>
int main()
{
    
}
int stringToNumber(char numArray[]){
        int number = 0;
        int length = strlen(numArray) -1;
        for(int i=0; numArray[i] != '\0' ; i++){
            number += (numArray[i] -'0') * pow(10,length);
            length--;
       }


        return number;
}