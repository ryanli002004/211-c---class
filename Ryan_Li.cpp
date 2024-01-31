#include <iostream>
using namespace std;


int main(){


    int win[6] = {0,0,0,0,0,0};
    for (int a = 0; a <=9;a++){
        for (int b = 0; b <=9;b++){
            for (int c = 0; c <=9;c++){
                    for (int d = 0; d <=9;d++){
                        for (int e = 0; e <=9;e++){
                            for (int f = 0; f <=9;f++){
                                cout<<win[0]<<win[1]<<win[2]<<win[3]<<win[4]<<win[5];
                                cout<<endl;
                                if (win[5]==9){
                                    win[5] = 0;
                                }
                                else{
                                    win[5]+=1;
                                }
                                
                        }
                        if (win[4]==9){
                            win[4] = 0;
                        }
                        else{
                        win[4]+=1;
                        }
                    }
                    if (win[3]==9){
                        win[3] = 0;
                    }
                    else{
                    win[3]+=1;
                    }
                }
                if (win[2]==9){
                    win[2] = 0;
                }
                else{
                win[2]+=1;
                }
            }
            if (win[1]==9){
                win[1] = 0;
            }
            else{
            win[1]+=1;
            }
        }
        win[0]+=1;

    }

    return 0;
}