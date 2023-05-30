#include <iostream>
#include <cstdlib>
using namespace std;
class football_club{
    public:
    string name,manager;
    int yr_created,ovr_rat,season_goals,season_points;
    football_club(string a,string b,int c,int d){
        name=a;
        manager=b;
        yr_created=c;
        ovr_rat=d;
        season_goals=0;
        season_points=0;
   }
   void match(football_club x){
       int turns,x_turns,goals,x_goals;
       if(ovr_rat>x.ovr_rat){
           turns=5+(ovr_rat-x.ovr_rat)/3;
           x_turns=5;
       }
       else{
           x_turns=5+(x.ovr_rat-ovr_rat)/3;
           turns=5;
       }
        goals=0;
        x_goals=0;
        for(int i=0;i<turns;i++){
            goals+=rand()%2;
        }
        for(int i=0;i<x_turns;i++){
            x_goals+=rand()%2;
        }
        if(goals>x_goals){
            cout<<"The winner is "<<name;
            season_points+=3;
            
        }
        else if(goals==x_goals){
            cout<<"It is a draw between "<<name<<" and "<<x.name;
            season_points++;
            x.season_points++;
        }
        else{
            cout<<"The winner is "<<x.name;
            x.season_points+=3;
        }
        cout<<"\nScore: "<<name<<" "<<goals<<" | "<<x_goals<<" "<<x.name;
   }
};
int main() {
    football_club f1("Chelsea","Mauricio",1905,76);
    football_club f2("Arsenal","Mikel",1886,91);
    f1.match(f2);
}
