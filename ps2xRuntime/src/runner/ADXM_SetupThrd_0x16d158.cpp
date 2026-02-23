#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXM_SetupThrd
// Address: 0x16d158 - 0x16d288
void ADXM_SetupThrd_0x16d158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXM_SetupThrd");


    ctx->pc = 0x16d158u;

    // 0x16d158: 0x27bdffa0
    ctx->pc = 0x16d158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16d15c: 0x8f83812c
    ctx->pc = 0x16d15cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934828)));
    // 0x16d160: 0xffb00030
    ctx->pc = 0x16d160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d164: 0xffbf0050
    ctx->pc = 0x16d164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x16d168: 0x80802d
    ctx->pc = 0x16d168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d16c: 0xffb10040
    ctx->pc = 0x16d16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x16d170: 0x8f828128
    ctx->pc = 0x16d170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934824)));
    // 0x16d174: 0x1460003e
    ctx->pc = 0x16D174u;
    {
        const bool branch_taken_0x16d174 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x16D178u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x16d174) {
            ctx->pc = 0x16D270u;
            goto label_16d270;
        }
    }
    ctx->pc = 0x16D17Cu;
    // 0x16d17c: 0xc05f920
    ctx->pc = 0x16D17Cu;
    SET_GPR_U32(ctx, 31, 0x16D184u);
    ctx->pc = 0x17E480u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Init_0x17e480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D184u; }
        else if (ctx->pc != 0x16D184u) { ctx->pc = 0x16D184u; }
    }
    if (ctx->pc != 0x16D184u) { return; }
    ctx->pc = 0x16D184u;
    // 0x16d184: 0x3c040017
    ctx->pc = 0x16d184u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x16d188: 0x282d
    ctx->pc = 0x16d188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d18c: 0xc05f86c
    ctx->pc = 0x16D18Cu;
    SET_GPR_U32(ctx, 31, 0x16D194u);
    ctx->pc = 0x16D190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952984));
    ctx->pc = 0x17E1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbLock_0x17e1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D194u; }
        else if (ctx->pc != 0x16D194u) { ctx->pc = 0x16D194u; }
    }
    if (ctx->pc != 0x16D194u) { return; }
    ctx->pc = 0x16D194u;
    // 0x16d194: 0x3c040017
    ctx->pc = 0x16d194u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x16d198: 0x282d
    ctx->pc = 0x16d198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d19c: 0xc05f870
    ctx->pc = 0x16D19Cu;
    SET_GPR_U32(ctx, 31, 0x16D1A4u);
    ctx->pc = 0x16D1A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953096));
    ctx->pc = 0x17E1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbUnlock_0x17e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1A4u; }
        else if (ctx->pc != 0x16D1A4u) { ctx->pc = 0x16D1A4u; }
    }
    if (ctx->pc != 0x16D1A4u) { return; }
    ctx->pc = 0x16D1A4u;
    // 0x16d1a4: 0x5600000e
    ctx->pc = 0x16D1A4u;
    {
        const bool branch_taken_0x16d1a4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x16d1a4) {
            ctx->pc = 0x16D1A8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->pc = 0x16D1E0u;
            goto label_16d1e0;
        }
    }
    ctx->pc = 0x16D1ACu;
    // 0x16d1ac: 0x3c110023
    ctx->pc = 0x16d1acu;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x16d1b0: 0x24040018
    ctx->pc = 0x16d1b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x16d1b4: 0x2622e6c0
    ctx->pc = 0x16d1b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294960832));
    // 0x16d1b8: 0x24030019
    ctx->pc = 0x16d1b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 25));
    // 0x16d1bc: 0x24050001
    ctx->pc = 0x16d1bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d1c0: 0xac440010
    ctx->pc = 0x16d1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x16d1c4: 0xac430014
    ctx->pc = 0x16d1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x16d1c8: 0x24060008
    ctx->pc = 0x16d1c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x16d1cc: 0xae25e6c0
    ctx->pc = 0x16d1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960832), GPR_U32(ctx, 5));
    // 0x16d1d0: 0x24070010
    ctx->pc = 0x16d1d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x16d1d4: 0xac460004
    ctx->pc = 0x16d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x16d1d8: 0x1000000c
    ctx->pc = 0x16D1D8u;
    {
        const bool branch_taken_0x16d1d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16D1DCu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
        if (branch_taken_0x16d1d8) {
            ctx->pc = 0x16D20Cu;
            goto label_16d20c;
        }
    }
    ctx->pc = 0x16D1E0u;
