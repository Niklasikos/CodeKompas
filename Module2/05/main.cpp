#include <iostream>
#include <string>

class Rekening
{
    private:
        double Saldo;
    public:
        std::string eigenaar;
        void Storten(double bijvoegen)
        {
            Saldo += bijvoegen;
        }
        double GetSaldo() const // variablens kunnen niet veranderen hier
        {
            return Saldo;
        }
        void Opnemen(double opname)
        {
            double tussenSaldo = Saldo - opname;
            if (tussenSaldo < 0)
            {
                std::cout << "niet genoeg saldo\n";
                return;
            }
            Saldo -= opname;
        }
    Rekening(std::string name, double start = 0) : eigenaar(name), Saldo(start) // start is optional;
    {
        // waarom zou eignaar = name niet beter zijn?
    }
    ~Rekening()
    {
        std::cout << "Rekening van " << eigenaar << " gesloten\n";
    }
};

int main()
{
    Rekening rekening("jeff", 20.0);
    rekening.Storten(50);
    std::cout << rekening.GetSaldo() << "\n";
    rekening.Opnemen(25);
    std::cout << rekening.GetSaldo() << "\n";
    rekening.Opnemen(26);
    std::cout << rekening.GetSaldo() << "\n";

    return 0; // dat is wanneer de locale variablen worden destroyed
}