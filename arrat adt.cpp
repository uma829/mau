#include<iostream>
using namespace std;
struct Array
{
    int *a;
    int Size;
    int length;
};
void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.a[i];
    }
}
int main()
{
    struct Array arr;
    cout<<"enter array size";
    cin>>arr.Size;

    arr.a=new int[arr.Size];
    arr.length=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr.a[i];
    }
    display(arr);

}
