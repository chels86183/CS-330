
#include <iostream>
#include <list>
using namespace std;
class toDoItem{
private:
    int id;
    string description;
    bool completed; 
public:
    toDoItem(): id(1), description(""), completed(false){}
    bool create(string new_description) {
        static int i = 0;
        ++i;
        id = i; 
        description = new_description;
        return true;
    }
    
    int getId() { return id; }
    string getDescription() { return description; }
    bool isCompleted() { return completed; }
    void setCompleted(bool val) { completed = val; }

};



int main() {
    cout << "------------------Welcome to the ToDo List manager!---------------------"<< endl;
    cout << "Here you can add all your assingments and appointments or other important things "<< endl;
    cout << "all of the task you add will automatically be given an ID number, this makes its easier for you to idenfity "<< endl;
    cout << endl << endl;
    cout << "Please enter your name:";
    string name;
    cin >> name;
    cout << "----Welcome " << name<< " to your very own todo list manager----";
    char input_option;
    int input_id;
    string input_description;
    list<toDoItem> todoItems;
    list<toDoItem>::iterator it;
    int i = 0;
    while (i < 1) {
        cout << endl << endl;

        for (it = todoItems.begin(); it != todoItems.end(); it++) {
            string completed = it->isCompleted() ? "Completed" : "not completed";
            cout << it->getId() << " ,[ " << it->getDescription() << " ], "<< completed << endl;
        }

        if (todoItems.empty()) {
            cout << "Your list is empty, please click 1 to add your first task!" << endl;
        }

        cout << endl << endl;

        cout << "1. add a new task" << endl;
        cout << "2. mark a task complete" << endl;
        cout << "3. I want to quit adding tasks" << endl;

        cout << "Please enter your choice[1,2,3]: ";

        cin >> input_option;

        if (input_option == '3') {
            cout << endl << endl;
            cout << "Peace out, see ya later, but heres your list" << endl;
            cout << endl << endl;
            for (it = todoItems.begin(); it != todoItems.end(); it++) {
            string completed = it->isCompleted() ? "Completed" : "not completed";
            cout << it->getId() << " ,[ " << it->getDescription() << " ], "<< completed << endl;
        }
            i++;
        }
        else if (input_option == '1') {
            cout << "Add a new description of your task(format: task name, class, prof name): ";
            cin.clear();
            cin.ignore();
            getline(cin, input_description);

            toDoItem newItem;
            newItem.create(input_description);
            todoItems.push_back(newItem);

        }
        else if (input_option == '2') {
            if(todoItems.empty()){
                cout << endl << endl;
                cout << "ERROR! Your list is empty, please add a task first ";
                
            }
            else{
            cout << "Please enter the id associated with the assignment you would like to mark complete ";
            cin >> input_id;

            for (it = todoItems.begin(); it != todoItems.end(); it++) {

                if (input_id == it->getId()) {
                    it->setCompleted(true);
                    break;
                }
            }}
        }
        else{
            cout << endl << endl;
            cout << "ERROR only choices 1,2,3 are accepted you have inputed an invalid choice";
            cout<< "Please try again";
        }

    }


    
}
