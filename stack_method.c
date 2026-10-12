/*
Stack methodssssss
1. PUSH
2. POP
3. PEEK
4. DISPLAY
0. EXIT
*/



#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

// methods function declaration
void push();
void pop();
void peek();


//utils 
void printSuccess(char method[]);
void line();





int main(void){
  printf("Yoo! Let's learn Stackkkk methodsssssss...\n");
  int choice;
  while (true){
    printf("=======================================================\n");
    
    
    printf("1. Push\n2. POP\n3. PEEK\n4. DISPLAY\n0. Get a better life.\n");
    line();
    printf("Choose an option: ");
    scanf("%d",&choice);
    line();
    if(choice == 0){
      printf("Exiting Program...\nGo touch grass and enjoy the natureee...");
      break;
    }
    switch (choice)
    {
    case 1:
      push();
      break;
    case 2: pop();break;
    case 3: peek();break;
    
    
    default:
      break;
    }
    
    
  }
}

void push(){
  if (top == MAX-1){
    printf("Stackk Overflow :(");
    return;
  }
  else{
    top++;
    printf("Enter number to PUSH: ");
    scanf("%d",&stack[top]);
    line();
    printSuccess("PUSH");
    
  }

}

void pop(){
  if (top == -1){
    printf("Stack underflow...\n");
  }
  else{
    top--;
    printSuccess("POP");
  }
}

void peek(){
  if (top == -1){
    printf("Empty Stack...\n");
  }
  else{
    printf("Last element %d\n",stack[top]);
  }
}




//utils

void printSuccess(char method[]){
  printf("%s method successfully executed!!\n",method);
  printf("Updated stack: ");
  printf("[");
  for (int i = 0;i<=top;i++){
    
    printf("%d,",stack[i]);
    
  }
  printf("]\n");
  line();
}

void line(){
  printf("-------------------------------------------------------\n");
}