#pragma once
#include "Devise.h"
namespace Banque {
    class MAD :
        public Devise
    {
    public:
        MAD(float);
        void afficher() const override;
    };

}