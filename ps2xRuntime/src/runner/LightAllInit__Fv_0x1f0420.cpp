#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LightAllInit__Fv
// Address: 0x1f0420 - 0x1f0548
void LightAllInit__Fv_0x1f0420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LightAllInit__Fv");


    ctx->pc = 0x1f0420u;

    // 0x1f0420: 0x27bdff10
    ctx->pc = 0x1f0420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1f0424: 0x7fbf0000
    ctx->pc = 0x1f0424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f0428: 0xc069a10
    ctx->pc = 0x1F0428u;
    SET_GPR_U32(ctx, 31, 0x1F0430u);
    ctx->pc = 0x1A6840u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightInit_0x1a6840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0430u; }
        else if (ctx->pc != 0x1F0430u) { ctx->pc = 0x1F0430u; }
    }
    if (ctx->pc != 0x1F0430u) { return; }
    ctx->pc = 0x1F0430u;
    // 0x1f0430: 0xc069a6c
    ctx->pc = 0x1F0430u;
    SET_GPR_U32(ctx, 31, 0x1F0438u);
    ctx->pc = 0x1F0434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A69B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlLightMode_0x1a69b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0438u; }
        else if (ctx->pc != 0x1F0438u) { ctx->pc = 0x1F0438u; }
    }
    if (ctx->pc != 0x1F0438u) { return; }
    ctx->pc = 0x1F0438u;
    // 0x1f0438: 0x3c010027
    ctx->pc = 0x1f0438u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f043c: 0x8c25c790
    ctx->pc = 0x1f043cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 4294952848)));
    // 0x1f0440: 0x70001e28
    ctx->pc = 0x1f0440u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f0444: 0x27a40010
    ctx->pc = 0x1f0444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0448: 0x3c010027
    ctx->pc = 0x1f0448u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f044c: 0x8c26c794
    ctx->pc = 0x1f044cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294952852)));
    // 0x1f0450: 0x3c010027
    ctx->pc = 0x1f0450u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0454: 0xc420c798
    ctx->pc = 0x1f0454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0458: 0x3c010027
    ctx->pc = 0x1f0458u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f045c: 0xc421c79c
    ctx->pc = 0x1f045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0460: 0x3c010027
    ctx->pc = 0x1f0460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0464: 0xc422c7a0
    ctx->pc = 0x1f0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0468: 0x3c010027
    ctx->pc = 0x1f0468u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f046c: 0xc423c7a4
    ctx->pc = 0x1f046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f0470: 0x3c010027
    ctx->pc = 0x1f0470u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0474: 0xc424c7a8
    ctx->pc = 0x1f0474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f0478: 0x3c010027
    ctx->pc = 0x1f0478u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f047c: 0xc425c7ac
    ctx->pc = 0x1f047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f0480: 0x3c010027
    ctx->pc = 0x1f0480u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0484: 0x8c27c7b0
    ctx->pc = 0x1f0484u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 1), 4294952880)));
    // 0x1f0488: 0x3c010027
    ctx->pc = 0x1f0488u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f048c: 0x8c28c7b4
    ctx->pc = 0x1f048cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 1), 4294952884)));
    // 0x1f0490: 0x3c010027
    ctx->pc = 0x1f0490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f0494: 0xc426c7b8
    ctx->pc = 0x1f0494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1f0498: 0x3c010027
    ctx->pc = 0x1f0498u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f049c: 0xc427c7bc
    ctx->pc = 0x1f049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1f04a0: 0x3c010027
    ctx->pc = 0x1f04a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f04a4: 0xc428c7c0
    ctx->pc = 0x1f04a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1f04a8: 0x3c010027
    ctx->pc = 0x1f04a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f04ac: 0x8c29c7c4
    ctx->pc = 0x1f04acu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 4294952900)));
    // 0x1f04b0: 0x3c010027
    ctx->pc = 0x1f04b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f04b4: 0x8c2ac7c8
    ctx->pc = 0x1f04b4u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 1), 4294952904)));
    // 0x1f04b8: 0x3c010027
    ctx->pc = 0x1f04b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f04bc: 0xc429c7cc
    ctx->pc = 0x1f04bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1f04c0: 0x3c010027
    ctx->pc = 0x1f04c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f04c4: 0xc42ac7d0
    ctx->pc = 0x1f04c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1f04c8: 0x3c010027
    ctx->pc = 0x1f04c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)39 << 16));
    // 0x1f04cc: 0xc42bc7d4
    ctx->pc = 0x1f04ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1f04d0: 0x0
    ctx->pc = 0x1f04d0u;
    // NOP
label_1f04d4:
    // 0x1f04d4: 0xac850000
    ctx->pc = 0x1f04d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1f04d8: 0xac860004
    ctx->pc = 0x1f04d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1f04dc: 0xe4800008
    ctx->pc = 0x1f04dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1f04e0: 0xe481000c
    ctx->pc = 0x1f04e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1f04e4: 0xe4820010
    ctx->pc = 0x1f04e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1f04e8: 0xe4830014
    ctx->pc = 0x1f04e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1f04ec: 0xe4840018
    ctx->pc = 0x1f04ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1f04f0: 0xe485001c
    ctx->pc = 0x1f04f0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x1f04f4: 0xac870020
    ctx->pc = 0x1f04f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x1f04f8: 0xac880024
    ctx->pc = 0x1f04f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 8));
    // 0x1f04fc: 0xe4860028
    ctx->pc = 0x1f04fcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1f0500: 0xe487002c
    ctx->pc = 0x1f0500u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1f0504: 0xe4880030
    ctx->pc = 0x1f0504u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x1f0508: 0xac890034
    ctx->pc = 0x1f0508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 9));
    // 0x1f050c: 0xac8a0038
    ctx->pc = 0x1f050cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 10));
    // 0x1f0510: 0xe489003c
    ctx->pc = 0x1f0510u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1f0514: 0xe48a0040
    ctx->pc = 0x1f0514u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1f0518: 0x24630001
    ctx->pc = 0x1f0518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f051c: 0xe48b0044
    ctx->pc = 0x1f051cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x1f0520: 0x28620003
    ctx->pc = 0x1f0520u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x1f0524: 0x1440ffeb
    ctx->pc = 0x1F0524u;
    {
        const bool branch_taken_0x1f0524 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0528u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 72));
        if (branch_taken_0x1f0524) {
            ctx->pc = 0x1F04D4u;
            goto label_1f04d4;
        }
    }
    ctx->pc = 0x1F052Cu;
    // 0x1f052c: 0x3c020027
    ctx->pc = 0x1f052cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1f0530: 0x2444c730
    ctx->pc = 0x1f0530u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952752));
    // 0x1f0534: 0xc07c154
    ctx->pc = 0x1F0534u;
    SET_GPR_U32(ctx, 31, 0x1F053Cu);
    ctx->pc = 0x1F0538u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x1F0550u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetLight__FP12GLOBAL_LIGHTP11LOCAL_LIGHT_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F053Cu; }
        else if (ctx->pc != 0x1F053Cu) { ctx->pc = 0x1F053Cu; }
    }
    if (ctx->pc != 0x1F053Cu) { return; }
    ctx->pc = 0x1F053Cu;
    // 0x1f053c: 0x7bbf0000
    ctx->pc = 0x1f053cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0540: 0x3e00008
    ctx->pc = 0x1F0540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0544u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F04D4u: goto label_1f04d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0548u;
}
