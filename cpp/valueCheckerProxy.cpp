/*!
*@brief			AdminMode Functions
*@details
*				For Admin Stub data flow 
*@author		Joung Dong Sub
*@version		0.0.4
*/

#include <iostream>
#include <string>

class valueCheckerproxy {
public:
    valueCheckerproxy(){}
private:
    const DEFAUTL= 5;
    bool printer(String[DEFAUTL] original, String[DEFAUTL] present);
}

valueCheckerproxy::printer(){
    for(int i=0; i<DEFAUTL; i++){
        if(original[i] == present[i]){
            println(original[i] + "is normal")
        } else {
            println("None")
        }
    }
}