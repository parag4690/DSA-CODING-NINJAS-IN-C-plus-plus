
class Polynomial {
     public:
    int *degCoeff; // Name of your array (Don't change this)
    int capacity;
    // Complete the class
    public:
    Polynomial()
    {
        degCoeff=new int[5];
        capacity=5;
        for(int i=0;i<capacity;i++)
        {   degCoeff[i]=0;   }                
    }
//copy constructor
    Polynomial(Polynomial const & p1)
    {
        this->degCoeff= new int[p1.capacity];
        for( int i=0;i<p1.capacity;i++)
        {
            this->degCoeff[i]=p1.degCoeff[i];      
        }

        capacity=p1.capacity;           
    }
//set coefficient
    void  setCoefficient(int degree,int coff)
    {
        while(degree>=capacity)
        {
            int *newarray=new int[2*capacity];       
            for(int i=0;i<capacity;i++)
            {
                newarray[i]=degCoeff[i];
            }
                                                    
            for(int j=capacity;j<2*capacity;j++)
            {
                newarray[j]=0;
            }

            delete [] degCoeff;
            degCoeff=newarray;
            capacity*=2;
        }
        degCoeff[degree]=coff;
    }
//print class
    void print() const
    {
        for(int i=0 ;i<capacity;i++)
        {
            if(this->degCoeff[i]==0)
                continue;
            else
            {
                cout<<degCoeff[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;
    }
//assigment constructor
    void operator=(Polynomial const & p1)
    {
          this->degCoeff= new int[p1.capacity];        //simialar as copy constructor
        for( int i=0;i<p1.capacity;i++)
        {
            this->degCoeff[i]=p1.degCoeff[i];
        }

        capacity=p1.capacity;
    }
//add
  Polynomial operator+( Polynomial & p2)          
    {
       int Max=max(capacity,p2.capacity);
       if(Max==capacity)
       {
           for(int i=p2.capacity;i<capacity;i++)
           {
               p2.setCoefficient(i,0);                     
           }                                               
       }
       if(Max==p2.capacity)
       {
        for(int i=capacity;i<p2.capacity;i++)
           {
               setCoefficient(i,0);
           }
       }
       Polynomial p3;
        for(int i=0;i<Max;i++)
        {
            p3.setCoefficient(i,degCoeff[i] + p2.degCoeff[i]);  
        }
        return p3;
    }
//subtract
    Polynomial operator-( Polynomial  & p2)              
    {
        int Max=max(capacity,p2.capacity);
       if(Max==capacity)
       {
           for(int i=p2.capacity;i<capacity;i++)
           {
               p2.setCoefficient(i,0);                                
           }
       }
       if(Max==p2.capacity)
       {
        for(int i=capacity;i<p2.capacity;i++)
           {
               setCoefficient(i,0);
           }
       }
       Polynomial p3;
        for(int i=0;i<Max;i++)
        {
            p3.setCoefficient(i,degCoeff[i] - p2.degCoeff[i]);
        }
        return p3;
    }
// multiply
 Polynomial operator*( Polynomial  & p2)
{
     Polynomial p3;
     for(int i=0;i<capacity;i++)    
     {
         Polynomial p;
         for(int j=0;j<p2.capacity;j++)   
         {
              p.setCoefficient(i+j,degCoeff[i]*p2.degCoeff[j]);     
         }
         p3=p3+p;
     }
    return p3; 
     
 }

};

