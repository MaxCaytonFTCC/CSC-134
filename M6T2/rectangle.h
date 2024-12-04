#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
    public:
        void setWidth(double);
        void setLength(double);
        double getWidth() const;
        double getLength() const;        
        double getArea() const;

    private:
        double width;
        double length;
};


void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double len) {
    length = len;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    return width * length;
}

#endif