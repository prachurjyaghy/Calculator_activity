

int calc(int Calc_oprn,int a,int b)
{
         int x;
        switch(Calc_oprn)
        {
            case 0:  x = a + b;
                      break;

            case 1: x = a - b;
                      break;

            case 2: x=a*b;
                      break;

            case 3: x=a/b;
                      break;

            case 4: x=pow(a,b);
                      break;
          }
        return x;
}
