#include <iostream>
#include <string>
using namespace std;

int main() {
    

    string first;
    int initial;
    string last;
    string spe;
    int dot;
    int lee;
    int  v;

    cout << "이름을 입력하세요: ";
    cin >> first;
    cout << "나이를 입력하세요:";
    cin >> initial;
    cout << "나의 비전(한 단어)을 입력하세요:" ;
    cin>> last;
    cout<<"현재 달성치";
    cin>>lee;
    cout<<"목표 달성치";
    cin>>dot;
    cout<<"비전 활성화 여부";
    cin>>v;
    

    double num1 = (double) lee / dot * 100;
        if ( v == true )
            spe = "진행중";
        if ( v == false ) 
            spe = "준비중";

    cout<<"성함: "<<first<<"("<<initial<<"세)\n";

    cout<<"목표 비전: "<<last<<"\n";
    
    cout<<"진행도: "<<lee<<"/"<<dot<<"\n";

    cout<<"현재달성률: "<<num1<<"%\n";

    cout<<"운영상태: "<<spe;


    return 0;

}
