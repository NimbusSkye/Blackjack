#include "AbstractPlayer.h"

bool AbstractPlayer::isBusted() {
    return Hand::getTotal()>21;
}