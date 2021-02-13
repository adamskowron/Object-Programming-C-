//int oblicz(int x, int y)
//{
//	return x + y;
//}

//float oblicz(float x, float y)
//{
//	return x + y;
//}

//double oblicz(double x, double y)
//{
//	return x + y;
//}

template<class I>
I oblicz(I x, I y)
{
	return x + y;
}

template<class TU>
class Vector
{
private:
	TU * _buf;
	int _size;
public:
	Vector(int size)
	{
		_size = size;
		_buf = new TU[_size];
	}
};

int main()
{
	int w = oblicz<int>(10, 11);
	float wf = oblicz<float>(1.2f, 13.0f);
	double wd = oblicz<double>(1.4, 1.2);

	Vector<int> tabInt(10);
	Vector<float> tabFloat(11);
}