#include<iostream>
using namespace std;

int main(){
    int choice;
    int quantity;
    char more='y';
    float total=0;
    
    int pizzaCount=0,burgerCount=0,pastaCount=0,sandwichCount=0;

    do{
        cout<<"\n==== MENU ====\n";

        cout<<"1. PIZZA - 200\n";
        cout<<"2. BURGER - 100\n";
        cout<<"3. PASTA - 150\n";
        cout<<"4. SANDWICH -100\n";
        cout<<"5. EXIT\n";

        cout<<"\nEnter your choice: ";
        cin>>choice;
        
        if(choice==5) break;
        
        cout<<"Enter quantity: ";
        cin>>quantity;

        switch(choice){
            case 1: total+=200*quantity; pizzaCount+=quantity; break;
            case 2: total +=100*quantity; burgerCount+=quantity;break;
            case 3: total +=150*quantity; pastaCount+=quantity;break;
            case 4: total +=100*quantity; sandwichCount+=quantity;break;
            case 5: break;

            default:
                cout<<"Invalid choice!\n";
        }
        cout<<"Order more? (y/n): ";
        cin>>more;

    }while (more=='y'|| more=='Y') ;

    cout<<"\n===== BILL =====\n";
    
    if(pizzaCount>0) cout<<"\nPizza x "<< pizzaCount;    
    if(burgerCount>0)cout<<"\nBurger x "<< burgerCount;  
    if(pastaCount>0)cout<<"\nPasta x "<< pastaCount;
    if(sandwichCount>0)cout<<"\nSandwich x "<< sandwichCount;

    float gst=total*0.18;
    total+=gst;
    cout<<"\nGST (18%): "<<gst;
    cout<<"\nTotal Bill: "<<total<<endl;
    cout<<"\nThank you for your ordering!\n";
    return 0;
}