label_16d1e0:
    // 0x16d1e0: 0x3c110023
    ctx->pc = 0x16d1e0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x16d1e4: 0x2624e6c0
    ctx->pc = 0x16d1e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294960832));
    // 0x16d1e8: 0xac830010
    ctx->pc = 0x16d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x16d1ec: 0x8e020000
    ctx->pc = 0x16d1ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d1f0: 0xae22e6c0
    ctx->pc = 0x16d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294960832), GPR_U32(ctx, 2));
    // 0x16d1f4: 0x8e030004
    ctx->pc = 0x16d1f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16d1f8: 0xac830004
    ctx->pc = 0x16d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x16d1fc: 0x8e020008
    ctx->pc = 0x16d1fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16d200: 0xac82000c
    ctx->pc = 0x16d200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x16d204: 0x8e030010
    ctx->pc = 0x16d204u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16d208: 0xac830014
    ctx->pc = 0x16d208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_16d20c:
    // 0x16d20c: 0xc0551f4
    ctx->pc = 0x16D20Cu;
    SET_GPR_U32(ctx, 31, 0x16D214u);
    ctx->pc = 0x1547D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x1547d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D214u; }
        else if (ctx->pc != 0x16D214u) { ctx->pc = 0x16D214u; }
    }
    if (ctx->pc != 0x16D214u) { return; }
    ctx->pc = 0x16D214u;
    // 0x16d214: 0xaf82817c
    ctx->pc = 0x16d214u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934908), GPR_U32(ctx, 2));
    // 0x16d218: 0x3a0282d
    ctx->pc = 0x16d218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d21c: 0x8f84817c
    ctx->pc = 0x16d21cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16d220: 0xc0551f8
    ctx->pc = 0x16D220u;
    SET_GPR_U32(ctx, 31, 0x16D228u);
    ctx->pc = 0x1547E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ReferThreadStatus_0x1547e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D228u; }
        else if (ctx->pc != 0x16D228u) { ctx->pc = 0x16D228u; }
    }
    if (ctx->pc != 0x16D228u) { return; }
    ctx->pc = 0x16D228u;
    // 0x16d228: 0x8fa30018
    ctx->pc = 0x16d228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16d22c: 0xc05b370
    ctx->pc = 0x16D22Cu;
    SET_GPR_U32(ctx, 31, 0x16D234u);
    ctx->pc = 0x16D230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935020), GPR_U32(ctx, 3));
    ctx->pc = 0x16CDC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SetupSafeThrd_0x16cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D234u; }
        else if (ctx->pc != 0x16D234u) { ctx->pc = 0x16D234u; }
    }
    if (ctx->pc != 0x16D234u) { return; }
    ctx->pc = 0x16D234u;
    // 0x16d234: 0xc05b3b4
    ctx->pc = 0x16D234u;
    SET_GPR_U32(ctx, 31, 0x16D23Cu);
    ctx->pc = 0x16CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SetupVsyncThrd_0x16ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D23Cu; }
        else if (ctx->pc != 0x16D23Cu) { ctx->pc = 0x16D23Cu; }
    }
    if (ctx->pc != 0x16D23Cu) { return; }
    ctx->pc = 0x16D23Cu;
    // 0x16d23c: 0xc05b3d2
    ctx->pc = 0x16D23Cu;
    SET_GPR_U32(ctx, 31, 0x16D244u);
    ctx->pc = 0x16CF48u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_SetupMwIdleThrd_0x16cf48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D244u; }
        else if (ctx->pc != 0x16D244u) { ctx->pc = 0x16D244u; }
    }
    if (ctx->pc != 0x16D244u) { return; }
    ctx->pc = 0x16D244u;
    // 0x16d244: 0x2622e6c0
    ctx->pc = 0x16d244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294960832));
    // 0x16d248: 0x8f84817c
    ctx->pc = 0x16d248u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
    // 0x16d24c: 0xc0551dc
    ctx->pc = 0x16D24Cu;
    SET_GPR_U32(ctx, 31, 0x16D254u);
    ctx->pc = 0x16D250u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D254u; }
        else if (ctx->pc != 0x16D254u) { ctx->pc = 0x16D254u; }
    }
    if (ctx->pc != 0x16D254u) { return; }
    ctx->pc = 0x16D254u;
    // 0x16d254: 0x3c050017
    ctx->pc = 0x16d254u;
    SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
    // 0x16d258: 0x24040005
    ctx->pc = 0x16d258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x16d25c: 0x24a5c9c0
    ctx->pc = 0x16d25cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953408));
    // 0x16d260: 0xc05f83a
    ctx->pc = 0x16D260u;
    SET_GPR_U32(ctx, 31, 0x16D268u);
    ctx->pc = 0x16D264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17E0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbBdr_0x17e0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D268u; }
        else if (ctx->pc != 0x16D268u) { ctx->pc = 0x16D268u; }
    }
    if (ctx->pc != 0x16D268u) { return; }
    ctx->pc = 0x16D268u;
    // 0x16d268: 0x8f83812c
    ctx->pc = 0x16d268u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934828)));
    // 0x16d26c: 0x24630001
    ctx->pc = 0x16d26cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_16d270:
    // 0x16d270: 0xdfbf0050
    ctx->pc = 0x16d270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d274: 0xdfb10040
    ctx->pc = 0x16d274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d278: 0xdfb00030
    ctx->pc = 0x16d278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d27c: 0xaf83812c
    ctx->pc = 0x16d27cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934828), GPR_U32(ctx, 3));
    // 0x16d280: 0x3e00008
    ctx->pc = 0x16D280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D284u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D1E0u: goto label_16d1e0;
            case 0x16D20Cu: goto label_16d20c;
            case 0x16D270u: goto label_16d270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D288u;
}
