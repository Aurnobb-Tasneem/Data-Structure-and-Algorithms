//
// Created by UC on 11/8/2023.
//

#ifndef MANNUAL_HW_DYNARR_H
#define MANNUAL_HW_DYNARR_H
class dynArr
{
private:
    int *data;
    int size;
public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, int);
    int getValue(int);
};
#endif //MANNUAL_HW_DYNARR_H
