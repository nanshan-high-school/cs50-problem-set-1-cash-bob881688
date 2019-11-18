#include <iostream>
using namespace std;
int main() {
  int i;
    cout<<"請輸入金額=";
    cin>>i;
    cout<<"需要1000元"<<i/1000<<"張"<<endl;
    cout<<"需要100元"<<i/100-i/1000*10<<"張"<<endl;
    cout<<"需要10元"<<i/10-i/100*10<<"枚"<<endl;
    cout<<"需要1元"<<i/1-i/10*10<<"枚"<<endl;
}
