#include <iostream>
#include <string>
#include <list>
using namespace std;

void main()
{ 
 
    int opt;
    int rmv;
    int mrk;
    list<string>::iterator l_iter;
    string items;
    list<string> tdlist;
    

    while (true) {

        cout << "```TO DO LIST ```\n\n" ;
        cout << "Hello, please select action" << endl;
        cout << "---------------------------" << endl;
        cout << "Menu \n\n";
        cout << "1: View || 2: Add item || 3: Remove item || 4: Mark item || 5: Quit" << endl;
        cout << "--------------------------------------------------------------------" << endl;
        cin >> opt;
        int size = tdlist.size();
        if(opt == 1){
            cout << "Viewing the list" << endl;
            //printing list elements
            cout << "List items:" << endl;
            if (size == 0) { cout << "|No tasks|"; }
            for (l_iter = tdlist.begin(); l_iter != tdlist.end(); l_iter++)
                cout << *l_iter << endl;
               
        }
        else if(opt == 2){
            cout << "Add items to the list and enter 'stop' to stop" << endl;
            
            while (true) {
                getline(cin, items);
                if (items == "stop")
                    break;
                else if (items != "stop") { tdlist.push_back(items); }
            }
              
        }
        else if (opt == 3) {

            cout << "Enter task number to remove" << endl;
            cin >> rmv;
            list<string>::iterator itr = tdlist.begin();
            for (int i = 0; i < rmv;i++) {
                ++itr;
            }
            l_iter = itr;
            tdlist.remove(*l_iter);
            cout << "Task Removed";       
        }
        
        else if (opt == 4) {
            cout << "Enter task number to mark" << endl;
            cin >> mrk;
            list<string>::iterator itr2 = tdlist.begin();
            list<string>::iterator itr3 = tdlist.begin();
            list<string>::iterator itr4 = tdlist.begin();
            for (int i = 0; i < mrk; i++) {
                ++itr2;
            }
            l_iter = itr2;
            itr3 = ++itr2;
            itr4 = --itr2;
            cout << "New Task Status:\n";
            cout << *l_iter << " (completed)";
            for (l_iter = tdlist.begin(); l_iter != itr4; l_iter++)
                cout << *l_iter << endl;
            for (l_iter = itr3; l_iter != tdlist.end(); l_iter++)
                cout << *l_iter << endl;
        }
        else if (opt == 5) {
            cout << "Goodbye" << endl;
            break;
        }
        cout << endl << endl;
    }
    
}

