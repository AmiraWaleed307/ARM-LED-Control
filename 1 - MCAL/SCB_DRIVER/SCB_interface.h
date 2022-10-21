#include "../0 - LIB/STD_TYPES.h"

u8 isNMIexceptionPending(void);
void SetNMIexceptionToPending(void);

u8 isPendSVPending(void);
void SetPendSVToPending(void);
void ClearPendSVPending(void);

u8 isSysTickPending(void);
void SetSysTickToPending(void);
void ClearSysTickPending(void);

void ChangeVectorTableOffset(u32);

void SetInterruptPriorityLevels(u8);

void SetSystemHandlerPrority(void);

void SetSystemHandlerControl(void);


