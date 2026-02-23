#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_SetVlcRunLevel
// Address: 0x18c2b0 - 0x18c3a8
void mpvvlc_SetVlcRunLevel_0x18c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_SetVlcRunLevel");


    ctx->pc = 0x18c2b0u;

    // 0x18c2b0: 0x27bdffd0
    ctx->pc = 0x18c2b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c2b4: 0x3c020024
    ctx->pc = 0x18c2b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c2b8: 0xffb00000
    ctx->pc = 0x18c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18c2bc: 0x3c050024
    ctx->pc = 0x18c2bcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x18c2c0: 0x2490fe00
    ctx->pc = 0x18c2c0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x18c2c4: 0xffb10010
    ctx->pc = 0x18c2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18c2c8: 0xac501a74
    ctx->pc = 0x18c2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6772), GPR_U32(ctx, 16));
    // 0x18c2cc: 0x200202d
    ctx->pc = 0x18c2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c2d0: 0xffbf0020
    ctx->pc = 0x18c2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18c2d4: 0x24a52678
    ctx->pc = 0x18c2d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 9848));
    // 0x18c2d8: 0x24060080
    ctx->pc = 0x18c2d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 128));
    // 0x18c2dc: 0xc0601b2
    ctx->pc = 0x18C2DCu;
    SET_GPR_U32(ctx, 31, 0x18C2E4u);
    ctx->pc = 0x18C2E0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294967120));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C2E4u; }
        else if (ctx->pc != 0x18C2E4u) { ctx->pc = 0x18C2E4u; }
    }
    if (ctx->pc != 0x18C2E4u) { return; }
    ctx->pc = 0x18C2E4u;
    // 0x18c2e4: 0x2604fff0
    ctx->pc = 0x18c2e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x18c2e8: 0x3c020024
    ctx->pc = 0x18c2e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c2ec: 0x3c05002c
    ctx->pc = 0x18c2ecu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x18c2f0: 0xac441a70
    ctx->pc = 0x18c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6768), GPR_U32(ctx, 4));
    // 0x18c2f4: 0x24a5cae0
    ctx->pc = 0x18c2f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953696));
    // 0x18c2f8: 0xc0601b2
    ctx->pc = 0x18C2F8u;
    SET_GPR_U32(ctx, 31, 0x18C300u);
    ctx->pc = 0x18C2FCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C300u; }
        else if (ctx->pc != 0x18C300u) { ctx->pc = 0x18C300u; }
    }
    if (ctx->pc != 0x18C300u) { return; }
    ctx->pc = 0x18C300u;
    // 0x18c300: 0x2604ffd0
    ctx->pc = 0x18c300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967248));
    // 0x18c304: 0x3c020024
    ctx->pc = 0x18c304u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c308: 0x3c05002c
    ctx->pc = 0x18c308u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x18c30c: 0xac441a6c
    ctx->pc = 0x18c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6764), GPR_U32(ctx, 4));
    // 0x18c310: 0x24a5cac0
    ctx->pc = 0x18c310u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953664));
    // 0x18c314: 0xc0601b2
    ctx->pc = 0x18C314u;
    SET_GPR_U32(ctx, 31, 0x18C31Cu);
    ctx->pc = 0x18C318u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C31Cu; }
        else if (ctx->pc != 0x18C31Cu) { ctx->pc = 0x18C31Cu; }
    }
    if (ctx->pc != 0x18C31Cu) { return; }
    ctx->pc = 0x18C31Cu;
    // 0x18c31c: 0x2604ffb0
    ctx->pc = 0x18c31cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967216));
    // 0x18c320: 0x3c020024
    ctx->pc = 0x18c320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c324: 0x3c05002c
    ctx->pc = 0x18c324u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x18c328: 0xac441a68
    ctx->pc = 0x18c328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6760), GPR_U32(ctx, 4));
    // 0x18c32c: 0x24a5caa0
    ctx->pc = 0x18c32cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953632));
    // 0x18c330: 0xc0601b2
    ctx->pc = 0x18C330u;
    SET_GPR_U32(ctx, 31, 0x18C338u);
    ctx->pc = 0x18C334u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C338u; }
        else if (ctx->pc != 0x18C338u) { ctx->pc = 0x18C338u; }
    }
    if (ctx->pc != 0x18C338u) { return; }
    ctx->pc = 0x18C338u;
    // 0x18c338: 0x2604ff90
    ctx->pc = 0x18c338u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967184));
    // 0x18c33c: 0x3c020024
    ctx->pc = 0x18c33cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c340: 0x3c05002c
    ctx->pc = 0x18c340u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x18c344: 0xac441a64
    ctx->pc = 0x18c344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6756), GPR_U32(ctx, 4));
    // 0x18c348: 0x24a5ca80
    ctx->pc = 0x18c348u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953600));
    // 0x18c34c: 0xc0601b2
    ctx->pc = 0x18C34Cu;
    SET_GPR_U32(ctx, 31, 0x18C354u);
    ctx->pc = 0x18C350u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C354u; }
        else if (ctx->pc != 0x18C354u) { ctx->pc = 0x18C354u; }
    }
    if (ctx->pc != 0x18C354u) { return; }
    ctx->pc = 0x18C354u;
    // 0x18c354: 0x2610ff70
    ctx->pc = 0x18c354u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967152));
    // 0x18c358: 0x3c020024
    ctx->pc = 0x18c358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c35c: 0x3c05002c
    ctx->pc = 0x18c35cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x18c360: 0xac501a60
    ctx->pc = 0x18c360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6752), GPR_U32(ctx, 16));
    // 0x18c364: 0x200202d
    ctx->pc = 0x18c364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c368: 0x24a5ca60
    ctx->pc = 0x18c368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953568));
    // 0x18c36c: 0xc0601b2
    ctx->pc = 0x18C36Cu;
    SET_GPR_U32(ctx, 31, 0x18C374u);
    ctx->pc = 0x18C370u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C374u; }
        else if (ctx->pc != 0x18C374u) { ctx->pc = 0x18C374u; }
    }
    if (ctx->pc != 0x18C374u) { return; }
    ctx->pc = 0x18C374u;
    // 0x18c374: 0x3c020024
    ctx->pc = 0x18c374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18c378: 0x3c05002c
    ctx->pc = 0x18c378u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x18c37c: 0xac511a5c
    ctx->pc = 0x18c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6748), GPR_U32(ctx, 17));
    // 0x18c380: 0x220202d
    ctx->pc = 0x18c380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c384: 0x24a5ca40
    ctx->pc = 0x18c384u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294953536));
    // 0x18c388: 0xc0601b2
    ctx->pc = 0x18C388u;
    SET_GPR_U32(ctx, 31, 0x18C390u);
    ctx->pc = 0x18C38Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C390u; }
        else if (ctx->pc != 0x18C390u) { ctx->pc = 0x18C390u; }
    }
    if (ctx->pc != 0x18C390u) { return; }
    ctx->pc = 0x18C390u;
    // 0x18c390: 0x220102d
    ctx->pc = 0x18c390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c394: 0xdfbf0020
    ctx->pc = 0x18c394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c398: 0xdfb10010
    ctx->pc = 0x18c398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c39c: 0xdfb00000
    ctx->pc = 0x18c39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c3a0: 0x3e00008
    ctx->pc = 0x18C3A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C3A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18C3A8u;
}
