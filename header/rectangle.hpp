#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
    private:
        int width;
        int height;
    public:
        Rectangle() { width = 0; height = 0; }
        Rectangle(int w,int h): width(w), height(h) {
          if(w < 0 || h < 0) { width = 0; height = 0; }
        }

        void set_width(int w);
        void set_height(int h);
        int area() {
            return (width * height);
        }

        int perimeter() {
            return ((2 * width) + (2 * height));
        }
};

#endif // RECTANGLE_HPP
