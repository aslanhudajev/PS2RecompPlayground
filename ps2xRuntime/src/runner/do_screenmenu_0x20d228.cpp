#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_screenmenu
// Address: 0x20d228 - 0x20d3fc
void do_screenmenu_0x20d228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20d228u;

    // 0x20d228: 0x27bdffd0
    ctx->pc = 0x20d228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20d22c: 0xffbf0010
    ctx->pc = 0x20d22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20d230: 0xffb00000
    ctx->pc = 0x20d230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20d234: 0xe7b40020
    ctx->pc = 0x20d234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20d238: 0x3c013f80
    ctx->pc = 0x20d238u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20d23c: 0x4481a000
    ctx->pc = 0x20d23cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x20d240: 0x3c04003a
    ctx->pc = 0x20d240u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x20d244: 0x24845430
    ctx->pc = 0x20d244u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 21552));
    // 0x20d248: 0xc0b1bb4
    ctx->pc = 0x20D248u;
    SET_GPR_U32(ctx, 31, 0x20D250u);
    ctx->pc = 0x20D24Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_0x2c6ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D250u; }
    }
    if (ctx->pc != 0x20D250u) { return; }
    ctx->pc = 0x20D250u;
    // 0x20d250: 0x40802d
    ctx->pc = 0x20d250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d254: 0x200202d
    ctx->pc = 0x20d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d258: 0x24050001
    ctx->pc = 0x20d258u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d25c: 0x24060001
    ctx->pc = 0x20d25cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d260: 0x24070010
    ctx->pc = 0x20d260u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x20d264: 0x24080002
    ctx->pc = 0x20d264u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d268: 0xc083478
    ctx->pc = 0x20D268u;
    SET_GPR_U32(ctx, 31, 0x20D270u);
    ctx->pc = 0x20D26Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D270u; }
    }
    if (ctx->pc != 0x20D270u) { return; }
    ctx->pc = 0x20D270u;
    // 0x20d270: 0x200202d
    ctx->pc = 0x20d270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d274: 0x24050001
    ctx->pc = 0x20d274u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d278: 0x24060001
    ctx->pc = 0x20d278u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d27c: 0x24070002
    ctx->pc = 0x20d27cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d280: 0x24080010
    ctx->pc = 0x20d280u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x20d284: 0xc083478
    ctx->pc = 0x20D284u;
    SET_GPR_U32(ctx, 31, 0x20D28Cu);
    ctx->pc = 0x20D288u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D28Cu; }
    }
    if (ctx->pc != 0x20D28Cu) { return; }
    ctx->pc = 0x20D28Cu;
    // 0x20d28c: 0x200202d
    ctx->pc = 0x20d28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d290: 0x240501ef
    ctx->pc = 0x20d290u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 495));
    // 0x20d294: 0x24060001
    ctx->pc = 0x20d294u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d298: 0x24070010
    ctx->pc = 0x20d298u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x20d29c: 0x24080002
    ctx->pc = 0x20d29cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d2a0: 0xc083478
    ctx->pc = 0x20D2A0u;
    SET_GPR_U32(ctx, 31, 0x20D2A8u);
    ctx->pc = 0x20D2A4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2A8u; }
    }
    if (ctx->pc != 0x20D2A8u) { return; }
    ctx->pc = 0x20D2A8u;
    // 0x20d2a8: 0x200202d
    ctx->pc = 0x20d2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2ac: 0x240501fd
    ctx->pc = 0x20d2acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 509));
    // 0x20d2b0: 0x24060001
    ctx->pc = 0x20d2b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d2b4: 0x24070002
    ctx->pc = 0x20d2b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d2b8: 0x24080010
    ctx->pc = 0x20d2b8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x20d2bc: 0xc083478
    ctx->pc = 0x20D2BCu;
    SET_GPR_U32(ctx, 31, 0x20D2C4u);
    ctx->pc = 0x20D2C0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2C4u; }
    }
    if (ctx->pc != 0x20D2C4u) { return; }
    ctx->pc = 0x20D2C4u;
    // 0x20d2c4: 0x200202d
    ctx->pc = 0x20d2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2c8: 0x24050001
    ctx->pc = 0x20d2c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d2cc: 0x2406017d
    ctx->pc = 0x20d2ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 381));
    // 0x20d2d0: 0x24070010
    ctx->pc = 0x20d2d0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x20d2d4: 0x24080002
    ctx->pc = 0x20d2d4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d2d8: 0xc083478
    ctx->pc = 0x20D2D8u;
    SET_GPR_U32(ctx, 31, 0x20D2E0u);
    ctx->pc = 0x20D2DCu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2E0u; }
    }
    if (ctx->pc != 0x20D2E0u) { return; }
    ctx->pc = 0x20D2E0u;
    // 0x20d2e0: 0x200202d
    ctx->pc = 0x20d2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d2e4: 0x24050001
    ctx->pc = 0x20d2e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d2e8: 0x2406016f
    ctx->pc = 0x20d2e8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 367));
    // 0x20d2ec: 0x24070002
    ctx->pc = 0x20d2ecu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d2f0: 0x24080010
    ctx->pc = 0x20d2f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x20d2f4: 0xc083478
    ctx->pc = 0x20D2F4u;
    SET_GPR_U32(ctx, 31, 0x20D2FCu);
    ctx->pc = 0x20D2F8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D2FCu; }
    }
    if (ctx->pc != 0x20D2FCu) { return; }
    ctx->pc = 0x20D2FCu;
    // 0x20d2fc: 0x200202d
    ctx->pc = 0x20d2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d300: 0x240501ef
    ctx->pc = 0x20d300u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 495));
    // 0x20d304: 0x2406017d
    ctx->pc = 0x20d304u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 381));
    // 0x20d308: 0x24070010
    ctx->pc = 0x20d308u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 16));
    // 0x20d30c: 0x24080002
    ctx->pc = 0x20d30cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d310: 0xc083478
    ctx->pc = 0x20D310u;
    SET_GPR_U32(ctx, 31, 0x20D318u);
    ctx->pc = 0x20D314u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D318u; }
    }
    if (ctx->pc != 0x20D318u) { return; }
    ctx->pc = 0x20D318u;
    // 0x20d318: 0x200202d
    ctx->pc = 0x20d318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d31c: 0x240501fd
    ctx->pc = 0x20d31cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 509));
    // 0x20d320: 0x2406016f
    ctx->pc = 0x20d320u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 367));
    // 0x20d324: 0x24070002
    ctx->pc = 0x20d324u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d328: 0x24080010
    ctx->pc = 0x20d328u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x20d32c: 0xc083478
    ctx->pc = 0x20D32Cu;
    SET_GPR_U32(ctx, 31, 0x20D334u);
    ctx->pc = 0x20D330u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D334u; }
    }
    if (ctx->pc != 0x20D334u) { return; }
    ctx->pc = 0x20D334u;
    // 0x20d334: 0x200202d
    ctx->pc = 0x20d334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d338: 0x240500f0
    ctx->pc = 0x20d338u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 240));
    // 0x20d33c: 0x240600bf
    ctx->pc = 0x20d33cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 191));
    // 0x20d340: 0x24070020
    ctx->pc = 0x20d340u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d344: 0x24080002
    ctx->pc = 0x20d344u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d348: 0xc083478
    ctx->pc = 0x20D348u;
    SET_GPR_U32(ctx, 31, 0x20D350u);
    ctx->pc = 0x20D34Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D350u; }
    }
    if (ctx->pc != 0x20D350u) { return; }
    ctx->pc = 0x20D350u;
    // 0x20d350: 0x200202d
    ctx->pc = 0x20d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d354: 0x240500ff
    ctx->pc = 0x20d354u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x20d358: 0x240600b0
    ctx->pc = 0x20d358u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 176));
    // 0x20d35c: 0x24070002
    ctx->pc = 0x20d35cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20d360: 0x24080020
    ctx->pc = 0x20d360u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d364: 0xc083478
    ctx->pc = 0x20D364u;
    SET_GPR_U32(ctx, 31, 0x20D36Cu);
    ctx->pc = 0x20D368u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D36Cu; }
    }
    if (ctx->pc != 0x20D36Cu) { return; }
    ctx->pc = 0x20D36Cu;
    // 0x20d36c: 0x3c020038
    ctx->pc = 0x20d36cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x20d370: 0x8c44b13c
    ctx->pc = 0x20d370u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947132)));
    // 0x20d374: 0x240500f0
    ctx->pc = 0x20d374u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 240));
    // 0x20d378: 0x24060090
    ctx->pc = 0x20d378u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 144));
    // 0x20d37c: 0x24070020
    ctx->pc = 0x20d37cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d380: 0x24080020
    ctx->pc = 0x20d380u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d384: 0xc083478
    ctx->pc = 0x20D384u;
    SET_GPR_U32(ctx, 31, 0x20D38Cu);
    ctx->pc = 0x20D388u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D38Cu; }
    }
    if (ctx->pc != 0x20D38Cu) { return; }
    ctx->pc = 0x20D38Cu;
    // 0x20d38c: 0x3c020038
    ctx->pc = 0x20d38cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x20d390: 0x8c44b144
    ctx->pc = 0x20d390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947140)));
    // 0x20d394: 0x240500d0
    ctx->pc = 0x20d394u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 208));
    // 0x20d398: 0x240600b0
    ctx->pc = 0x20d398u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 176));
    // 0x20d39c: 0x24070020
    ctx->pc = 0x20d39cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d3a0: 0x24080020
    ctx->pc = 0x20d3a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d3a4: 0xc083478
    ctx->pc = 0x20D3A4u;
    SET_GPR_U32(ctx, 31, 0x20D3ACu);
    ctx->pc = 0x20D3A8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D3ACu; }
    }
    if (ctx->pc != 0x20D3ACu) { return; }
    ctx->pc = 0x20D3ACu;
    // 0x20d3ac: 0x3c020038
    ctx->pc = 0x20d3acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x20d3b0: 0x8c44b140
    ctx->pc = 0x20d3b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947136)));
    // 0x20d3b4: 0x24050110
    ctx->pc = 0x20d3b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 272));
    // 0x20d3b8: 0x240600b0
    ctx->pc = 0x20d3b8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 176));
    // 0x20d3bc: 0x24070020
    ctx->pc = 0x20d3bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d3c0: 0x24080020
    ctx->pc = 0x20d3c0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d3c4: 0xc083478
    ctx->pc = 0x20D3C4u;
    SET_GPR_U32(ctx, 31, 0x20D3CCu);
    ctx->pc = 0x20D3C8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x20D1E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewTempBlitZ_0x20d1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20D3CCu; }
    }
    if (ctx->pc != 0x20D3CCu) { return; }
    ctx->pc = 0x20D3CCu;
    // 0x20d3cc: 0x3c020038
    ctx->pc = 0x20d3ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x20d3d0: 0x8c44b138
    ctx->pc = 0x20d3d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294947128)));
    // 0x20d3d4: 0x240500f0
    ctx->pc = 0x20d3d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 240));
    // 0x20d3d8: 0x240600d0
    ctx->pc = 0x20d3d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 208));
    // 0x20d3dc: 0x24070020
    ctx->pc = 0x20d3dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d3e0: 0x24080020
    ctx->pc = 0x20d3e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x20d3e4: 0x4600a306
    ctx->pc = 0x20d3e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x20d3e8: 0xdfbf0010
    ctx->pc = 0x20d3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d3ec: 0xdfb00000
    ctx->pc = 0x20d3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d3f0: 0xc7b40020
    ctx->pc = 0x20d3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20d3f4: 0x8083478
    ctx->pc = 0x20D3F4u;
    ctx->pc = 0x20D3F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x20D1E0u;
    NewTempBlitZ_0x20d1e0(rdram, ctx, runtime); return;
    ctx->pc = 0x20D3FCu;
}
