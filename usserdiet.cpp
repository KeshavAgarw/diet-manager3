#include <iostream>
#include <string>
using namespace std;
int totalbfoodcal;
void breakfast()
{
    cout<<" please enter nmber of items you eat in breakfaast"<<endl;
    int itemsb;
    cin>>itemsb;
    string bfooditems[itemsb];
    int bfooditemscal[itemsb];
    for(int i =0;i<itemsb;i++)
    {
        cout<<"enter food name "<<endl;
        cin>>bfooditems[i];
        cout<<"enter the calories  of "<<bfooditems[i]<<endl;
        cin>>bfooditemscal[i];
        totalbfoodcal+=bfooditemscal[i];
    }
}
 int totallfoodcal;
void  lunch()
{
    cout<<" please enter nmber of items you eat in lunch"<<endl;
    int itemsl;
    cin>>itemsl;
    string lfooditems[itemsl];
    int lfooditemscal[itemsl];
   
    for(int i =0;i<itemsl;i++)
    {
        cout<<"enter food name "<<endl;
        cin>>lfooditems[i];
        cout<<"enter the calories  of "<<lfooditems[i]<<endl;
        cin>>lfooditemscal[i];
        totallfoodcal+=lfooditemscal[i];
    }
}
int  totalsfoodcal;
void snacks()
{
    cout<<" please enter nmber of items you eat in snacks"<<endl;
    int itemss;
    cin>>itemss;
    string sfooditems[itemss];
    int sfooditemscal[itemss];
   
    for(int i =0;i<itemss;i++)
    {
        cout<<"enter food name "<<endl;
        cin>>sfooditems[i];
        cout<<"enter the calories  of "<<sfooditems[i]<<endl;
        cin>>sfooditems[i];
        totalsfoodcal=totalsfoodcal+sfooditemscal[i];
    }
}
int totaldfoodcal;
void dinner(){
    cout<<" please enter nmber of items you eat in snacks"<<endl;
    int itemsd;
    cin>>itemsd;
    string dfooditems[itemsd];
    int dfooditemscal[itemsd];
   
    for(int i =0;i<itemsd;i++)
    {
        cout<<"enter food name "<<endl;
        cin>>dfooditems[i];
        cout<<"enter the calories  of "<<dfooditems[i]<<endl;
        cin>>dfooditems[i];
        totaldfoodcal=totaldfoodcal +dfooditemscal[i];
    }
}
int finalcalories= totalbfoodcal+totallfoodcal+totalsfoodcal+totaldfoodcal;
void display()
{
    cout<< "your total calories are"<<finalcalories<<endl;
    cout<<"your reqired calories are"<<endl;//need to enter required caloreies;
    cout << "you need to create a" <<endl;//need to enter finalcalories -requiredcalories and either deficit or surplus
   
}
int main(){
    breakfast();
}