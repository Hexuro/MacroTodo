#include "TodoList.h"

TodoList::TodoList(const std::string& filename) : filename(filename) {
    LoadTodos();
}

void TodoList::LoadTodos() {
    std::cout << "Loading todos from file: " << filename << std::endl;
    std::ifstream file(filename);
    if (file.is_open()) {
        Todo todo;
        while (file >> todo.title >> todo.description >> todo.isDone) {
            todos.push_back(todo);
        }
        file.close();
    }
    else {
        std::cout << "Failed to open file" << std::endl;
    }
}

void TodoList::SaveTodos() {
    std::ofstream file(filename);
    if (file.is_open()) {
        for (const auto& todo : todos) {
            file << todo.title << " " << todo.description << " " << todo.isDone << std::endl;
        }
        file.close();
    }
}

void TodoList::AddTodo(const std::string& title, const std::string& description) {
    Todo todo{ title, description, false };
    todos.push_back(todo);
    SaveTodos();
}

void TodoList::RemoveTodo(int index) {
    if (index >= 0 && index < todos.size()) {
        todos.erase(todos.begin() + index);
        SaveTodos();
    }
}

void TodoList::CheckTodo(int index) {
    if (index >= 0 && index < todos.size()) {
        todos[index].isDone = true;
        SaveTodos();
    }
}

void TodoList::ListTodos() {
    for (size_t i = 0; i < todos.size(); ++i) {
        std::cout << "[" << (todos[i].isDone ? "x" : " ") << "] " << todos[i].title << ": " << todos[i].description << std::endl;
    }
}