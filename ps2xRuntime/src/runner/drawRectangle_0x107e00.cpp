#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawRectangle
// Address: 0x107e00 - 0x107f60
void drawRectangle_0x107e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x107e00u;

    // 0x107e00: 0x8f9882b8
    ctx->pc = 0x107e00u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x107e04: 0x27bdffe0
    ctx->pc = 0x107e04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x107e08: 0xffb00000
    ctx->pc = 0x107e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107e0c: 0x3c081000
    ctx->pc = 0x107e0cu;
    SET_GPR_U32(ctx, 8, ((uint32_t)4096 << 16));
    // 0x107e10: 0x8403c
    ctx->pc = 0x107e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x107e14: 0x35080003
    ctx->pc = 0x107e14u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 3));
    // 0x107e18: 0xffbf0010
    ctx->pc = 0x107e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107e1c: 0x70001ca9
    ctx->pc = 0x107e1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107e20: 0x7f030000
    ctx->pc = 0x107e20u;
    WRITE128(ADD32(GPR_U32(ctx, 24), 0), GPR_VEC(ctx, 3));
    // 0x107e24: 0x24100dc0
    ctx->pc = 0x107e24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3520));
    // 0x107e28: 0xff080010
    ctx->pc = 0x107e28u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 8));
    // 0x107e2c: 0x3c021000
    ctx->pc = 0x107e2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x107e30: 0x2405000e
    ctx->pc = 0x107e30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 14));
    // 0x107e34: 0x24060006
    ctx->pc = 0x107e34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    // 0x107e38: 0x3c097f00
    ctx->pc = 0x107e38u;
    SET_GPR_U32(ctx, 9, ((uint32_t)32512 << 16));
    // 0x107e3c: 0x352900ff
    ctx->pc = 0x107e3cu;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 9), 255));
    // 0x107e40: 0x240a0001
    ctx->pc = 0x107e40u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x107e44: 0x240d0047
    ctx->pc = 0x107e44u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 71));
    // 0x107e48: 0x3c0e2000
    ctx->pc = 0x107e48u;
    SET_GPR_U32(ctx, 14, ((uint32_t)8192 << 16));
    // 0x107e4c: 0xe703c
    ctx->pc = 0x107e4cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x107e50: 0x35ce8001
    ctx->pc = 0x107e50u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 32769));
    // 0x107e54: 0x240f0044
    ctx->pc = 0x107e54u;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 0), 68));
    // 0x107e58: 0xaf020000
    ctx->pc = 0x107e58u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x107e5c: 0xff050018
    ctx->pc = 0x107e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 5));
    // 0x107e60: 0x2408007f
    ctx->pc = 0x107e60u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 127));
    // 0x107e64: 0xff060020
    ctx->pc = 0x107e64u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 6));
    // 0x107e68: 0x27070060
    ctx->pc = 0x107e68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 24), 96));
    // 0x107e6c: 0xff090030
    ctx->pc = 0x107e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 9));
    // 0x107e70: 0x240b09c0
    ctx->pc = 0x107e70u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 2496));
    // 0x107e74: 0xff0a0038
    ctx->pc = 0x107e74u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 10));
    // 0x107e78: 0x240c1a40
    ctx->pc = 0x107e78u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 6720));
    // 0x107e7c: 0xaf100060
    ctx->pc = 0x107e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 96), GPR_U32(ctx, 16));
    // 0x107e80: 0x27020070
    ctx->pc = 0x107e80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 24), 112));
    // 0x107e84: 0xff0d0048
    ctx->pc = 0x107e84u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 13));
    // 0x107e88: 0x27050080
    ctx->pc = 0x107e88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 24), 128));
    // 0x107e8c: 0xff0e0050
    ctx->pc = 0x107e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 14));
    // 0x107e90: 0x24091640
    ctx->pc = 0x107e90u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 5696));
    // 0x107e94: 0xff0f0058
    ctx->pc = 0x107e94u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 15));
    // 0x107e98: 0x27060090
    ctx->pc = 0x107e98u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 24), 144));
    // 0x107e9c: 0xff000028
    ctx->pc = 0x107e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 0));
    // 0x107ea0: 0x3c0a7000
    ctx->pc = 0x107ea0u;
    SET_GPR_U32(ctx, 10, ((uint32_t)28672 << 16));
    // 0x107ea4: 0xff000040
    ctx->pc = 0x107ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 0));
    // 0x107ea8: 0x202d
    ctx->pc = 0x107ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107eac: 0xace8000c
    ctx->pc = 0x107eacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    // 0x107eb0: 0xaceb0004
    ctx->pc = 0x107eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 11));
    // 0x107eb4: 0xace00008
    ctx->pc = 0x107eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x107eb8: 0xaf0c0070
    ctx->pc = 0x107eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 112), GPR_U32(ctx, 12));
    // 0x107ebc: 0xac4b0004
    ctx->pc = 0x107ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 11));
    // 0x107ec0: 0xac48000c
    ctx->pc = 0x107ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x107ec4: 0xac400008
    ctx->pc = 0x107ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x107ec8: 0xaf0c0080
    ctx->pc = 0x107ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 128), GPR_U32(ctx, 12));
    // 0x107ecc: 0x700014a9
    ctx->pc = 0x107eccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x107ed0: 0xaca8000c
    ctx->pc = 0x107ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x107ed4: 0xaca90004
    ctx->pc = 0x107ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
    // 0x107ed8: 0xaca00008
    ctx->pc = 0x107ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x107edc: 0xaf100090
    ctx->pc = 0x107edcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 144), GPR_U32(ctx, 16));
    // 0x107ee0: 0xacc8000c
    ctx->pc = 0x107ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x107ee4: 0xacc90004
    ctx->pc = 0x107ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 9));
    // 0x107ee8: 0xacc00008
    ctx->pc = 0x107ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x107eec: 0x7f0200a0
    ctx->pc = 0x107eecu;
    WRITE128(ADD32(GPR_U32(ctx, 24), 160), GPR_VEC(ctx, 2));
    // 0x107ef0: 0x8f020000
    ctx->pc = 0x107ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x107ef4: 0xaf0a00a0
    ctx->pc = 0x107ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 160), GPR_U32(ctx, 10));
    // 0x107ef8: 0x34420009
    ctx->pc = 0x107ef8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 9));
    // 0x107efc: 0xc043948
    ctx->pc = 0x107EFCu;
    SET_GPR_U32(ctx, 31, 0x107F04u);
    ctx->pc = 0x107F00u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x10E520u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F04u; }
    }
    if (ctx->pc != 0x107F04u) { return; }
    ctx->pc = 0x107F04u;
    // 0x107f04: 0x202d
    ctx->pc = 0x107f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f08: 0xc043322
    ctx->pc = 0x107F08u;
    SET_GPR_U32(ctx, 31, 0x107F10u);
    ctx->pc = 0x107F0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F10u; }
    }
    if (ctx->pc != 0x107F10u) { return; }
    ctx->pc = 0x107F10u;
    // 0x107f10: 0x8f848490
    ctx->pc = 0x107f10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x107f14: 0x282d
    ctx->pc = 0x107f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f18: 0xc04372a
    ctx->pc = 0x107F18u;
    SET_GPR_U32(ctx, 31, 0x107F20u);
    ctx->pc = 0x107F1Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10DCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSync_0x10dca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F20u; }
    }
    if (ctx->pc != 0x107F20u) { return; }
    ctx->pc = 0x107F20u;
    // 0x107f20: 0x8f8382b8
    ctx->pc = 0x107f20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x107f24: 0x3c050fff
    ctx->pc = 0x107f24u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4095 << 16));
    // 0x107f28: 0x34a5ffff
    ctx->pc = 0x107f28u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x107f2c: 0x8f848490
    ctx->pc = 0x107f2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x107f30: 0xc0435d6
    ctx->pc = 0x107F30u;
    SET_GPR_U32(ctx, 31, 0x107F38u);
    ctx->pc = 0x107F34u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x10D758u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F38u; }
    }
    if (ctx->pc != 0x107F38u) { return; }
    ctx->pc = 0x107F38u;
    // 0x107f38: 0x202d
    ctx->pc = 0x107f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f3c: 0xc043322
    ctx->pc = 0x107F3Cu;
    SET_GPR_U32(ctx, 31, 0x107F44u);
    ctx->pc = 0x107F40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10CC88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x107F44u; }
    }
    if (ctx->pc != 0x107F44u) { return; }
    ctx->pc = 0x107F44u;
    // 0x107f44: 0x8f848490
    ctx->pc = 0x107f44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x107f48: 0x282d
    ctx->pc = 0x107f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f4c: 0xdfbf0010
    ctx->pc = 0x107f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107f50: 0x302d
    ctx->pc = 0x107f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107f54: 0xdfb00000
    ctx->pc = 0x107f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107f58: 0x804372a
    ctx->pc = 0x107F58u;
    ctx->pc = 0x107F5Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10DCA8u;
    sceDmaSync_0x10dca8(rdram, ctx, runtime); return;
    ctx->pc = 0x107F60u;
}
