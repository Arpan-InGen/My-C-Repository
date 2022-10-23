#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int i;

    char *ptr[4] = {"books", "coding", "exercise", "movies"};

    char str[20];

    cout<<"\nEnter your favourite hobby: ";
    cin>>str;

    for (i=0; i<4; i++)
    {
        if(strcmp(str,*ptr[i]))
        {
            cout<<"\n\nYour favourite hobby is available here";
            break;
        }

    }

    if (i==4)
    cout<<"\n\nYour favourite hobby is not available here";

    return 0;
}