#include <iostream>
#include <vector>
using namespace std;

bool brackets(string expr) {
    vector<char> stack;
    char x;

    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            stack.push_back(expr[i]);
            continue;
        }

        if (stack.empty())
            return false;

        switch (expr[i]) {
            case ')':
                x = stack.back();
                stack.pop_back();
                if (x == '{' || x == '[')
                    return false;
                break;
            case '}':
                x = stack.back();
                stack.pop_back();
                if (x == '(' || x == '[')
                    return false;
                break;
            case ']':
                x = stack.back();
                stack.pop_back();
                if (x == '(' || x == '{')
                    return false;
                break;
        }
    }
    return stack.empty();
}

int main() {
    string expr = "(){}[]";
    if (areBracketsBalanced(expr))
        cout << "Brackets are balanced" << endl;
    else
        cout << "Brackets are not balanced" << endl;

    return 0;
}
