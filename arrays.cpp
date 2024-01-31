 #include<iostream>
 using namespace std;
 int main()
 {
//     int arr[]={10,20,30};
//     cout<<arr[1]<<endl;
// int marks[6];

// for (int i = 0; i < 6; i++)
// {
//     cout<<"Enter the marks of "<<i<<"the student"<<endl;
//    cin>>marks[i];
// }
// for (int j = 0; j < 6; j++)
// {
//     cout<<"Marks of "<<j<<"th student"<<endl;
//     cout<<marks[j]<<endl;
// }
int arr[2][3]=
{
    {10,20,30},
    {40,50,60}
};
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cout<<"value at i="<<i<<"and j= "<<j<<"is :" <<arr[i][j]<<endl;
    }
    
}

return 0;
 } 
 