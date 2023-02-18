https://leetcode.com/problems/valid-parentheses

bool isValid(char * s){
 int len = strlen(s);
 char stack[len];
  int top = -1;
  char top_ch;
    for (int k = 0; k < len; k++) {
        char ch = s[k];
        if (ch == '(' || ch == '{' || ch == '[') {
            // push into stack if it is a open parentheses
             stack[++top] = ch;
              
        } 
        else if (ch == ')' || ch == '}' || ch == ']') {

              if (top == -1) {
                return false;
            } else {
         // pop from stack if it is a open parentheses
             top_ch = stack[top--];
         }
            if ((ch == ')' && top_ch != '(') ||
                (ch == '}' && top_ch != '{') ||
                (ch == ']' && top_ch != '[')) {
                return 0;
            }
        }
    }
    return top == -1;
}
