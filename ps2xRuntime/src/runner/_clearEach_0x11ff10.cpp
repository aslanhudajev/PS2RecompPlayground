#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _clearEach
// Address: 0x11ff10 - 0x11ffd4
void _clearEach_0x11ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11ff10u;

    // 0x11ff10: 0x27bdfff0
    ctx->pc = 0x11ff10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11ff14: 0x3c030017
    ctx->pc = 0x11ff14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)23 << 16));
    // 0x11ff18: 0x3c040017
    ctx->pc = 0x11ff18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
    // 0x11ff1c: 0x24020001
    ctx->pc = 0x11ff1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ff20: 0xffbf0000
    ctx->pc = 0x11ff20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11ff24: 0xac601a3c
    ctx->pc = 0x11ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6716), GPR_U32(ctx, 0));
    // 0x11ff28: 0xc0453ee
    ctx->pc = 0x11FF28u;
    SET_GPR_U32(ctx, 31, 0x11FF30u);
    ctx->pc = 0x11FF2Cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6180), GPR_U32(ctx, 2));
    ctx->pc = 0x114FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x114fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF30u; }
    }
    if (ctx->pc != 0x11FF30u) { return; }
    ctx->pc = 0x11FF30u;
    // 0x11ff30: 0x3c051000
    ctx->pc = 0x11ff30u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x11ff34: 0x3c070001
    ctx->pc = 0x11ff34u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x11ff38: 0x34a5f520
    ctx->pc = 0x11ff38u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x11ff3c: 0x3c061000
    ctx->pc = 0x11ff3cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x11ff40: 0x8ca20000
    ctx->pc = 0x11ff40u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x11ff44: 0x34c6f590
    ctx->pc = 0x11ff44u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x11ff48: 0x3c031000
    ctx->pc = 0x11ff48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11ff4c: 0x3c041000
    ctx->pc = 0x11ff4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x11ff50: 0x471025
    ctx->pc = 0x11ff50u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11ff54: 0x3463b000
    ctx->pc = 0x11ff54u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x11ff58: 0xacc20000
    ctx->pc = 0x11ff58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x11ff5c: 0x3484b400
    ctx->pc = 0x11ff5cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46080));
    // 0x11ff60: 0xac600000
    ctx->pc = 0x11ff60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x11ff64: 0x3c021000
    ctx->pc = 0x11ff64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11ff68: 0xac800000
    ctx->pc = 0x11ff68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x11ff6c: 0x3442d400
    ctx->pc = 0x11ff6cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54272));
    // 0x11ff70: 0xac400000
    ctx->pc = 0x11ff70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ff74: 0x3c03fffe
    ctx->pc = 0x11ff74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x11ff78: 0x3463ffff
    ctx->pc = 0x11ff78u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x11ff7c: 0x8ca20000
    ctx->pc = 0x11ff7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11ff80: 0x431024
    ctx->pc = 0x11ff80u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ff84: 0xc045400
    ctx->pc = 0x11FF84u;
    SET_GPR_U32(ctx, 31, 0x11FF8Cu);
    ctx->pc = 0x11FF88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x115000u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11FF8Cu; }
    }
    if (ctx->pc != 0x11FF8Cu) { return; }
    ctx->pc = 0x11FF8Cu;
    // 0x11ff8c: 0x3c031000
    ctx->pc = 0x11ff8cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11ff90: 0x3c041000
    ctx->pc = 0x11ff90u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x11ff94: 0x3463b020
    ctx->pc = 0x11ff94u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45088));
    // 0x11ff98: 0x3484b420
    ctx->pc = 0x11ff98u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x11ff9c: 0xac600000
    ctx->pc = 0x11ff9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ffa0: 0x3c021000
    ctx->pc = 0x11ffa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x11ffa4: 0xac800000
    ctx->pc = 0x11ffa4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ffa8: 0x3442d420
    ctx->pc = 0x11ffa8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54304));
    // 0x11ffac: 0xac400000
    ctx->pc = 0x11ffacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x11ffb0: 0x3c031000
    ctx->pc = 0x11ffb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x11ffb4: 0x34632010
    ctx->pc = 0x11ffb4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x11ffb8: 0x3c024000
    ctx->pc = 0x11ffb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x11ffbc: 0xdfbf0000
    ctx->pc = 0x11ffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ffc0: 0x202d
    ctx->pc = 0x11ffc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffc4: 0xac620000
    ctx->pc = 0x11ffc4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x11ffc8: 0x282d
    ctx->pc = 0x11ffc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffcc: 0x80498f0
    ctx->pc = 0x11FFCCu;
    ctx->pc = 0x11FFD0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1263C0u;
    sceIpuSync_0x1263c0(rdram, ctx, runtime); return;
    ctx->pc = 0x11FFD4u;
}
