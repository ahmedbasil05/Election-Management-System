#include<iostream>
using namespace std;
int main()
{
   int votes1=0,votes2=0,votes3=0,votes4=0,votes5=0,spoiltvotes=0;
   int i,n,age,vote,arr[4],end;
   cout<<"\t                                           Electronic Voting System                     "<<endl;
   cout<<"Enter Security Key "<<endl;
   cin>>arr[4];
   if(arr[4]==0000)
   {
   cout<<"Enter the number of voters"<<endl;
   cin>>n;
   for (i=1;i<=n;i++)
   {
       cout<<"Enter Voters Age"<<endl;
       cin>>age;
       if(age>=18)
       {
        cout<<"You are eligible for voting."<<endl;
        cout<<"List of Canidates :"<<endl;
        cout<<"1. ABC"<<endl;
        cout<<"2. JKL"<<endl;
        cout<<"3. MNO"<<endl;
        cout<<"4. PQR"<<endl;
        cout<<"5. XYX"<<endl;
        cout<<"6 .Others"<<endl;
        cout<<"Select your political party (candidate) "<<endl;
       }
       else
       {
           cout<<"You are Not Eligible for voting"<<endl;
       }
    if(age>=18)
    {
    cout<<"\n Enter your vote:\t";
      cin>>vote;
      switch(vote)
      {
         case 1: votes1++;
         break;

         case 2:votes2++;
         break;


         case 3:votes3++;
         break;

         case 4:votes4++;
         break;

         case 5:votes5++;
         break;

         default:spoiltvotes++;
      }
    }

    }
    cout<<endl;
    cout<<"To End Voting Press 1 "<<endl;
    cin>>end;
    if(end==1)
    {
    cout<<"Voting Time Ended"<<endl;
    cout<<endl;
    cout<<"Number of votes for ABC:"<<votes1<<endl;
    cout<<"Number of votes for JKL:"<<votes2<<endl;
    cout<<"Number of votes for PQR:"<<votes3<<endl;
    cout<<"Number of votes for XYZ:"<<votes4<<endl;
    cout<<"Number of votes for Others:"<<votes5<<endl;
    cout<<"Number of spoilt votes"<< spoiltvotes;
}
}
else
{
	cout<<"Incorrect Code \n Please Enter Correct Security Code";
}
}
