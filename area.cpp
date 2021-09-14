#include<iostream>

using namespace std;

int main(){
    
    int s=0;
    cout<<"which shapes area you want to find 1. Circle   2. Triangle   3. Square    4. Rectangle    5. Parallelogram   6 .Trapezium    7. Ellipse   "<<endl;
    cout<<"## Enter the number (to exit from program enter 404): ";
    cin>>s;

    if(s==1){
        float a,r;
        cout<<"Enter the radious of circle : ";
        cin>>r;
        cout<<endl;
        a=3.14285714*(r*r);
        cout<<"Area of circle is : "<<a<<endl;
    }
    else if(s==2){
        float a,b,h;
        cout<<"Enter the base of triangle : ";
        cin>>b;
        cout<<endl;
        cout<<"Enter the height of triangle : ";
        cin>>h;
        cout<<endl;
        a=0.5*b*h;
        cout<<"Area of triangle is : "<<a<<endl;
    }
    else if(s==3){
        float a,l;
        cout<<"Enter the length of square : ";
        cin>>l;
        cout<<endl;
        a=(l*l);
        cout<<"Area of square is : "<<a<<endl;
    }
   else if(s==4){
        float a,l,w;
        cout<<"Enter the length of rectangle : ";
        cin>>l;
        cout<<endl;
         cout<<"Enter the width of rectangle : ";
        cin>>w;
        cout<<endl;
        a=(l*w);
        cout<<"Area of rectangle is : "<<a<<endl;
    }
     else if(s==5){
        float a,b,h;
        cout<<"Enter the base of parallelogram : ";
        cin>>b;
        cout<<endl;
         cout<<"Enter the vertical height of parallelogram : ";
        cin>>h;
        cout<<endl;
        a=(b*h);
        cout<<"Area of parallelogram is : "<<a<<endl;
    }
     else if(s==6){
        float a,b,c,h;
        cout<<"Enter the length of parallel sides in this format(a b) : ";
        cin>>b>>c;
        cout<<endl;
         cout<<"Enter the height o trapezium : ";
        cin>>h;
        cout<<endl;
        a=0.5*(b+c)*h;
        cout<<"Area of trapezium is : "<<a<<endl;
    }
      else if(s==7){
        float a,b,c;
        cout<<"Enter the length of minor axis for ellipse : ";
        cin>>b;
        cout<<endl;
        cout<<"Enter the length of major axis for ellipse : ";
        cin>>c;
        cout<<endl;
        a=3.14285714*(b/2)*(c/2);
        cout<<"Area of ellipse is : "<<a<<endl;
    }
    else{
        cout<<"Enter the correct number!";
    }

    return 0;
}