#include<iostream>
#include<cmath>
using namespace std;

class incal{
     
    public:
    float a,b;
    char c;
    void cal(float a,float b,char c){
        switch (c)
        {      
        case '+' :
               cout<<"The sum of the given numbers "<<a <<" "<<c <<" " <<b <<" is = "<<a+b;
            break;
        case '-':
               cout<<"The sbtraction of the given numbers "<<a <<" "<<c <<" " <<b <<" is = "<<a-b;
            break;
        case '*':
               cout<<"The Multiplication of the given numbers "<<a <<" "<<c <<" " <<b <<" is = "<<a*b;
            break;
        case '/':
            if (b==0)
                {cout<<"ERROR!!! the Division is not possible!!";}
            else{    
               cout<<"The Divion of the given numbers "<<a <<" "<<c <<" " <<b <<" is = "<<a/b;}            
               break;
             

        default:
        cout<<"SORRY!!!\nBUT THIS ?{ "<<c<<" }? Is NOT IDENTIFIED BY THE CALCULATOR";
            break;
        }
    }

    float root(float a,char c){

        
        switch (c)
        {
        case 'r':
        if(a<0){
        cout<<"Square root of "<<a <<" is not possible."; 
        return 0;
        }

            cout<<"The square root of "<<a <<" is = " <<sqrt(a);
            break;
        
        }
    }

    void toexit(char c){
    switch (c){
    case 'e':
               cout<<"THANK YOU <WE WOULD LOVE TO WELCOME YOU AGAIN> ";
               break;
    }
}
    
};



int main(){

incal value;

    float a,b;
    char c,x;
    cout<<"!{------>THIS IS A CALCULATOR<------}!"<<endl<<endl;
    do{
    cout<<endl;
    cout<<endl;
    cout<<"PLEASE ENTER THE FIRST VALUE YOU WANT TO CALCULATE = ";
    cin>>a;
    cout<<endl;
    cout<<"PLEASE ENTER THE OPERATOR YOU WANT TO PROCEED WITH.{TO EXIT PRESS (e)}"<<endl<<endl;
    cout<<"FOR ADDION (+)"<<endl;
    cout<<"FOR Divison (/)"<<endl;
    cout<<"FOR Subtration (-)"<<endl;
    cout<<"FOR MULTIPLICATION (*)"<<endl;
    cout<<"FOR SQUAREROOT (r)"<<endl;
    cin>>c;
    if(c=='e'){
        value.toexit(c);
        break;
    }
    else{
    
    cout<<endl;
    if(c=='r'){
    value.root(a,c);}
    else{
    cout<<"PLEASE ENTER THE SECOND VALUE YOU WANT TO CALCULATE = ";
    cin>>b;
    cout<<endl;

    value.cal(a,b,c);
    }
    }
    cout<<endl;
    cout<<endl;
    cout<<"<--{TO CONTINU PRESS (c)}||{TO EXIT PRESS (e)}-->";
    cin>>x;


}while(x=='c');
    return 0;

}