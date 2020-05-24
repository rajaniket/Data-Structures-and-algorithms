void Binary_search(int key,int *a,int l){
int Start=0,End=l-1,Middle;
while(Start<=End){
Middle=(Start+End)/2;
if(a[Middle]==key)
{
    cout<<key<<" Found at index "<<Middle<<endl;
    return;
}
else if(a[Middle]>key)
    End=Middle-1;
else Start=Middle+1;
}
cout<<"Not found"<<endl;
}
