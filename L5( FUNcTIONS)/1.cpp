 // woh hote hain fucntions jinko ek baar declare krdo and fr baar baar call krlo toh woh wahi kaam krenge 
 #include <iostream>
 using namespace std;
 
 void printhello(){           // this is function name .. void isliye likha h coz yeh koi int type ka datatype return nhi krrha
                              //and yeh hmesha int main se pehle declare hoga  
    cout<<"jattan ka chhora \n";
 }
 int main (){
    // ab krenge funtion ko call 
    printhello();
    printhello();
    printhello();

    return 0;

 }