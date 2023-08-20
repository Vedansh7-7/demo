#include <iostream>

using namespace std;

int main()
{
    string x, y, c1;
    double D1;
    double D2;
    double Result;
    double t, p;
    string response;
    string F1;
    int c;
    p = 3.1415926535;
    cout <<"welcome to My early calculator!, I am Here to help you....\n";
    c1 = "yes";
    while (c1 == "yes"){
       cout <<"please select your choice...\n 1. Trignometry\n 2. Algebraic\n\n";
       cin>>c;
       if (c == 1){
           cout << "Oh! Looks like Someone is more interested in Mathematics ^-^\n\n\n Tell me any of the following Trignometric Function\n 1. SINE \n 2. COSINE \n 3. TANGENT \n 4. COTANGENT \n 5. SECANT \n 6. COSECANT \n\n Please mention your choice\n";
           cin >> y;
           cout << "tell me the angle for calculation Please! \n";
           cin >> t;
           t = ((t * 3.1415926535)/180);
           if(y == "SINE" or y=="1" or y=="sine" or y=="sin"){
              if(-p/2 <= t <= p/2 ){
           Result = ((t/1) - ((t*t*t)/6) +((t*t*t*t*t)/120) - ((t*t*t*t*t*t*t)/5040));
           cout << "I got Some results, Yipeee!\n\n" << Result<<endl<< endl;
           }
           }

           else if(y == "COSINE" or y=="2" or y=="cosine" or y=="cos"){
           Result = (1 - ((t*t)/2) +((t*t*t*t)/24) - ((t*t*t*t*t*t)/720));
           cout << "I got Some results, Yipeee!\n\n" << Result<<endl<< endl;
           }

           else if(y == "TANGENT" or y=="3" or y=="tangent" or y=="tan"){
           Result = (((t/1) - ((t*t*t)/6) +((t*t*t*t*t)/120) - ((t*t*t*t*t*t*t)/5040))/(1 - ((t*t)/2) +((t*t*t*t)/24) - ((t*t*t*t*t*t)/720)));
           cout << "I got Some results, Yipeee!\n\n" << Result<<endl<< endl;
           }

           else if(y == "COTANGENT" or y=="4" or y=="cotangent" or y=="cot"){
           Result =((1 - ((t*t)/2) +((t*t*t*t)/24) - ((t*t*t*t*t*t)/720)) / ((t/1) - ((t*t*t)/6) +((t*t*t*t*t)/120) - ((t*t*t*t*t*t*t)/5040)));
           cout << "I got Some results, Yipeee!\n\n" << Result<<endl<< endl;
           }

           else if(y == "SECANT" or y=="5" or y=="secant" or y=="sec"){
           Result = (1/(1 - ((t*t)/2) +((t*t*t*t)/24) - ((t*t*t*t*t*t)/720)));
           cout << "I got Some results, Yipeee!\n\n" << Result<<endl << endl;
           }

           else if(y == "COSECANT" or y=="6" or y=="cosecant" or y=="cosec"){
           Result =(1/ ((t/1) - ((t*t*t)/6) +((t*t*t*t*t)/120) - ((t*t*t*t*t*t*t)/5040)));
           cout << "I got Some results, Yipeee!\n\n" << Result<< endl<< endl;
           }
           
           
       }
       else if (c == 2){
               cout << "Enter Your Digits now, Digit 1 ??\n";
               cin >> D1;
               cout << "Enter Your Digit 2 !!\n";
               cin >> D2;
               cout <<" tell me the function you wanna perform\n 1. MULTIPLY\n 2.DIVIDE\n 3.ADDITION\n 4.SUBTRACTION \n Please enter your answer!!\n";
               cin >> x;

    if(x == "MULTIPLY" or x=="1" or x=="multiply"){
           Result = D1*D2;
           cout << "I got Some results, Yipeee!\n\n" << Result<<endl;

    }
    else if(x == "DIVIDE" or x=="divide" or x=="2"){
           Result = D1/D2;
           cout << "I got Some results, Yipeee!\n\n" << Result<<endl;

    }
    else if(x == "ADDITION" or x=="addition" or x=="3"){
           Result = D1+D2;
           cout << "I got Some results, Yipeee!\n\n" << Result<<endl;

    }
    else if(x == "SUBTRACTION" or x=="subtraction" or x=="4"){
           Result = D1-D2;
           cout << "I got Some results, Yipeee!\n\n" << Result<<endl;

    }
     else{
        cout << "Shayad aap Chahte hi nhi mera code succesfull ho -_-!\n";
    }
     
       }
       
    else{
        cout << "Shayad aap Chahte hi nhi mera code succesfull ho -_-!\n";
    }

   c1 = "no";

    
    cout<<"Do you want to continue? \n yes \n no"<<endl;
    cin >> c1;
    if (c1 == "no"){
      cout<<"JAI HIND";
      break;
    }
    else{
      continue;
    }

   }

    return 0;
}