
class cube
{
public:
	cube(int _length, int _width, int _height);
	int getL() { return length; }
	int getW() { return width; }
	int getH() { return height; }

private:
	int length, width, height;
};