#ifndef BOX_H
#define BOX_H

class Box {
    public:
        void setWidth(double);
        void setLength(double);
        void setHeight(double);
        double getWidth() const;
        double getLength() const;        
        double getHeight() const;
        double getVolume() const;

    private:
        double width;
        double length;
        double height;
};


void Box::setWidth(double w) {
    width = w;
}

void Box::setLength(double len) {
    length = len;
}

void Box::setHeight(double h) {
    height = h;
}

double Box::getWidth() const {
    return width;
}

double Box::getLength() const {
    return length;
}

double Box::getHeight() const {
    return height;
}

double Box::getVolume() const {
    return width * length * height;
}

#endif