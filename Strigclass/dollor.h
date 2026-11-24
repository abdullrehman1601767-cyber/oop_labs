#ifndef _DOLLOR_
#define _DOLLOR_
#include "String.h"
class Numbers
{
    private :
     int amount;
     inline static const String lessthen20[20] {"ZERO","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN","ELEVEN","TWELEVE","THIRTEEN","FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTTEEN","NINETEEN"};
     inline static const String tens[8] {"TWENTY","THIRTY","FOURTY","FIFTY","SIXTY","SEVENTY","EIGTHTY","NINTY"};
     inline static const String hundred  = "HUNDRED";
     inline static const String thousant = "THOUSANT";
    public :
     Numbers();
     Numbers(const int&);
     void print()const;
};
#endif