 #include <iostream>
 #include <cstdlib>
 #include <string>
 #include <ctime>
using namespace std;
 int main()
 {
     enum options {TEXT,
                    INDICATION,
                    QUOTE
                    };
    const int names = 12;
    const string CLUES[names][QUOTE] = {
                                        {"Kenshin", "Hitogiri Battosai"},
                                        {"Naruto", "The unpredictable Ninja"},
                                        {"Luffy", "Meat Meat & Meat!"},
                                        {"Ichigo", "Shinigami"},
                                        {"Kaneki", "unravel"},
                                        {"Minato", "Yellow Flash"},
                                        {"Itachi", "Tatsuka Blade"},
                                        {"Pain", "Shinra Tensei"},
                                        {"Obito", "The Fallen Hero"},
                                        {"Kuroko", "Panthom Sixth"}

    };
 for(int n =0; n <names; n++){
            for(int m =0; m<QUOTE; m++){
                cout <<CLUES[n][m];
            }
            cout << endl;
        }
 
 
 
 
 
 
 
 
 
 
 
 
 
 return 0;
 }
