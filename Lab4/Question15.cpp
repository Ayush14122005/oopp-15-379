#include <iostream>
#include <vector>
using namespace std;
class item{
    public:
    string name;
    int quantity;
    double price;
};
void displayCart(const vector<item>& cart){
   cout<<"\nName\tQuantity\tPrice\n";
   for(auto item:cart){
    cout<<item.name <<"\t"<<item.quantity<<"\t\t"<<item.price<<endl;
   }
}

double calculatetotal(const vector<item>& cart){
    double total=0;
    for (auto item:cart){
        total+=item.quantity* item.price;
    }
    return total;
}
item expensive(const vector<item>& cart){
    item max= cart[0];
    for(auto item: cart){
        if(item.price> max.price){
            max=item;
        }
    }
    return max;
}

void discount(vector <item>& cart){
    for(auto item:cart){
        if(item.price>1000){
          item.price=item.price * 0.9;
        }
    }
}



int main(){
vector<item> cart;
int n;
cout<<"Enter number of items in cart:";
cin>>n;
for(int i=0;i<n;i++){
    item x;
    cout<<"Enter name:";
    cin>>x.name;
    cout<<"Enter Quantity:";
    cin>>x.quantity;
    cout<<"Enter Price";
    cin>>x.price;
    cart.push_back(x);
}
displayCart(cart);
cout<<"Total amount:-"<<calculatetotal(cart);
item max=expensive(cart);
cout<<"Most expensive item:"<<max.name;
discount(cart);
cout<<"After discount:"<<endl;
displayCart(cart);
cout<<"After discount, total amount is:"<<calculatetotal(cart);
return 0;


}