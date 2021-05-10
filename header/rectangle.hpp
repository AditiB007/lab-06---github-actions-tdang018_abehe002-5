#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle();
        Rectangle(int w,int h): width(w), height(h) {}

        void set_width(int w);
        void set_height(int h);
        int area() {
            return (w * h);
        }

        int perimeter() {
            return ((2 * w) + (2 * h));
        }
};

#endif // RECTANGLE_HPP
