#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeEndingModel__15OneSkinMgrClassFP10MotObjTask
// Address: 0x1ffd30 - 0x1ffe74
void changeEndingModel__15OneSkinMgrClassFP10MotObjTask_0x1ffd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeEndingModel__15OneSkinMgrClassFP10MotObjTask");


    ctx->pc = 0x1ffd30u;

    // 0x1ffd30: 0x27bdffd0
    ctx->pc = 0x1ffd30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ffd34: 0x7fbf0020
    ctx->pc = 0x1ffd34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ffd38: 0x7fb10010
    ctx->pc = 0x1ffd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ffd3c: 0x7fb00000
    ctx->pc = 0x1ffd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ffd40: 0x70a08628
    ctx->pc = 0x1ffd40u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ffd44: 0x84a5002c
    ctx->pc = 0x1ffd44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1ffd48: 0x24030047
    ctx->pc = 0x1ffd48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 71));
    // 0x1ffd4c: 0x10a30003
    ctx->pc = 0x1FFD4Cu;
    {
        const bool branch_taken_0x1ffd4c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FFD50u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ffd4c) {
            ctx->pc = 0x1FFD5Cu;
            goto label_1ffd5c;
        }
    }
    ctx->pc = 0x1FFD54u;
    // 0x1ffd54: 0x10000043
    ctx->pc = 0x1FFD54u;
    {
        const bool branch_taken_0x1ffd54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FFD58u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1ffd54) {
            ctx->pc = 0x1FFE64u;
            goto label_1ffe64;
        }
    }
    ctx->pc = 0x1FFD5Cu;
