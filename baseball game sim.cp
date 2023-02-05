

#include<cmath>
#include<iostream>
using namespace std;

int main(){
    srand(time(0));
    bool bases[3] = {false,false,false};
    int autoRunner = 10;
    int inningNumber = 1;
    int outs = 0;
    int scores[2] = {0,0};
    bool topHalf = true;
    bool gameOver = false;
    int strat = rand()%10000;
    int runThousand = 0;
    bool bottomNinth = false;
    //while(runThousand<1000){
        while(gameOver == false){
            if(strat>=0&&strat<817){
                //cout<<"walk ";
                if(bases[0]==false&&bases[1]==false&&bases[2]==false){
                    bases[0]=true;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==false){
                    bases[1]=true;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==false){
                    bases[0]=true;
                }
                else if(bases[0]==false&&bases[1]==false&&bases[2]==true){
                    bases[0]=true;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==false){
                    bases[2]=true;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==true){
                    bases[1]=true;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==true){
                    bases[0]=true;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==true){
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
            }
            else if(strat>=817&&strat<2240){
                //cout<<"single ";
                if(bases[0]==false&&bases[1]==false&&bases[2]==false){
                    bases[0]=true;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==false){
                    bases[1]=true;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==false){
                    bases[0]=true;
                    bases[1]=false;
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==false&&bases[1]==false&&bases[2]==true){
                    bases[0]=true;
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==false){
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==true){
                    bases[1]=true;
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==true){
                    bases[0]=true;
                    bases[1]=false;
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==true){
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
            }
            else if(strat>=2240&&strat<2675){
                //cout<<"double ";
                if(bases[0]==false&&bases[1]==false&&bases[2]==false){
                    bases[1]=true;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==false){
                    bases[0]=false;
                    bases[1]=true;
                    bases[2]=true;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==false){
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==false&&bases[1]==false&&bases[2]==true){
                    bases[1]=true;
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==false){
                    bases[0]=false;
                    bases[2]=true;
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==true){
                    bases[0]=false;
                    bases[1]=true;
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==true){
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==true){
                    bases[0]=false;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
            }
            else if(strat>=2675&&strat<2710){
                //cout<<"triple ";
                if(bases[0]==false&&bases[1]==false&&bases[2]==false){
                    bases[2]=true;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==false){
                    bases[0]=false;
                    bases[2]=true;
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==false){
                    bases[1]=false;
                    bases[2]=true;
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==false&&bases[1]==false&&bases[2]==true){
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==false){
                    bases[0]=false;
                    bases[1]=false;
                    bases[2]=true;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==true){
                    bases[0]=false;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==true){
                    bases[1]=false;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==true){
                    bases[0]=false;
                    bases[1]=false;
                    if(topHalf == true) scores[0] += 3;
                    else scores[1] += 3;
                }
            }
            else if(strat>=2710&&strat<2996){
                //cout<<"home run ";
                if(bases[0]==false&&bases[1]==false&&bases[2]==false){
                    if(topHalf == true) scores[0] += 1;
                    else scores[1] += 1;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==false){
                    bases[0]=false;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==false){
                    bases[1]=false;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
                else if(bases[0]==false&&bases[1]==false&&bases[2]==true){
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 2;
                    else scores[1] += 2;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==false){
                    bases[0]=false;
                    bases[1]=false;
                    if(topHalf == true) scores[0] += 3;
                    else scores[1] += 3;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==true){
                    bases[0]=false;
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 3;
                    else scores[1] += 3;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==true){
                    bases[1]=false;
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 3;
                    else scores[1] += 3;
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==true){
                    bases[0]=false;
                    bases[1]=false;
                    bases[2]=false;
                    if(topHalf == true) scores[0] += 4;
                    else scores[1] += 4;
                }
            }
            else if(strat>=2996&&strat<5546){
                //cout<<"groundout ";
                if(bases[0]==false&&bases[1]==false&&bases[2]==false){
                    outs++;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==false){
                    bases[0]=false;
                    outs += 2;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==false){
                    bases[1]=false;
                    bases[2]=true;
                    outs++;
                }
                else if(bases[0]==false&&bases[1]==false&&bases[2]==true){
                    bases[2]=false;
                    outs++;
                    if(outs<3){
                        if(topHalf == true) scores[0] += 1;
                        else scores[1] += 1;
                    }
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==false){
                    bases[0]=false;
                    bases[1]=false;
                    bases[2]=true;
                    outs += 2;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==true){
                    bases[0]=false;
                    bases[2]=false;
                    outs += 2;
                    if(outs<3){
                        if(topHalf == true) scores[0] += 1;
                        else scores[1] += 1;
                    }
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==true){
                    bases[1]=false;
                    outs++;
                    if(outs<3){
                        if(topHalf == true) scores[0] += 1;
                        else scores[1] += 1;
                    }
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==true){
                    bases[0]=false;
                    bases[1]=false;
                    outs += 2;
                    if(outs<3){
                        if(topHalf == true) scores[0] += 1;
                        else scores[1] += 1;
                    }
                }
            }
            else if(strat>=5546&&strat<7758){
                //cout<<"flyout ";
                if(bases[0]==false&&bases[1]==false&&bases[2]==false){
                    outs++;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==false){
                    outs++;
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==false){
                    if(outs==0){
                        bases[1]=false;
                        bases[2]=true;
                    }
                    outs++;
                }
                else if(bases[0]==false&&bases[1]==false&&bases[2]==true){
                    bases[2]=false;
                    outs++;
                    if(outs<3){
                        if(topHalf == true) scores[0] += 1;
                        else scores[1] += 1;
                    }
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==false){
                    if(outs==0){
                        bases[1]=false;
                        bases[2]=true;
                    }
                    outs++;
                }
                else if(bases[0]==true&&bases[1]==false&&bases[2]==true){
                    bases[2]=false;
                    outs++;
                    if(outs<3){
                        if(topHalf == true) scores[0] += 1;
                        else scores[1] += 1;
                    }
                }
                else if(bases[0]==false&&bases[1]==true&&bases[2]==true){
                    bases[1]=false;
                    outs++;
                    if(outs<3){
                        if(topHalf == true) scores[0] += 1;
                        else scores[1] += 1;
                    }
                }
                else if(bases[0]==true&&bases[1]==true&&bases[2]==true){
                    bases[1]=false;
                    outs++;
                    if(outs<3){
                        if(topHalf == true) scores[0] += 1;
                        else scores[1] += 1;
                    }
                }
            }
            else if(strat>=7758&&strat<10000){
                //cout<<"strikeout ";
                outs++;
            }
            //cout<<bases[0]<<bases[1]<<bases[2]<<" ";
            if(topHalf==false&&scores[1]>scores[0]&&bottomNinth==true) gameOver = true;
            if(outs>=3){
                if(bottomNinth==false&&topHalf==true){
                    if(inningNumber==9&&scores[1]>scores[0]) gameOver=true;
                    else if(inningNumber==9) bottomNinth=true;
                    outs=0;
                    topHalf=false;
                    bases[0]=false;
                    bases[1]=false;
                    bases[2]=false;
                }
                else if(bottomNinth==false&&topHalf==false){
                    cout<<inningNumber<<"(A:"<<scores[0]<<" B:"<<scores[1]<<") ";
                    outs=0;
                    topHalf=true;
                    inningNumber++;
                    bases[0]=false;
                    bases[1]=false;
                    bases[2]=false;
                }
                else if(bottomNinth==true){
                    if(topHalf==false && scores[0]==scores[1]){
                        cout<<inningNumber<<"(A:"<<scores[0]<<" B:"<<scores[1]<<") ";
                        outs=0;
                        topHalf=true;
                        if(inningNumber<autoRunner){
                            bases[0]=false;
                            bases[1]=false;
                            bases[2]=false;
                        }
                        else{
                            bases[0]=false;
                            bases[1]=true;
                            bases[2]=false;
                        }
                        inningNumber++;
                    }
                    
                    else if(topHalf==false && scores[0]>scores[1]) gameOver=true;
                    if(topHalf==true){
                        outs=0;
                        topHalf=false;
                        if(inningNumber<autoRunner){
                            bases[0]=false;
                            bases[1]=false;
                            bases[2]=false;
                        }
                        else{
                            bases[0]=false;
                            bases[1]=true;
                            bases[2]=false;
                        }
                    }
                }
                //cout<<"new half inning"<<endl;
            }
            strat = rand()%10000;
        }
    cout<<inningNumber<<"(A:"<<scores[0]<<" B:"<<scores[1]<<") ";
    cout<<endl<<"Final Score Away:"<<scores[0]<<" - "<<"Home:"<<scores[1]<<endl<<"Innings Total: "<<inningNumber;
    cout<<endl<<"Winner: ";
    if(scores[0]>scores[1]) cout<<"Away Team";
    else cout<<"Home Team";
//        runThousand++;//run simulations
//        bases[0]=false;
//        bases[1]=false;
//        bases[2]=false;
//        inningNumber = 1;
//        outs = 0;
//        scores[0] = 0;
//        scores[1] = 0;
//        topHalf = true;
//        gameOver = false;
//        bottomNinth==false;
//        strat = rand()%10000;
    //}
    return 0;
}




