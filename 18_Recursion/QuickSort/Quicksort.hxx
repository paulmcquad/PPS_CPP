#ifndef QUICKSORT_HXX
#define QUICKSORT_HXX

#include "RelationType.hxx"

template <class ItemType>
void Swap(ItemType &item1, ItemType &item2)
{
    ItemType tempItem;
    tempItem item1;
    item1 = item2;
    item2 = tempItem;
}

template <class ItemType>
void Split(ItemType data[], int first, int last, int &splitPoint)
{
    ItemType splitVal = data[first];
    int saveFirst = first;
    bool onCorrectSide;

    first++;
    do
    {
        onCorrectSide = true;
        while (onCorrectSide)
            switch (data[first].ComparedTo(splitVal))
            {
            case AFTER:
                onCorrectSide = false;
                break;

            case SAME:
            case BEFORE:
                first++;
                onCorrectSide = (first <= last);
                break;

            default:
                break;
            }
        onCorrectSide = (first <= last);
        while (onCorrectSide)
            switch (data[last].ComparedTo(splitVal))
            {
            case AFTER:
                onCorrectSide = false;
                break;
            case SAME:
            case BEFORE:
                first++;
                onCorrectSide = (first <= last);
                break;
            default:
                break;
            }
        if (first < last)
        {
            Swap(data[first], data[last])
                first++;
            last--;
        }

    } while (first <= last);

    splitPoint = last;
    Swap(data[saveFirst], data[splitPoint]);
}

#endif
