#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _groupOfPicturesHeader
// Address: 0x161f80 - 0x162064
void _groupOfPicturesHeader_0x161f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_groupOfPicturesHeader");


    ctx->pc = 0x161f80u;

    // 0x161f80: 0x27bdffa0
    ctx->pc = 0x161f80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x161f84: 0x3c020023
    ctx->pc = 0x161f84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x161f88: 0x8c44a21c
    ctx->pc = 0x161f88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x161f8c: 0x3c030023
    ctx->pc = 0x161f8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x161f90: 0xffb40040
    ctx->pc = 0x161f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x161f94: 0x3c060023
    ctx->pc = 0x161f94u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x161f98: 0xffb30030
    ctx->pc = 0x161f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x161f9c: 0x3c070023
    ctx->pc = 0x161f9cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x161fa0: 0xffb20020
    ctx->pc = 0x161fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x161fa4: 0x24050001
    ctx->pc = 0x161fa4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x161fa8: 0xffb10010
    ctx->pc = 0x161fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x161fac: 0x3c120023
    ctx->pc = 0x161facu;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x161fb0: 0xffb00000
    ctx->pc = 0x161fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161fb4: 0x3c110023
    ctx->pc = 0x161fb4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x161fb8: 0xffbf0050
    ctx->pc = 0x161fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x161fbc: 0x3c100023
    ctx->pc = 0x161fbcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161fc0: 0x8c62a174
    ctx->pc = 0x161fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943092)));
    // 0x161fc4: 0x3c140023
    ctx->pc = 0x161fc4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x161fc8: 0x8c830040
    ctx->pc = 0x161fc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x161fcc: 0x3c130023
    ctx->pc = 0x161fccu;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x161fd0: 0x24420001
    ctx->pc = 0x161fd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x161fd4: 0x24040001
    ctx->pc = 0x161fd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x161fd8: 0xac6000e8
    ctx->pc = 0x161fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
    // 0x161fdc: 0xacc2a170
    ctx->pc = 0x161fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943088), GPR_U32(ctx, 2));
    // 0x161fe0: 0xc0585d4
    ctx->pc = 0x161FE0u;
    SET_GPR_U32(ctx, 31, 0x161FE8u);
    ctx->pc = 0x161FE4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943096), GPR_U32(ctx, 5));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FE8u; }
        else if (ctx->pc != 0x161FE8u) { ctx->pc = 0x161FE8u; }
    }
    if (ctx->pc != 0x161FE8u) { return; }
    ctx->pc = 0x161FE8u;
    // 0x161fe8: 0xae02a45c
    ctx->pc = 0x161fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943836), GPR_U32(ctx, 2));
    // 0x161fec: 0xc0585d4
    ctx->pc = 0x161FECu;
    SET_GPR_U32(ctx, 31, 0x161FF4u);
    ctx->pc = 0x161FF0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161FF4u; }
        else if (ctx->pc != 0x161FF4u) { ctx->pc = 0x161FF4u; }
    }
    if (ctx->pc != 0x161FF4u) { return; }
    ctx->pc = 0x161FF4u;
    // 0x161ff4: 0x3c100023
    ctx->pc = 0x161ff4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x161ff8: 0xae22a460
    ctx->pc = 0x161ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943840), GPR_U32(ctx, 2));
    // 0x161ffc: 0xc0585d4
    ctx->pc = 0x161FFCu;
    SET_GPR_U32(ctx, 31, 0x162004u);
    ctx->pc = 0x162000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162004u; }
        else if (ctx->pc != 0x162004u) { ctx->pc = 0x162004u; }
    }
    if (ctx->pc != 0x162004u) { return; }
    ctx->pc = 0x162004u;
    // 0x162004: 0x3c110023
    ctx->pc = 0x162004u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x162008: 0xae42a464
    ctx->pc = 0x162008u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294943844), GPR_U32(ctx, 2));
    // 0x16200c: 0xc0585d4
    ctx->pc = 0x16200Cu;
    SET_GPR_U32(ctx, 31, 0x162014u);
    ctx->pc = 0x162010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162014u; }
        else if (ctx->pc != 0x162014u) { ctx->pc = 0x162014u; }
    }
    if (ctx->pc != 0x162014u) { return; }
    ctx->pc = 0x162014u;
    // 0x162014: 0xc0585d4
    ctx->pc = 0x162014u;
    SET_GPR_U32(ctx, 31, 0x16201Cu);
    ctx->pc = 0x162018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16201Cu; }
        else if (ctx->pc != 0x16201Cu) { ctx->pc = 0x16201Cu; }
    }
    if (ctx->pc != 0x16201Cu) { return; }
    ctx->pc = 0x16201Cu;
    // 0x16201c: 0xae82a468
    ctx->pc = 0x16201cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294943848), GPR_U32(ctx, 2));
    // 0x162020: 0xc0585d4
    ctx->pc = 0x162020u;
    SET_GPR_U32(ctx, 31, 0x162028u);
    ctx->pc = 0x162024u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162028u; }
        else if (ctx->pc != 0x162028u) { ctx->pc = 0x162028u; }
    }
    if (ctx->pc != 0x162028u) { return; }
    ctx->pc = 0x162028u;
    // 0x162028: 0xae62a46c
    ctx->pc = 0x162028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294943852), GPR_U32(ctx, 2));
    // 0x16202c: 0xc0585d4
    ctx->pc = 0x16202Cu;
    SET_GPR_U32(ctx, 31, 0x162034u);
    ctx->pc = 0x162030u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162034u; }
        else if (ctx->pc != 0x162034u) { ctx->pc = 0x162034u; }
    }
    if (ctx->pc != 0x162034u) { return; }
    ctx->pc = 0x162034u;
    // 0x162034: 0xae22a470
    ctx->pc = 0x162034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943856), GPR_U32(ctx, 2));
    // 0x162038: 0xc0585d4
    ctx->pc = 0x162038u;
    SET_GPR_U32(ctx, 31, 0x162040u);
    ctx->pc = 0x16203Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162040u; }
        else if (ctx->pc != 0x162040u) { ctx->pc = 0x162040u; }
    }
    if (ctx->pc != 0x162040u) { return; }
    ctx->pc = 0x162040u;
    // 0x162040: 0xae02a474
    ctx->pc = 0x162040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943860), GPR_U32(ctx, 2));
    // 0x162044: 0xdfbf0050
    ctx->pc = 0x162044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x162048: 0xdfb40040
    ctx->pc = 0x162048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16204c: 0xdfb30030
    ctx->pc = 0x16204cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162050: 0xdfb20020
    ctx->pc = 0x162050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162054: 0xdfb10010
    ctx->pc = 0x162054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162058: 0xdfb00000
    ctx->pc = 0x162058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16205c: 0x80586e2
    ctx->pc = 0x16205Cu;
    ctx->pc = 0x162060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
    ctx->pc = 0x161B88u;
    _extensionAndUserData_0x161b88(rdram, ctx, runtime); return;
    ctx->pc = 0x162064u;
}
