#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: addPeopleNum__10PeopleTaskFv
// Address: 0x20b410 - 0x20b440
void addPeopleNum__10PeopleTaskFv_0x20b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("addPeopleNum__10PeopleTaskFv");


    ctx->pc = 0x20b410u;

    // 0x20b410: 0x87858d78
    ctx->pc = 0x20b410u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937976)));
    // 0x20b414: 0x83848ba8
    ctx->pc = 0x20b414u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x20b418: 0x3c030051
    ctx->pc = 0x20b418u;
    SET_GPR_U32(ctx, 3, ((uint32_t)81 << 16));
    // 0x20b41c: 0x24633480
    ctx->pc = 0x20b41cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 13440));
    // 0x20b420: 0x24a50001
    ctx->pc = 0x20b420u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x20b424: 0x42040
    ctx->pc = 0x20b424u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x20b428: 0xa7858d78
    ctx->pc = 0x20b428u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937976), (uint16_t)GPR_U32(ctx, 5));
    // 0x20b42c: 0x642021
    ctx->pc = 0x20b42cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20b430: 0x84830000
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b434: 0x24630001
    ctx->pc = 0x20b434u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x20b438: 0x3e00008
    ctx->pc = 0x20B438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B43Cu;
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20B440u;
}
