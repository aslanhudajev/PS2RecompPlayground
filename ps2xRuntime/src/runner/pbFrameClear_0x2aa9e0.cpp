#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbFrameClear
// Address: 0x2aa9e0 - 0x2aaad4
void pbFrameClear_0x2aa9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aa9e0u;

    // 0x2aa9e0: 0x27bdff60
    ctx->pc = 0x2aa9e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2aa9e4: 0xffbf0090
    ctx->pc = 0x2aa9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2aa9e8: 0x3c020036
    ctx->pc = 0x2aa9e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aa9ec: 0x8c43dee0
    ctx->pc = 0x2aa9ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aa9f0: 0x3c027000
    ctx->pc = 0x2aa9f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2aa9f4: 0x34420008
    ctx->pc = 0x2aa9f4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2aa9f8: 0xafa20000
    ctx->pc = 0x2aa9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2aa9fc: 0xafa00004
    ctx->pc = 0x2aa9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2aaa00: 0xafa00008
    ctx->pc = 0x2aaa00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2aaa04: 0x3c025000
    ctx->pc = 0x2aaa04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20480 << 16));
    // 0x2aaa08: 0x34420008
    ctx->pc = 0x2aaa08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 8));
    // 0x2aaa0c: 0xafa2000c
    ctx->pc = 0x2aaa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2aaa10: 0x34028007
    ctx->pc = 0x2aaa10u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32775));
    // 0x2aaa14: 0xafa20010
    ctx->pc = 0x2aaa14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2aaa18: 0x3c021000
    ctx->pc = 0x2aaa18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x2aaa1c: 0xafa20014
    ctx->pc = 0x2aaa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2aaa20: 0x2402000e
    ctx->pc = 0x2aaa20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x2aaa24: 0xafa20018
    ctx->pc = 0x2aaa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x2aaa28: 0xafa0001c
    ctx->pc = 0x2aaa28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2aaa2c: 0xffa00020
    ctx->pc = 0x2aaa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
    // 0x2aaa30: 0x8c620008
    ctx->pc = 0x2aaa30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2aaa34: 0xdc420020
    ctx->pc = 0x2aaa34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2aaa38: 0xffa20030
    ctx->pc = 0x2aaa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x2aaa3c: 0xffa00040
    ctx->pc = 0x2aaa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
    // 0x2aaa40: 0x24020006
    ctx->pc = 0x2aaa40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x2aaa44: 0xffa20050
    ctx->pc = 0x2aaa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x2aaa48: 0xafa40060
    ctx->pc = 0x2aaa48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2aaa4c: 0x3c023f80
    ctx->pc = 0x2aaa4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x2aaa50: 0xafa20064
    ctx->pc = 0x2aaa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2aaa54: 0x3c027200
    ctx->pc = 0x2aaa54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)29184 << 16));
    // 0x2aaa58: 0x34426c00
    ctx->pc = 0x2aaa58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 27648));
    // 0x2aaa5c: 0xffa20070
    ctx->pc = 0x2aaa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
    // 0x2aaa60: 0x34028e00
    ctx->pc = 0x2aaa60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 36352));
    // 0x2aaa64: 0x21438
    ctx->pc = 0x2aaa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2aaa68: 0x34429400
    ctx->pc = 0x2aaa68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 37888));
    // 0x2aaa6c: 0xffa20080
    ctx->pc = 0x2aaa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
    // 0x2aaa70: 0x2402004a
    ctx->pc = 0x2aaa70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 74));
    // 0x2aaa74: 0xffa20028
    ctx->pc = 0x2aaa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x2aaa78: 0x2402004c
    ctx->pc = 0x2aaa78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 76));
    // 0x2aaa7c: 0xffa20038
    ctx->pc = 0x2aaa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x2aaa80: 0x24020047
    ctx->pc = 0x2aaa80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
    // 0x2aaa84: 0xffa20048
    ctx->pc = 0x2aaa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 2));
    // 0x2aaa88: 0xffa00058
    ctx->pc = 0x2aaa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 0));
    // 0x2aaa8c: 0x24020001
    ctx->pc = 0x2aaa8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aaa90: 0xffa20068
    ctx->pc = 0x2aaa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 2));
    // 0x2aaa94: 0x24020005
    ctx->pc = 0x2aaa94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2aaa98: 0xffa20078
    ctx->pc = 0x2aaa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 2));
    // 0x2aaa9c: 0xffa20088
    ctx->pc = 0x2aaa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 2));
    // 0x2aaaa0: 0xc0c0e18
    ctx->pc = 0x2AAAA0u;
    SET_GPR_U32(ctx, 31, 0x2AAAA8u);
    ctx->pc = 0x2AAAA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x303860u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x303860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAA8u; }
    }
    if (ctx->pc != 0x2AAAA8u) { return; }
    ctx->pc = 0x2AAAA8u;
    // 0x2aaaa8: 0x240401c0
    ctx->pc = 0x2aaaa8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 448));
    // 0x2aaaac: 0x3c05003b
    ctx->pc = 0x2aaaacu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2aaab0: 0xc0a9fe2
    ctx->pc = 0x2AAAB0u;
    SET_GPR_U32(ctx, 31, 0x2AAAB8u);
    ctx->pc = 0x2AAAB4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964432));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAB8u; }
    }
    if (ctx->pc != 0x2AAAB8u) { return; }
    ctx->pc = 0x2AAAB8u;
    // 0x2aaab8: 0x24041145
    ctx->pc = 0x2aaab8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4421));
    // 0x2aaabc: 0x3a0282d
    ctx->pc = 0x2aaabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaac0: 0xc0a9a32
    ctx->pc = 0x2AAAC0u;
    SET_GPR_U32(ctx, 31, 0x2AAAC8u);
    ctx->pc = 0x2AAAC4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A68C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaScheduleWait_0x2a68c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAC8u; }
    }
    if (ctx->pc != 0x2AAAC8u) { return; }
    ctx->pc = 0x2AAAC8u;
    // 0x2aaac8: 0xdfbf0090
    ctx->pc = 0x2aaac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aaacc: 0x3e00008
    ctx->pc = 0x2AAACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAAD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAAD4u;
}
