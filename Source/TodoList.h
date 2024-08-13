#include <iostream>
#include <fstream>
#include <vector>
#include <list>

#include "Todo.h"

class TodoList {
public:
    TodoList(const std::string& filename);

    void AddTodo(const std::string& title, const std::string& description);
    void RemoveTodo(int index);
    void CheckTodo(int index);
    void ListTodos();
    void LoadTodos();
    void SaveTodos();

private:
    std::string filename;
    std::vector<Todo> todos;
};