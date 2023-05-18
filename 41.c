#include <stdio.h>
  
int main(){
    int inputArray[500], elementCount, counter;
      
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d numbers \n", elementCount);
     
    for(counter = 0; counter < elementCount; counter++){
        scanf("%d", &inputArray[counter]);
    }
        
    printf("Array Elements\n");
    for(counter = 0; counter < elementCount; counter++){
        printf("%d ", inputArray[counter]);
    }
          
    return 0;
}
