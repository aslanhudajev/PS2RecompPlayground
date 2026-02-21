#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawClearScreen
// Address: 0x1030e0 - 0x103208
void drawClearScreen_0x1030e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1030e0u;

    // 0x1030e0: 0x8f8f82b8
    ctx->pc = 0x1030e0u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1030e4: 0x27bdfff0
    ctx->pc = 0x1030e4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1030e8: 0xffbf0000
    ctx->pc = 0x1030e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1030ec: 0x3c051000
    ctx->pc = 0x1030ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
    // 0x1030f0: 0x5283c
    ctx->pc = 0x1030f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1030f4: 0x34a50003
    ctx->pc = 0x1030f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3));
    // 0x1030f8: 0x240c000e
    ctx->pc = 0x1030f8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1030fc: 0x70001ca9
    ctx->pc = 0x1030fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103100: 0x7de30000
    ctx->pc = 0x103100u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
    // 0x103104: 0x3c021000
    ctx->pc = 0x103104u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x103108: 0xfde50010
    ctx->pc = 0x103108u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 5));
    // 0x10310c: 0x24070006
    ctx->pc = 0x10310cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    // 0x103110: 0xfdec0018
    ctx->pc = 0x103110u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 12));
    // 0x103114: 0x24080001
    ctx->pc = 0x103114u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x103118: 0x24090047
    ctx->pc = 0x103118u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 71));
    // 0x10311c: 0x3c0a2000
    ctx->pc = 0x10311cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)8192 << 16));
    // 0x103120: 0xa503c
    ctx->pc = 0x103120u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x103124: 0x354a8001
    ctx->pc = 0x103124u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), 32769));
    // 0x103128: 0x240b0044
    ctx->pc = 0x103128u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 68));
    // 0x10312c: 0x240d6b60
    ctx->pc = 0x10312cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 27488));
    // 0x103130: 0xade20000
    ctx->pc = 0x103130u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x103134: 0x25e50060
    ctx->pc = 0x103134u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 15), 96));
    // 0x103138: 0xfde70020
    ctx->pc = 0x103138u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 7));
    // 0x10313c: 0x240e7000
    ctx->pc = 0x10313cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 28672));
    // 0x103140: 0xfde80038
    ctx->pc = 0x103140u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 56), GPR_U64(ctx, 8));
    // 0x103144: 0x340cffff
    ctx->pc = 0x103144u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 0), 65535));
    // 0x103148: 0xfde90048
    ctx->pc = 0x103148u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 72), GPR_U64(ctx, 9));
    // 0x10314c: 0x340794a0
    ctx->pc = 0x10314cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 38048));
    // 0x103150: 0xfdea0050
    ctx->pc = 0x103150u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 80), GPR_U64(ctx, 10));
    // 0x103154: 0x25e20070
    ctx->pc = 0x103154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 112));
    // 0x103158: 0xfdeb0058
    ctx->pc = 0x103158u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 88), GPR_U64(ctx, 11));
    // 0x10315c: 0x34069000
    ctx->pc = 0x10315cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 0), 36864));
    // 0x103160: 0xaded0060
    ctx->pc = 0x103160u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 96), GPR_U32(ctx, 13));
    // 0x103164: 0x3c087000
    ctx->pc = 0x103164u;
    SET_GPR_U32(ctx, 8, ((uint32_t)28672 << 16));
    // 0x103168: 0xfde00028
    ctx->pc = 0x103168u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 40), GPR_U64(ctx, 0));
    // 0x10316c: 0x202d
    ctx->pc = 0x10316cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103170: 0xfde00030
    ctx->pc = 0x103170u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 48), GPR_U64(ctx, 0));
    // 0x103174: 0xfde00040
    ctx->pc = 0x103174u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 64), GPR_U64(ctx, 0));
    // 0x103178: 0xacae0004
    ctx->pc = 0x103178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 14));
    // 0x10317c: 0xacac0008
    ctx->pc = 0x10317cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 12));
    // 0x103180: 0xaca0000c
    ctx->pc = 0x103180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x103184: 0xade70070
    ctx->pc = 0x103184u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 112), GPR_U32(ctx, 7));
    // 0x103188: 0xac460004
    ctx->pc = 0x103188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x10318c: 0xac40000c
    ctx->pc = 0x10318cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x103190: 0xac400008
    ctx->pc = 0x103190u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x103194: 0x700014a9
    ctx->pc = 0x103194u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x103198: 0x7de20080
    ctx->pc = 0x103198u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 128), GPR_VEC(ctx, 2));
    // 0x10319c: 0x8de20000
    ctx->pc = 0x10319cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1031a0: 0xade80080
    ctx->pc = 0x1031a0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 128), GPR_U32(ctx, 8));
    // 0x1031a4: 0x34420007
    ctx->pc = 0x1031a4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 7));
    // 0x1031a8: 0xc043948
    ctx->pc = 0x1031A8u;
    SET_GPR_U32(ctx, 31, 0x1031B0u);
    ctx->pc = 0x1031ACu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031B0u; }
    }
    if (ctx->pc != 0x1031B0u) { return; }
    ctx->pc = 0x1031B0u;
    // 0x1031b0: 0x202d
    ctx->pc = 0x1031b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031b4: 0xc043322
    ctx->pc = 0x1031B4u;
    SET_GPR_U32(ctx, 31, 0x1031BCu);
    ctx->pc = 0x1031B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031BCu; }
    }
    if (ctx->pc != 0x1031BCu) { return; }
    ctx->pc = 0x1031BCu;
    // 0x1031bc: 0x8f848490
    ctx->pc = 0x1031bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1031c0: 0x282d
    ctx->pc = 0x1031c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031c4: 0xc04372a
    ctx->pc = 0x1031C4u;
    SET_GPR_U32(ctx, 31, 0x1031CCu);
    ctx->pc = 0x1031C8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031CCu; }
    }
    if (ctx->pc != 0x1031CCu) { return; }
    ctx->pc = 0x1031CCu;
    // 0x1031cc: 0x8f8382b8
    ctx->pc = 0x1031ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x1031d0: 0x3c050fff
    ctx->pc = 0x1031d0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x1031d4: 0x34a5ffff
    ctx->pc = 0x1031d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x1031d8: 0x8f848490
    ctx->pc = 0x1031d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1031dc: 0xc0435d6
    ctx->pc = 0x1031DCu;
    SET_GPR_U32(ctx, 31, 0x1031E4u);
    ctx->pc = 0x1031E0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031E4u; }
    }
    if (ctx->pc != 0x1031E4u) { return; }
    ctx->pc = 0x1031E4u;
    // 0x1031e4: 0x202d
    ctx->pc = 0x1031e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031e8: 0xc043322
    ctx->pc = 0x1031E8u;
    SET_GPR_U32(ctx, 31, 0x1031F0u);
    ctx->pc = 0x1031ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1031F0u; }
    }
    if (ctx->pc != 0x1031F0u) { return; }
    ctx->pc = 0x1031F0u;
    // 0x1031f0: 0x8f848490
    ctx->pc = 0x1031f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x1031f4: 0x282d
    ctx->pc = 0x1031f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1031f8: 0xdfbf0000
    ctx->pc = 0x1031f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1031fc: 0x302d
    ctx->pc = 0x1031fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103200: 0x804372a
    ctx->pc = 0x103200u;
    ctx->pc = 0x103204u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x103208u;
}