label_1ffd5c:
    // 0x1ffd5c: 0x26050070
    ctx->pc = 0x1ffd5cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffd60: 0x24060001
    ctx->pc = 0x1ffd60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffd64: 0xc07fc64
    ctx->pc = 0x1FFD64u;
    SET_GPR_U32(ctx, 31, 0x1FFD6Cu);
    ctx->pc = 0x1FFD68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 602));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFD6Cu; }
        else if (ctx->pc != 0x1FFD6Cu) { ctx->pc = 0x1FFD6Cu; }
    }
    if (ctx->pc != 0x1FFD6Cu) { return; }
    ctx->pc = 0x1FFD6Cu;
    // 0x1ffd6c: 0x72202628
    ctx->pc = 0x1ffd6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffd70: 0x26050070
    ctx->pc = 0x1ffd70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffd74: 0x24060004
    ctx->pc = 0x1ffd74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ffd78: 0xc07fc64
    ctx->pc = 0x1FFD78u;
    SET_GPR_U32(ctx, 31, 0x1FFD80u);
    ctx->pc = 0x1FFD7Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 604));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFD80u; }
        else if (ctx->pc != 0x1FFD80u) { ctx->pc = 0x1FFD80u; }
    }
    if (ctx->pc != 0x1FFD80u) { return; }
    ctx->pc = 0x1FFD80u;
    // 0x1ffd80: 0x72202628
    ctx->pc = 0x1ffd80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffd84: 0x26050070
    ctx->pc = 0x1ffd84u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffd88: 0x24060008
    ctx->pc = 0x1ffd88u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ffd8c: 0xc07fc64
    ctx->pc = 0x1FFD8Cu;
    SET_GPR_U32(ctx, 31, 0x1FFD94u);
    ctx->pc = 0x1FFD90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 599));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFD94u; }
        else if (ctx->pc != 0x1FFD94u) { ctx->pc = 0x1FFD94u; }
    }
    if (ctx->pc != 0x1FFD94u) { return; }
    ctx->pc = 0x1FFD94u;
    // 0x1ffd94: 0x72202628
    ctx->pc = 0x1ffd94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffd98: 0x26050070
    ctx->pc = 0x1ffd98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffd9c: 0x24060005
    ctx->pc = 0x1ffd9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ffda0: 0xc07fc64
    ctx->pc = 0x1FFDA0u;
    SET_GPR_U32(ctx, 31, 0x1FFDA8u);
    ctx->pc = 0x1FFDA4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 605));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDA8u; }
        else if (ctx->pc != 0x1FFDA8u) { ctx->pc = 0x1FFDA8u; }
    }
    if (ctx->pc != 0x1FFDA8u) { return; }
    ctx->pc = 0x1FFDA8u;
    // 0x1ffda8: 0x72202628
    ctx->pc = 0x1ffda8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffdac: 0x26050070
    ctx->pc = 0x1ffdacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffdb0: 0x24060009
    ctx->pc = 0x1ffdb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ffdb4: 0xc07fc64
    ctx->pc = 0x1FFDB4u;
    SET_GPR_U32(ctx, 31, 0x1FFDBCu);
    ctx->pc = 0x1FFDB8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 600));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDBCu; }
        else if (ctx->pc != 0x1FFDBCu) { ctx->pc = 0x1FFDBCu; }
    }
    if (ctx->pc != 0x1FFDBCu) { return; }
    ctx->pc = 0x1FFDBCu;
    // 0x1ffdbc: 0x72202628
    ctx->pc = 0x1ffdbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffdc0: 0x26050070
    ctx->pc = 0x1ffdc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffdc4: 0x2406000d
    ctx->pc = 0x1ffdc4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ffdc8: 0xc07fc64
    ctx->pc = 0x1FFDC8u;
    SET_GPR_U32(ctx, 31, 0x1FFDD0u);
    ctx->pc = 0x1FFDCCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 606));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDD0u; }
        else if (ctx->pc != 0x1FFDD0u) { ctx->pc = 0x1FFDD0u; }
    }
    if (ctx->pc != 0x1FFDD0u) { return; }
    ctx->pc = 0x1FFDD0u;
    // 0x1ffdd0: 0x72202628
    ctx->pc = 0x1ffdd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffdd4: 0x26050070
    ctx->pc = 0x1ffdd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffdd8: 0x24060010
    ctx->pc = 0x1ffdd8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ffddc: 0xc07fc64
    ctx->pc = 0x1FFDDCu;
    SET_GPR_U32(ctx, 31, 0x1FFDE4u);
    ctx->pc = 0x1FFDE0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 601));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDE4u; }
        else if (ctx->pc != 0x1FFDE4u) { ctx->pc = 0x1FFDE4u; }
    }
    if (ctx->pc != 0x1FFDE4u) { return; }
    ctx->pc = 0x1FFDE4u;
    // 0x1ffde4: 0x72202628
    ctx->pc = 0x1ffde4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffde8: 0x26050070
    ctx->pc = 0x1ffde8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffdec: 0x2406000e
    ctx->pc = 0x1ffdecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ffdf0: 0xc07fc64
    ctx->pc = 0x1FFDF0u;
    SET_GPR_U32(ctx, 31, 0x1FFDF8u);
    ctx->pc = 0x1FFDF4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 603));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFDF8u; }
        else if (ctx->pc != 0x1FFDF8u) { ctx->pc = 0x1FFDF8u; }
    }
    if (ctx->pc != 0x1FFDF8u) { return; }
    ctx->pc = 0x1FFDF8u;
    // 0x1ffdf8: 0x72202628
    ctx->pc = 0x1ffdf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffdfc: 0x26050070
    ctx->pc = 0x1ffdfcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffe00: 0x24060011
    ctx->pc = 0x1ffe00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ffe04: 0xc07fc64
    ctx->pc = 0x1FFE04u;
    SET_GPR_U32(ctx, 31, 0x1FFE0Cu);
    ctx->pc = 0x1FFE08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 598));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE0Cu; }
        else if (ctx->pc != 0x1FFE0Cu) { ctx->pc = 0x1FFE0Cu; }
    }
    if (ctx->pc != 0x1FFE0Cu) { return; }
    ctx->pc = 0x1FFE0Cu;
    // 0x1ffe0c: 0x72202628
    ctx->pc = 0x1ffe0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ffe10: 0x26050070
    ctx->pc = 0x1ffe10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 112));
    // 0x1ffe14: 0x2406000b
    ctx->pc = 0x1ffe14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1ffe18: 0xc07fc64
    ctx->pc = 0x1FFE18u;
    SET_GPR_U32(ctx, 31, 0x1FFE20u);
    ctx->pc = 0x1FFE1Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 607));
    ctx->pc = 0x1FF190u;
    {
        const uint32_t __entryPc = ctx->pc;
        partsChange__15OneSkinMgrClassFP6MOPRTSii_0x1ff190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFE20u; }
        else if (ctx->pc != 0x1FFE20u) { ctx->pc = 0x1FFE20u; }
    }
    if (ctx->pc != 0x1FFE20u) { return; }
    ctx->pc = 0x1FFE20u;
    // 0x1ffe20: 0x3c0400ad
    ctx->pc = 0x1ffe20u;
    SET_GPR_U32(ctx, 4, ((uint32_t)173 << 16));
    // 0x1ffe24: 0x34830007
    ctx->pc = 0x1ffe24u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 7));
    // 0x1ffe28: 0xae0309d0
    ctx->pc = 0x1ffe28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2512), GPR_U32(ctx, 3));
    // 0x1ffe2c: 0x3483000d
    ctx->pc = 0x1ffe2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 13));
    // 0x1ffe30: 0xae030610
    ctx->pc = 0x1ffe30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1552), GPR_U32(ctx, 3));
    // 0x1ffe34: 0x34830001
    ctx->pc = 0x1ffe34u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), 1));
    // 0x1ffe38: 0xae030250
    ctx->pc = 0x1ffe38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
    // 0x1ffe3c: 0x8e030c64
    ctx->pc = 0x1ffe3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 3172)));
    // 0x1ffe40: 0x2404bfff
    ctx->pc = 0x1ffe40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ffe44: 0x641824
    ctx->pc = 0x1ffe44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffe48: 0xae030c64
    ctx->pc = 0x1ffe48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3172), GPR_U32(ctx, 3));
    // 0x1ffe4c: 0xae000bb0
    ctx->pc = 0x1ffe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2992), GPR_U32(ctx, 0));
    // 0x1ffe50: 0x8e030f34
    ctx->pc = 0x1ffe50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 3892)));
    // 0x1ffe54: 0x641824
    ctx->pc = 0x1ffe54u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ffe58: 0xae030f34
    ctx->pc = 0x1ffe58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3892), GPR_U32(ctx, 3));
    // 0x1ffe5c: 0xae000e80
    ctx->pc = 0x1ffe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3712), GPR_U32(ctx, 0));
    // 0x1ffe60: 0x7bbf0020
    ctx->pc = 0x1ffe60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ffe64:
    // 0x1ffe64: 0x7bb10010
    ctx->pc = 0x1ffe64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffe68: 0x7bb00000
    ctx->pc = 0x1ffe68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffe6c: 0x3e00008
    ctx->pc = 0x1FFE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFE70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FFD5Cu: goto label_1ffd5c;
            case 0x1FFE64u: goto label_1ffe64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FFE74u;
}
