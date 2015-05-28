//
//  main.cpp
//  Wage Calculator
//
//  Created by Bilal Najar on 5/27/15.
//  Copyright (c) 2015 Bilal Najar. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    
    int month;
    float pay;
    float cost;
    int hours;
    int choice;
    double monthlyPay;
    double wageNeeded;
    
    cout<<"What are you calculating?"<<endl;
    cout<<"1. Monthly Pay"<<endl;
    cout<<"2. Wage Needed"<<endl;
    cin>>choice;
    
    if (choice==1)
    {
        cout<<"Hourly Wage: ";
        cin>>pay;
    
        
        cout<<"Hours Per Week: ";
        cin>>hours;
    
        monthlyPay= pay * hours * 4;
        cout<<"Monthly Pay: $";
        cout<<monthlyPay<<endl;
    }
    
    
    else if (choice==2)
    {
        cout<<"Cost: ";
        cin>>cost;
        
        cout<<"Amount of Months to Work: ";
        cin>>month;
    
        cout<<"Hours Per Week: ";
        cin>>hours;
        
        wageNeeded= (cost/month) / 4 / hours;
        cout<<"Hourly Wage: $";
        cout<<wageNeeded<<endl;
    
    }
    
    else
        cout<<"Invalid choice"<<endl;
    
    
    return 0;
}
