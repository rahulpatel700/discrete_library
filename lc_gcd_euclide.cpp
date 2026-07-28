#include <iostream>
#include <array>
using namespace std;

//linear combination of gcd using euclidian method

class lc{
    private:
    int a,b; //a-->first number and b-->second number       
 
        int s;  
        int t;
        int gs1,gs2,gt1,gt2;
    public:
    
    lc(int num1,int num2){
    a=num1;
   b=num2;
   cout<<"a"<<a<<" "<<"b"<<b<<endl;
   remainder_and_quotent(a,b);
    }


    int s_fun(int q){
            static int  s1=1;
            static int s2=0;
            int s=s1-q*s2;
            gs1=s1;
            gs2=s2;
            s1=s2;
            s2=s;
            return s;

        }




        int t_fun(int q){
            
            static int t1=0;
            static int t2=1;
            int t=t1-q*t2;
            gt1=t1;
            gt2=t2;
            t1=t2;
            t2=t;
           // remainder_and_quotent(a,b)
            
            return t;
            
        }


    void remainder_and_quotent(int a , int b){
   
        int rem=1;
        cout<<"   q"<<"   a"<<"   b"<<"   r"<<"   s1"<<"   s2"<<"   s"<<"   t1"<<"   t2"<<"   t"<<endl;

          int greater_num_1=a>b?a:b;
                 int smallest_num_1=a<b?a:b;
              
         
        while(rem){
                 int greater_num=a>b?a:b;
                 int smallest_num=a<b?a:b;
             
            int remainder=greater_num % smallest_num;
            int quotent=greater_num / smallest_num;
            

          
            a=smallest_num;
            b=remainder;
          s=s_fun(quotent);
           t= t_fun(quotent);
          
             
            cout<<"   "<<quotent<<"   "<<greater_num<<"   "<<smallest_num<<"   "<<remainder<<"   "<<gs1<<"   "<<gs2<<"    "<<s<<"    "<<gt1<<"    "<<gt2<< "    "<<t<<endl;
           
   if (!remainder){
  
    cout<<"gcd("<<gs2<<","<<gt2<<")"<<"="<<gs2*greater_num_1+gt2*smallest_num_1<<"="<<gs2<<"*"<<greater_num_1<<" + "<<gt2<<"*"<<smallest_num_1<<endl;
                
                 break;
            }
        }

    




    }

};

int main(){

lc obj(128,325);
return 0;

}