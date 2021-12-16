/*!
*@brief			AdminMode Functions
*@details
*				For Admin Stub data flow 
*@author		Joung Dong Sub
*@version		0.0.4
*/

#include <iostream>
#include <string>
#include <numeric>

using namspace std;

class valueCheckerproxy {
public:
    valueCheckerproxy(){}
private:
    const DEFAUTL= 5;
    // I made some Function to count "a Inputed value" in the past. 
    const int[] LEN= {4,4,3,4,7};

    bool[] m_bl_checker= {false, false, false, false, false}
    
    void turnOnChecker(int index);
    bool printer(String[DEFAUTL] original, String[DEFAUTL] present);
}

valueCheckerproxy::turnOnChecker(int index){
    m_bl_checker[index]= true;
}

valueCheckerproxy::printer(){
    
    int sum= 0;
    int[10] bl_checker;
    fill_n(bl_checker, 10, 0);
    
    for(int i=0; i<DEFAUTL; i++){
        if(original[i][0] == present[i][0]){
            int max_size= LEN[i];
            for(int j=1; j<max_size; j++) {
                char a= original[i][j], b= present[i][j];
                if(a == b) bl_checker[j]= 1;
                else cout << "-\n" << endl;
            }
            sum = accumulate(bl_checker, bl_checker+DEFAUTL, sum);
            if((sum == LEN[i]) cout << original[i] + "is normal\n" << endl;
            else cout << i + "is lack of value\n" << endl;
        } else {
            cout << "Fully None\n" << endl;
        }
        fill_n(bl_checker, 10, 0);
    }
}