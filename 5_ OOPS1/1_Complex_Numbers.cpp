class ComplexNumbers {
    // Complete this class
    private:
    int real ;
    int img;
    public:
    
    ComplexNumbers(int real=0, int img=0){
        this->real = real;
        this->img = img;
    }
    ComplexNumbers plus(ComplexNumbers x){
        real = real + x.real;
        img = img + x.img;
    }
    ComplexNumbers multiply(ComplexNumbers x){
        int ans1=(real*x.real)-(img*x.img);
        int ans2=(real*x.img)+(img*x.real);
        real = ans1;
        img = ans2;
    }
    void print(){
        cout<<real<<" + i"<<img<<endl;
    }  
};