#ifndef __PARTSMANAGER_H__
#define __PARTSMANAGER_H__

class PartsManager;

#include "log.h"

#include "part.h"

class PartsManager{

public:
    PartsManager(uint32_t maxParts);
    ~PartsManager();

    const static uint16_t                   AND     =   1;
    const static uint16_t                   OR      =   2;
    const static uint16_t                   NOT     =   3;

    /**
     * @brief Creates a new part
     * @param part_id                       The id for the part:
     *                                      AND
     *                                      OR
     *                                      NOT
     * @return                              The global ID of the part
     */
    uint32_t                                newPart(uint16_t part_id);

private:
    Part**                                  _parts;
    uint32_t                                _nextGID;
};

#endif
