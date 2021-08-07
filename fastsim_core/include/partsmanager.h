#ifndef __PARTSMANAGER_H__
#define __PARTSMANAGER_H__

class PartsManager;

#include "log.h"

#include "gate.h"

class PartsManager{

public:
    PartsManager(uint32_t maxParts);
    ~PartsManager();

    /**
     * @brief Creates a new part
     * @param name                          The Character for the part:
     *                                      A       AND
     *                                      O       OR
     *                                      N       NOT
     * @return
     */
    int                                     newPart(char name);

private:
    Gate**                                  _gates;
    uint32_t                                _nextGID;
};

#endif
