#include <iostream>
using namespace std;


int main(){
    int n;
    n = 4;
    for(int i = 0 ; i < 2*n ; i++){
        if(i<n){
            for(int j = 0; j < 2*n ; j++){
                if(j<=i || j>=(2*n-i)-1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
        }
        cout << endl;
        }
        

        else if(i>=n){
            for(int j = 0; j < 2*n ; j++){
                if(j>=i || j<=(2*n-i)-1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
        }
        cout << endl;
        }

    }


    return 0;
}