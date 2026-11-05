#include <iostream>

class Rekening
{
    private:
        double Saldo = 0.0;
    public:
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
};

int main()
{
    Rekening rekening;
    rekening.Storten(50);
    std::cout << rekening.GetSaldo() << "\n";
    rekening.Opnemen(25);
    std::cout << rekening.GetSaldo() << "\n";
    rekening.Opnemen(26);
    std::cout << rekening.GetSaldo() << "\n";
}