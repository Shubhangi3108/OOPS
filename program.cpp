#<include.iostream>
using namespace std;
class ReverseString
{
    char str[10];int len;
    public:int opr();
    int opr()
    {
        len=0;
        for(i=0;str[i]!='\0';i++)
        {
            len=len+1;
        }
        for(i=(len-1);i>=0;i++)
        {
            cout<<str[i];
        }
        }
        int main()
        {

            ReverseString obj;
            obj.opr();
        }
    }
};
