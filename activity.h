// =================================================================
// File: activity.h
// Author:
// Date:
// =================================================================
#ifndef ACTIVITY23_H
#define ACTIVITY23_H

#include <iostream>
#include <string>
#include <cctype>
#include <queue>
#include <stack>

using namespace std;

// =================================================================
// Auxiliar function. Receives a string and separates it into its
// basic elements, placing them in a queue of strings. For example,
// if the input is the string "123 34 7 + * -", then it returns a
// queue with the following elements: "123", "34", "7", "+", "*",
// and "-" .
//
// @param expr, a string with an arithmetic expression in infix
//              notation.
// @return a string with an arithmetic expression in infix notation.
// =================================================================
queue<string> tokenize(string str) {
	int i = 0;
	int length = str.size();
	string aux;
	queue<string> result;

	while (i < length) {
		if (isdigit(str[i])) {
			aux.clear();
			do {
				aux += str[i];
				i++;
			} while(isdigit(str[i]));
			result.push(aux);
		} else if (isspace(str[i])) {
			i++;
		} else {
			aux.clear();
			aux += str[i];
			result.push(aux);
			i++;
		}
	}
	return result;
}

// =================================================================
// Auxiliar function. Determine if the element at the top of the
// stack has higher precedence than the op operator.
//
// @param stackTop, the operator at the top of the stack.
// @param op, the operator being evaluated
// @return true if the operator at the top of the stack has higher
//         precedence than op, false otherwise.
// =================================================================
bool hasHigherPrecedence(const string &stackTop, const string &op) {
	return !((stackTop == string("+") || stackTop == string("-")) &&
			 (op == string("*")       || op == string("/")));
}

// =================================================================
// Returns true if the expr string that it receives as a parameter
// contains an expression where all its grouping symbols
// (parentheses (), square brackets [] and braces {}) are correctly
// nested and balanced. Returns false otherwise. Any character in
// expr other than parentheses, brackets, or braces should be
// ignored.
//
// @param expr, a string where all characters are grouping symbols.
// @return true if the string are correctly nested and balanced,
//         false otherwise
// =================================================================
bool balancedBrackets(const string &expr) {
	return false;
}

// =================================================================
// Receives as a parameter the string expr that contains an
// arithmetic expression in infix notation. Returns a string with
// the equivalent expression in postfix notation. It does not perform
// any kind of validation against the input expression.
//
// @param expr, a string with an arithmetic expression in infix
//              notation.
// @return a string with the equivalent expression in postfix
//         notation
// =================================================================
string convertInfixToPostfix(const string &expr) {
	queue<string> input;
	queue<string> result;
	stack<string> stack;
  string token;

	input = tokenize(expr);
	while (!input.empty()) {
    token = input.front(); input.pop();
	}
	return string("");
}

#endif /* ACTIVITY23_H */
