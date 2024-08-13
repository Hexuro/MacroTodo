#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <process.h>

#include "TodoList.h"
#include "Todo.h"
#include "Utils.h"

using namespace std;

bool shouldClose = false;

int main(int argc, char* argv[]) {
	/* Initialize */
	if (argc != 2) {
		cout << "please enter a filename";
		return 0;
	}

	TodoList todoList(argv[1]);

    /* App loop */
    while (!shouldClose) {
        std::string inputstring;
        cout << "Enter a command: ";
        inputstring = GetStringFromCin();

        if (inputstring == "new") {
            std::string title;
            std::string description;
            std::cout << "Enter a title: ";
            title = GetStringFromCin();
            std::cout << "Enter a description: ";
            description = GetStringFromCin();
            todoList.AddTodo(title, description);
        }

        elif (inputstring == "rm") {
            int indexNumber;
            std::cout << "Enter an index number: ";
            indexNumber = GetIntFromCin();
			todoList.RemoveTodo(indexNumber);
        }

        elif (inputstring == "check") {
            int indexNumber;
			std::cout << "Enter an index number: ";
			indexNumber = GetIntFromCin();
			todoList.CheckTodo(indexNumber);
		}

        elif (inputstring == "list") {
            todoList.ListTodos();
        }

        elif(inputstring == "exit") {
            todoList.SaveTodos();
            exit(0);
        }
    }


	/* Terminate */
}