#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvlib_InitHn
// Address: 0x188330 - 0x1883a0
void mpvlib_InitHn_0x188330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvlib_InitHn");


    ctx->pc = 0x188330u;

    // 0x188330: 0x27bdffe0
    ctx->pc = 0x188330u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188334: 0xffb00000
    ctx->pc = 0x188334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x188338: 0xffbf0010
    ctx->pc = 0x188338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18833c: 0xc06201e
    ctx->pc = 0x18833Cu;
    SET_GPR_U32(ctx, 31, 0x188344u);
    ctx->pc = 0x188340u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188078u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_InitObj_0x188078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188344u; }
        else if (ctx->pc != 0x188344u) { ctx->pc = 0x188344u; }
    }
    if (ctx->pc != 0x188344u) { return; }
    ctx->pc = 0x188344u;
    // 0x188344: 0xae000164
    ctx->pc = 0x188344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
    // 0x188348: 0x3c05002e
    ctx->pc = 0x188348u;
    SET_GPR_U32(ctx, 5, ((uint32_t)46 << 16));
    // 0x18834c: 0x26040168
    ctx->pc = 0x18834cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 360));
    // 0x188350: 0x24060008
    ctx->pc = 0x188350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x188354: 0xc0601b2
    ctx->pc = 0x188354u;
    SET_GPR_U32(ctx, 31, 0x18835Cu);
    ctx->pc = 0x188358u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17040));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18835Cu; }
        else if (ctx->pc != 0x18835Cu) { ctx->pc = 0x18835Cu; }
    }
    if (ctx->pc != 0x18835Cu) { return; }
    ctx->pc = 0x18835Cu;
    // 0x18835c: 0xc061808
    ctx->pc = 0x18835Cu;
    SET_GPR_U32(ctx, 31, 0x188364u);
    ctx->pc = 0x188360u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 444));
    ctx->pc = 0x186020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_InitErrInf_0x186020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188364u; }
        else if (ctx->pc != 0x188364u) { ctx->pc = 0x188364u; }
    }
    if (ctx->pc != 0x188364u) { return; }
    ctx->pc = 0x188364u;
    // 0x188364: 0xc060d98
    ctx->pc = 0x188364u;
    SET_GPR_U32(ctx, 31, 0x18836Cu);
    ctx->pc = 0x188368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x183660u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVCMC_InitObj_0x183660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18836Cu; }
        else if (ctx->pc != 0x18836Cu) { ctx->pc = 0x18836Cu; }
    }
    if (ctx->pc != 0x18836Cu) { return; }
    ctx->pc = 0x18836Cu;
    // 0x18836c: 0xc0620e8
    ctx->pc = 0x18836Cu;
    SET_GPR_U32(ctx, 31, 0x188374u);
    ctx->pc = 0x188370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1883A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_InitDctPa_0x1883a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188374u; }
        else if (ctx->pc != 0x188374u) { ctx->pc = 0x188374u; }
    }
    if (ctx->pc != 0x188374u) { return; }
    ctx->pc = 0x188374u;
    // 0x188374: 0xc062096
    ctx->pc = 0x188374u;
    SET_GPR_U32(ctx, 31, 0x18837Cu);
    ctx->pc = 0x188378u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 392));
    ctx->pc = 0x188258u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_InitPicAtr_0x188258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18837Cu; }
        else if (ctx->pc != 0x18837Cu) { ctx->pc = 0x18837Cu; }
    }
    if (ctx->pc != 0x18837Cu) { return; }
    ctx->pc = 0x18837Cu;
    // 0x18837c: 0x24030002
    ctx->pc = 0x18837cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x188380: 0x200102d
    ctx->pc = 0x188380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188384: 0xae030160
    ctx->pc = 0x188384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x188388: 0xae000c60
    ctx->pc = 0x188388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3168), GPR_U32(ctx, 0));
    // 0x18838c: 0xae000c64
    ctx->pc = 0x18838cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3172), GPR_U32(ctx, 0));
    // 0x188390: 0xdfbf0010
    ctx->pc = 0x188390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188394: 0xdfb00000
    ctx->pc = 0x188394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188398: 0x3e00008
    ctx->pc = 0x188398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18839Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1883A0u;
}
