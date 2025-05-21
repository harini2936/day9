int countdigit(int x){
        int c=0;
        while(x>0){
            c++;
            x/=10;
        }
        return c;
    }
        int countdigitr(int x)
        {
            if(x==0) return 0;
            else return 1+countdigitr(x/10);
            
        }
    int main ()
    {
        printf("%d",countdigit(12345));
        printf("%d",countdigitr(12345));
    }
    