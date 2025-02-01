#include <iostream>
using namespace std;

int main()
{
//even & odd app

// int num;
// cin>> num;

// if (num % 2==0)
// {
//     cout <<"num is even"<<endl;

// }
// else
// {
// cout << "num is odd"<<endl;

// }

//////////////////////////////////////////////////////////////////////

// find the greatest num

// int a , b , c ;
// cin >> a >> b >> c; 
// //cout << a << b << c;
// if( a > b && a > c)
// {
//    cout << a << "THE GREATEST NUM "<<endl;
// }
// else if( b> c)//(b > a &&)>> deletable
//  {
//    cout << b << "THE GREATEST NUM "<<endl;
// } 
// else 
// {
//    cout << c << "THE GREATEST NUM "<<endl;
// }

/////////////////////////////////////////////////////////////////

// user rank checker
// int points;
// cin>> points;
// if(points>0 && points <=500)
// {
//    cout <<"YOUR POINTS IS GOOD"<<endl;
// }
// else if(points >500 && points < 1000)
// {
//    cout << "YOUR POINTS IS VEERY GOOD "<<endl;
// }
// else
// {
//    cout << "YOUR POINTS in "<<endl;
// }

////////////////////////////////////////////////////////////////////////

// simple calculator
int num_one , num_two,op;
cout <<"Type Number one  "<<endl;
cin>> num_one;
cout <<"choose operator  "<<endl;
cout << "[1] + "<<endl;
cout << "[2] - "<<endl;
cout << "[3] / "<<endl;
cout << "[4] * "<<endl;
cin>> op;
cout << "Type Number Two"<<endl;

cin>> num_two;
if (op==1)cout << num_one + num_two <<endl;
else if(op==2)cout << num_one - num_two <<endl;
else if (op==3)cout << num_one / num_two <<endl;
else if (op==4)cout << num_one * num_two <<endl;
else cout << "operation is not valid"<<endl;


    return 0;
}

