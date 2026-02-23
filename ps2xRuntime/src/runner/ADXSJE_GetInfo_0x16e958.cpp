#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_GetInfo
// Address: 0x16e958 - 0x16e9bc
void ADXSJE_GetInfo_0x16e958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_GetInfo");


    ctx->pc = 0x16e958u;

    // 0x16e958: 0x27bdffb0
    ctx->pc = 0x16e958u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16e95c: 0x100582d
    ctx->pc = 0x16e95cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e960: 0xffb10030
    ctx->pc = 0x16e960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x16e964: 0x27a20018
    ctx->pc = 0x16e964u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 24));
    // 0x16e968: 0xffb00020
    ctx->pc = 0x16e968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16e96c: 0xc0882d
    ctx->pc = 0x16e96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e970: 0xe0802d
    ctx->pc = 0x16e970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e974: 0xafa90000
    ctx->pc = 0x16e974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x16e978: 0xffbf0040
    ctx->pc = 0x16e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16e97c: 0x27a60010
    ctx->pc = 0x16e97cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x16e980: 0xafa20008
    ctx->pc = 0x16e980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x16e984: 0x27a70012
    ctx->pc = 0x16e984u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 18));
    // 0x16e988: 0x27a80013
    ctx->pc = 0x16e988u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 19));
    // 0x16e98c: 0x27a90014
    ctx->pc = 0x16e98cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 20));
    // 0x16e990: 0xc05a594
    ctx->pc = 0x16E990u;
    SET_GPR_U32(ctx, 31, 0x16E998u);
    ctx->pc = 0x16E994u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 21));
    ctx->pc = 0x169650u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeInfo_0x169650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E998u; }
        else if (ctx->pc != 0x16E998u) { ctx->pc = 0x16E998u; }
    }
    if (ctx->pc != 0x16E998u) { return; }
    ctx->pc = 0x16E998u;
    // 0x16e998: 0x83a40015
    ctx->pc = 0x16e998u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 21)));
    // 0x16e99c: 0x83a30013
    ctx->pc = 0x16e99cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x16e9a0: 0xae040000
    ctx->pc = 0x16e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x16e9a4: 0xae230000
    ctx->pc = 0x16e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x16e9a8: 0xdfbf0040
    ctx->pc = 0x16e9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16e9ac: 0xdfb10030
    ctx->pc = 0x16e9acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16e9b0: 0xdfb00020
    ctx->pc = 0x16e9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e9b4: 0x3e00008
    ctx->pc = 0x16E9B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E9B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E9BCu;
}
