#pragma once
#include"Devise.h"
namespace Banque {
    class MAD;
    class dolar;
    class euro :
        public Devise
    {
    public:
        euro(float);
        void afficher() const override;
    

    };

}