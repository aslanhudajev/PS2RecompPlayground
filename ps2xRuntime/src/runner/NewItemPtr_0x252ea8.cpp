#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NewItemPtr
// Address: 0x252ea8 - 0x252fc0
void NewItemPtr_0x252ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x252ea8u;

    // 0x252ea8: 0x27bdffd0
    ctx->pc = 0x252ea8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252eac: 0xffbf0020
    ctx->pc = 0x252eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252eb0: 0xffb10010
    ctx->pc = 0x252eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252eb4: 0xffb00000
    ctx->pc = 0x252eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252eb8: 0x3c020034
    ctx->pc = 0x252eb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252ebc: 0x8c51cdd8
    ctx->pc = 0x252ebcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294954456)));
    // 0x252ec0: 0x3c020034
    ctx->pc = 0x252ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252ec4: 0x8c42cd98
    ctx->pc = 0x252ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x252ec8: 0x222102a
    ctx->pc = 0x252ec8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x252ecc: 0x10400017
    ctx->pc = 0x252ECCu;
    {
        const bool branch_taken_0x252ecc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x252ED0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x252ecc) {
            ctx->pc = 0x252F2Cu;
            goto label_252f2c;
        }
    }
    ctx->pc = 0x252ED4u;
    // 0x252ed4: 0x8c43cd94
    ctx->pc = 0x252ed4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x252ed8: 0x24020110
    ctx->pc = 0x252ed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
    // 0x252edc: 0x2221018
    ctx->pc = 0x252edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x252ee0: 0x431021
    ctx->pc = 0x252ee0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x252ee4: 0x844300d8
    ctx->pc = 0x252ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x252ee8: 0x2402ffff
    ctx->pc = 0x252ee8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252eec: 0x1062000f
    ctx->pc = 0x252EECu;
    {
        const bool branch_taken_0x252eec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x252EF0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x252eec) {
            ctx->pc = 0x252F2Cu;
            goto label_252f2c;
        }
    }
    ctx->pc = 0x252EF4u;
    // 0x252ef4: 0x8c43cd98
    ctx->pc = 0x252ef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x252ef8: 0x3c020034
    ctx->pc = 0x252ef8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252efc: 0x8c47cd94
    ctx->pc = 0x252efcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x252f00: 0x24050110
    ctx->pc = 0x252f00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 272));
    // 0x252f04: 0x2404ffff
    ctx->pc = 0x252f04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252f08: 0x26310001
    ctx->pc = 0x252f08u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x252f0c: 0x0
    ctx->pc = 0x252f0cu;
    // NOP
label_252f10:
    // 0x252f10: 0x223102a
    ctx->pc = 0x252f10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x252f14: 0x10400005
    ctx->pc = 0x252F14u;
    {
        const bool branch_taken_0x252f14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x252F18u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x252f14) {
            ctx->pc = 0x252F2Cu;
            goto label_252f2c;
        }
    }
    ctx->pc = 0x252F1Cu;
    // 0x252f1c: 0xc71021
    ctx->pc = 0x252f1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x252f20: 0x844200d8
    ctx->pc = 0x252f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
    // 0x252f24: 0x5444fffa
    ctx->pc = 0x252F24u;
    {
        const bool branch_taken_0x252f24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x252f24) {
            ctx->pc = 0x252F28u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x252F10u;
            goto label_252f10;
        }
    }
    ctx->pc = 0x252F2Cu;
label_252f2c:
    // 0x252f2c: 0x3c020034
    ctx->pc = 0x252f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252f30: 0x8c42cdd4
    ctx->pc = 0x252f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954452)));
    // 0x252f34: 0x222102a
    ctx->pc = 0x252f34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x252f38: 0x14400006
    ctx->pc = 0x252F38u;
    {
        const bool branch_taken_0x252f38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x252F3Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x252f38) {
            ctx->pc = 0x252F54u;
            goto label_252f54;
        }
    }
    ctx->pc = 0x252F40u;
    // 0x252f40: 0x3c04003b
    ctx->pc = 0x252f40u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x252f44: 0x24848958
    ctx->pc = 0x252f44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294936920));
    // 0x252f48: 0xc0b49a6
    ctx->pc = 0x252F48u;
    SET_GPR_U32(ctx, 31, 0x252F50u);
    ctx->pc = 0x252F4Cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252F50u; }
    }
    if (ctx->pc != 0x252F50u) { return; }
    ctx->pc = 0x252F50u;
    // 0x252f50: 0x3c030034
    ctx->pc = 0x252f50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_252f54:
    // 0x252f54: 0x8c62cd98
    ctx->pc = 0x252f54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954392)));
    // 0x252f58: 0x56220004
    ctx->pc = 0x252F58u;
    {
        const bool branch_taken_0x252f58 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x252f58) {
            ctx->pc = 0x252F5Cu;
            SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
            ctx->pc = 0x252F6Cu;
            goto label_252f6c;
        }
    }
    ctx->pc = 0x252F60u;
    // 0x252f60: 0x26220001
    ctx->pc = 0x252f60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x252f64: 0xac62cd98
    ctx->pc = 0x252f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954392), GPR_U32(ctx, 2));
    // 0x252f68: 0x3c030034
    ctx->pc = 0x252f68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_252f6c:
    // 0x252f6c: 0x26220001
    ctx->pc = 0x252f6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 1));
    // 0x252f70: 0xac62cdd8
    ctx->pc = 0x252f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954456), GPR_U32(ctx, 2));
    // 0x252f74: 0x3c020034
    ctx->pc = 0x252f74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x252f78: 0x24100110
    ctx->pc = 0x252f78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 272));
    // 0x252f7c: 0x2308018
    ctx->pc = 0x252f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x252f80: 0x8c42cd94
    ctx->pc = 0x252f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x252f84: 0x2028021
    ctx->pc = 0x252f84u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x252f88: 0x861100e6
    ctx->pc = 0x252f88u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 230)));
    // 0x252f8c: 0x200202d
    ctx->pc = 0x252f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f90: 0x282d
    ctx->pc = 0x252f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f94: 0xc0becc6
    ctx->pc = 0x252F94u;
    SET_GPR_U32(ctx, 31, 0x252F9Cu);
    ctx->pc = 0x252F98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 272));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252F9Cu; }
    }
    if (ctx->pc != 0x252F9Cu) { return; }
    ctx->pc = 0x252F9Cu;
    // 0x252f9c: 0x2402ffff
    ctx->pc = 0x252f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252fa0: 0xa60200d4
    ctx->pc = 0x252fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 212), (uint16_t)GPR_U32(ctx, 2));
    // 0x252fa4: 0xa61100e6
    ctx->pc = 0x252fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 230), (uint16_t)GPR_U32(ctx, 17));
    // 0x252fa8: 0x200102d
    ctx->pc = 0x252fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fac: 0xdfbf0020
    ctx->pc = 0x252facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252fb0: 0xdfb10010
    ctx->pc = 0x252fb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252fb4: 0xdfb00000
    ctx->pc = 0x252fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252fb8: 0x3e00008
    ctx->pc = 0x252FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252FBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x252F10u: goto label_252f10;
            case 0x252F2Cu: goto label_252f2c;
            case 0x252F54u: goto label_252f54;
            case 0x252F6Cu: goto label_252f6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x252FC0u;
}
