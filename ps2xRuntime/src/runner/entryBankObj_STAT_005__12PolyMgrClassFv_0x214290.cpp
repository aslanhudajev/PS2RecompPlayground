#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj_STAT_005__12PolyMgrClassFv
// Address: 0x214290 - 0x2142dc
void entryBankObj_STAT_005__12PolyMgrClassFv_0x214290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj_STAT_005__12PolyMgrClassFv");


    ctx->pc = 0x214290u;

    // 0x214290: 0x27bdffe0
    ctx->pc = 0x214290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x214294: 0x7fbf0010
    ctx->pc = 0x214294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x214298: 0x7fb00000
    ctx->pc = 0x214298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21429c: 0x3c010091
    ctx->pc = 0x21429cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2142a0: 0x8c261974
    ctx->pc = 0x2142a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 6516)));
    // 0x2142a4: 0x70808628
    ctx->pc = 0x2142a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2142a8: 0x3c010050
    ctx->pc = 0x2142a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2142ac: 0x8c240c68
    ctx->pc = 0x2142acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3176)));
    // 0x2142b0: 0x3c010091
    ctx->pc = 0x2142b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)145 << 16));
    // 0x2142b4: 0xc05aeba
    ctx->pc = 0x2142B4u;
    SET_GPR_U32(ctx, 31, 0x2142BCu);
    ctx->pc = 0x2142B8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 6512)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2142BCu; }
        else if (ctx->pc != 0x2142BCu) { ctx->pc = 0x2142BCu; }
    }
    if (ctx->pc != 0x2142BCu) { return; }
    ctx->pc = 0x2142BCu;
    // 0x2142bc: 0x8e030000
    ctx->pc = 0x2142bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2142c0: 0x24040002
    ctx->pc = 0x2142c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2142c4: 0x24020001
    ctx->pc = 0x2142c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2142c8: 0xac64000c
    ctx->pc = 0x2142c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2142cc: 0x7bbf0010
    ctx->pc = 0x2142ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2142d0: 0x7bb00000
    ctx->pc = 0x2142d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2142d4: 0x3e00008
    ctx->pc = 0x2142D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2142D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2142DCu;
}
