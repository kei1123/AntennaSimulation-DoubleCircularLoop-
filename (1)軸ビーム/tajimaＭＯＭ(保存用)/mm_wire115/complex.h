//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//
//			‘fvZpwb_[@@complex.h
//
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////
//				NX
//////////////////////////////////////////////////////////////////////////////////

class complex{									//complexNX
public:
	double re;									//realiΐj
	double im;									//imaginaryij
};


//////////////////////////////////////////////////////////////////////////////////
//				‘fΜeνZ
//////////////////////////////////////////////////////////////////////////////////
complex Complex(double x,double y)				//ΐ©η‘fπμι
{
	complex z;
	z.re = x;
	z.im = y;
	return z;
}

complex operator+(complex x,complex y)			//‘fΖ‘fΜΑZ
{
	complex z;
	z.re = x.re + y.re;
	z.im = x.im + y.im;
	return z;
}

complex operator+(complex x,double y)			//‘fΖΐΜΑZ(‘f+ΐ)
{
	complex z;
	z.re = y + x.re;
	z.im = x.im;
	return z;
}

complex operator+(double x,complex y)			//‘fΖΐΜΑZ(ΐ+‘f)
{
	complex z;
	z.re = x + y.re ;
	z.im = y.im;
	return z;
}

complex operator-(complex x,complex y)			//‘fΖ‘fΜΈZ
{
	complex z;
	z.re = x.re - y.re;
	z.im = x.im - y.im;
	return z;
}

complex operator-(complex x,double y)			//‘fΖΐ  ΜΈZ(‘f-ΐ)
{
	complex z;
	z.re = x.re -y;
	z.im = x.im;
	return z;
}

complex operator-(double x ,complex y)			//‘fΖΐ  ΜΈZ(ΐ-‘f)
{   
	complex z;
	z.re = x - y.re;
	z.im = 0.0 - y.im;
	return z;
}

complex operator*(complex x,complex y)			//‘fΖ‘fΜζZ
{
	complex z;
	z.re = x.re*y.re - x.im*y.im;
	z.im = x.re*y.im + x.im*y.re;
	return z;
}

complex operator*(complex x,double y)			//‘fΖΐΜζZ(‘f*ΐ)
{
	complex z;
	z.re = y * x.re;
	z.im = y * x.im;
	return z;
}

complex operator*(double x,complex y)			//‘fΖΐΜζZ(ΐ*‘f)
{
	complex z;
	z.re = x * y.re;
	z.im = x * y.im;
	return z;
}

complex operator/(complex x,complex y)			//‘fΖ‘fΜZ
{                                             
	complex z;
	z.re = (x.re*y.re + x.im*y.im)/(y.re*y.re + y.im*y.im);
	z.im = (x.im*y.re - x.re*y.im)/(y.re*y.re + y.im*y.im);
	return z;
}

complex operator/(complex x,double y)			//‘fΖΐΜZ(‘fΐ)
{
	complex z;
	z.re = x.re / y;
	z.im = x.im / y;
	return z;
}

complex operator/(double x,complex y)			//‘fΖΐΜZ(ΐ‘f)
{
	complex z;
	z.re = (x*y.re)/(y.re*y.re + y.im*y.im);
	z.im = (-1.0* x*y.im)/(y.re*y.re + y.im*y.im);
	return z;
}

complex Exp(complex x)							//‘fΜwΦ
{												//exp(jb)=cos(b)+jsin(b)
	complex z;                             
	z.re = exp(x.re)*cos(x.im);
	z.im = exp(x.re)*sin(x.im);
	return z;
}

double Abs(complex x)							//‘fΜβΞl
{
	return sqrt(x.re*x.re + x.im*x.im);
}