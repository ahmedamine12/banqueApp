#pragma once

namespace Banque
{
    class Devise;
    class MAD;
    class euro;
    class dolar :
        public Devise
    {
    public:
        dolar(float);
        void afficher() const override;
    };

}