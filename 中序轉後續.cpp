#include <iostream>

using namespace std;

char Stack[100];
int top = -1;

void Push(char x){
    Stack[++top] = x;
}

char Pop(){
    if (top == -1){
        return -1;
    }else{
        return Stack[top--];
    }
}

int Priority(char x){
    if (x == '('){
        return 0;
    }else if (x == '+' || x == '-'){
        return 1;
    }else if (x == '*' || x == '/'){
        return 2;
    }
}

int main()
{
    char exp[100];
    char *e, x;
    cout << "Enter the exp: ";
    // cin >> exp;
    scanf("%s", exp);
    
    
    e = exp;
    
    while (*e != '\0'){
        if (isalnum(*e)){
            cout << *e;
        }else if (*e == '('){
            Push(*e);
        }else if (*e == ')'){
            while ((x = Pop()) != '('){
                cout << x;
            }
        }else{
            while (Priority(Stack[top]) >= Priority(*e)){
                cout << Pop();
            }
            Push(*e);
        }
        e++;
    }
    while (top != -1){
        cout << Pop();
    }

    return 0;
}
