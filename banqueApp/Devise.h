#pragma once


namespace Banque {
	class dolar;
	class euro;
	class MAD;
	class Devise
	{
	private:
		double valeur;
		
	protected: float t[3];
	public:

		Devise(double val);

		Devise& operator+(const Devise& M) const;
		Devise& operator-(const Devise& M) const;
		Devise& operator*(const Devise& M) const;
		bool operator<=(const Devise& M)const;
		bool operator>=(const Devise& M) const;
		virtual dolar* ConvertirToDollar();
		virtual euro* ConvertirToEuro();
		virtual MAD* ConvertirToMAD();
		 virtual void afficher() const;
	};
};
