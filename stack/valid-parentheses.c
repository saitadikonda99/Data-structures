
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    if (top == -1) {
        return '\0';
    } else {
        return stack[top--];
    }
}

int is_valid_parenthesis(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            char top_ch = pop();
            if ((ch == ')' && top_ch != '(') ||
                (ch == '}' && top_ch != '{') ||
                (ch == ']' && top_ch != '[')) {
                return 0;
            }
        }
    }
    return top == -1;
}

int main() {
    char s[MAX_SIZE];
    printf("Enter a string of parentheses: ");
    scanf("%s", s);
    if (is_valid_parenthesis(s)) {
        printf("Valid parentheses\n");
    } else {
        printf("Invalid parentheses\n");
    }
    return 0;
}

