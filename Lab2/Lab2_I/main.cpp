#include <iostream>

using namespace std;

int main()
{
    int ans=0, speed;
    string no;
    do{
        cin>>speed;
        cin>>no;
        if(speed>60&&no!="A999AA"){
            if(no[1]==no[2]&&no[3]==no[2]) ans+=1000;
            else{
                if(no[1]==no[2]||no[3]==no[2]||no[1]==no[3]) ans+=500;
                else ans+=100;
            }

        }
    }while(no!="A999AA");
    cout << ans << endl;
    return 0;
}
