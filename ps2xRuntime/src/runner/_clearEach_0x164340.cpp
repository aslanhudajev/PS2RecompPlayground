#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _clearEach
// Address: 0x164340 - 0x164404
void _clearEach_0x164340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_clearEach");


    ctx->pc = 0x164340u;

    // 0x164340: 0x27bdfff0
    ctx->pc = 0x164340u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x164344: 0x3c030023
    ctx->pc = 0x164344u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x164348: 0x3c040023
    ctx->pc = 0x164348u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16434c: 0x24020001
    ctx->pc = 0x16434cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x164350: 0xffbf0000
    ctx->pc = 0x164350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x164354: 0x0
    ctx->pc = 0x164354u;
    // NOP
    // 0x164358: 0xc05725c
    ctx->pc = 0x164358u;
    SET_GPR_U32(ctx, 31, 0x164360u);
    ctx->pc = 0x16435Cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943332), GPR_U32(ctx, 2));
    ctx->pc = 0x15C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x15c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164360u; }
        else if (ctx->pc != 0x164360u) { ctx->pc = 0x164360u; }
    }
    if (ctx->pc != 0x164360u) { return; }
    ctx->pc = 0x164360u;
    // 0x164360: 0x3c051000
    ctx->pc = 0x164360u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x164364: 0x3c070001
    ctx->pc = 0x164364u;
    SET_GPR_U32(ctx, 7, ((uint32_t)1 << 16));
    // 0x164368: 0x34a5f520
    ctx->pc = 0x164368u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 62752));
    // 0x16436c: 0x3c061000
    ctx->pc = 0x16436cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x164370: 0x8ca20000
    ctx->pc = 0x164370u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x164374: 0x34c6f590
    ctx->pc = 0x164374u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 62864));
    // 0x164378: 0x3c031000
    ctx->pc = 0x164378u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x16437c: 0x3c041000
    ctx->pc = 0x16437cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x164380: 0x471025
    ctx->pc = 0x164380u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x164384: 0x3463b000
    ctx->pc = 0x164384u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x164388: 0xacc20000
    ctx->pc = 0x164388u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x16438c: 0x3484b400
    ctx->pc = 0x16438cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46080));
    // 0x164390: 0xac600000
    ctx->pc = 0x164390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x164394: 0x3c021000
    ctx->pc = 0x164394u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x164398: 0xac800000
    ctx->pc = 0x164398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16439c: 0x3442d400
    ctx->pc = 0x16439cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54272));
    // 0x1643a0: 0xac400000
    ctx->pc = 0x1643a0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1643a4: 0x3c03fffe
    ctx->pc = 0x1643a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65534 << 16));
    // 0x1643a8: 0x3463ffff
    ctx->pc = 0x1643a8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1643ac: 0x8ca20000
    ctx->pc = 0x1643acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1643b0: 0x431024
    ctx->pc = 0x1643b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1643b4: 0xc05726e
    ctx->pc = 0x1643B4u;
    SET_GPR_U32(ctx, 31, 0x1643BCu);
    ctx->pc = 0x1643B8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x15C9B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x15c9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1643BCu; }
        else if (ctx->pc != 0x1643BCu) { ctx->pc = 0x1643BCu; }
    }
    if (ctx->pc != 0x1643BCu) { return; }
    ctx->pc = 0x1643BCu;
    // 0x1643bc: 0x3c031000
    ctx->pc = 0x1643bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1643c0: 0x3c041000
    ctx->pc = 0x1643c0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x1643c4: 0x3463b020
    ctx->pc = 0x1643c4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45088));
    // 0x1643c8: 0x3484b420
    ctx->pc = 0x1643c8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 46112));
    // 0x1643cc: 0xac600000
    ctx->pc = 0x1643ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1643d0: 0x3c021000
    ctx->pc = 0x1643d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x1643d4: 0xac800000
    ctx->pc = 0x1643d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1643d8: 0x3442d420
    ctx->pc = 0x1643d8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 54304));
    // 0x1643dc: 0xac400000
    ctx->pc = 0x1643dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x1643e0: 0x3c031000
    ctx->pc = 0x1643e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x1643e4: 0x34632010
    ctx->pc = 0x1643e4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 8208));
    // 0x1643e8: 0x3c024000
    ctx->pc = 0x1643e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1643ec: 0xdfbf0000
    ctx->pc = 0x1643ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1643f0: 0x202d
    ctx->pc = 0x1643f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643f4: 0xac620000
    ctx->pc = 0x1643f4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x1643f8: 0x282d
    ctx->pc = 0x1643f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643fc: 0x8055068
    ctx->pc = 0x1643FCu;
    ctx->pc = 0x164400u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1541A0u;
    sceIpuSync_0x1541a0(rdram, ctx, runtime); return;
    ctx->pc = 0x164404u;
}
