#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_Init
// Address: 0x16a3b0 - 0x16a46c
void ADXF_Init_0x16a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_Init");


    ctx->pc = 0x16a3b0u;

    // 0x16a3b0: 0x27bdffe0
    ctx->pc = 0x16a3b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a3b4: 0x3c020023
    ctx->pc = 0x16a3b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16a3b8: 0xffb00000
    ctx->pc = 0x16a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a3bc: 0x3c100023
    ctx->pc = 0x16a3bcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x16a3c0: 0xffbf0010
    ctx->pc = 0x16a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a3c4: 0x8e04b594
    ctx->pc = 0x16a3c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294948244)));
    // 0x16a3c8: 0x8c43b590
    ctx->pc = 0x16a3c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294948240)));
    // 0x16a3cc: 0x14800022
    ctx->pc = 0x16A3CCu;
    {
        const bool branch_taken_0x16a3cc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A3D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x16a3cc) {
            ctx->pc = 0x16A458u;
            goto label_16a458;
        }
    }
    ctx->pc = 0x16A3D4u;
    // 0x16a3d4: 0x3c040023
    ctx->pc = 0x16a3d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a3d8: 0x282d
    ctx->pc = 0x16a3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3dc: 0x2484b598
    ctx->pc = 0x16a3dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294948248));
    // 0x16a3e0: 0xc050cfe
    ctx->pc = 0x16A3E0u;
    SET_GPR_U32(ctx, 31, 0x16A3E8u);
    ctx->pc = 0x16A3E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4992));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3E8u; }
        else if (ctx->pc != 0x16A3E8u) { ctx->pc = 0x16A3E8u; }
    }
    if (ctx->pc != 0x16A3E8u) { return; }
    ctx->pc = 0x16A3E8u;
    // 0x16a3e8: 0x3c040023
    ctx->pc = 0x16a3e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a3ec: 0x282d
    ctx->pc = 0x16a3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3f0: 0x2484c918
    ctx->pc = 0x16a3f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953240));
    // 0x16a3f4: 0xc050cfe
    ctx->pc = 0x16A3F4u;
    SET_GPR_U32(ctx, 31, 0x16A3FCu);
    ctx->pc = 0x16A3F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1024));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3FCu; }
        else if (ctx->pc != 0x16A3FCu) { ctx->pc = 0x16A3FCu; }
    }
    if (ctx->pc != 0x16A3FCu) { return; }
    ctx->pc = 0x16A3FCu;
    // 0x16a3fc: 0x3c040023
    ctx->pc = 0x16a3fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a400: 0x240500ff
    ctx->pc = 0x16a400u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 255));
    // 0x16a404: 0x2484cd20
    ctx->pc = 0x16a404u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954272));
    // 0x16a408: 0xc050cfe
    ctx->pc = 0x16A408u;
    SET_GPR_U32(ctx, 31, 0x16A410u);
    ctx->pc = 0x16A40Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A410u; }
        else if (ctx->pc != 0x16A410u) { ctx->pc = 0x16A410u; }
    }
    if (ctx->pc != 0x16A410u) { return; }
    ctx->pc = 0x16A410u;
    // 0x16a410: 0x3c040023
    ctx->pc = 0x16a410u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a414: 0x282d
    ctx->pc = 0x16a414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a418: 0x2484dd20
    ctx->pc = 0x16a418u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958368));
    // 0x16a41c: 0xc050cfe
    ctx->pc = 0x16A41Cu;
    SET_GPR_U32(ctx, 31, 0x16A424u);
    ctx->pc = 0x16A420u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A424u; }
        else if (ctx->pc != 0x16A424u) { ctx->pc = 0x16A424u; }
    }
    if (ctx->pc != 0x16A424u) { return; }
    ctx->pc = 0x16A424u;
    // 0x16a424: 0x3c040023
    ctx->pc = 0x16a424u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16a428: 0x3c050023
    ctx->pc = 0x16a428u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x16a42c: 0x3c060023
    ctx->pc = 0x16a42cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x16a430: 0x3c070023
    ctx->pc = 0x16a430u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x16a434: 0x3c030023
    ctx->pc = 0x16a434u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16a438: 0x2402ffff
    ctx->pc = 0x16a438u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a43c: 0xac80dd40
    ctx->pc = 0x16a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294958400), GPR_U32(ctx, 0));
    // 0x16a440: 0xac62dd4c
    ctx->pc = 0x16a440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958412), GPR_U32(ctx, 2));
    // 0x16a444: 0xaca0cd18
    ctx->pc = 0x16a444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294954264), GPR_U32(ctx, 0));
    // 0x16a448: 0xacc0dd44
    ctx->pc = 0x16a448u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294958404), GPR_U32(ctx, 0));
    // 0x16a44c: 0xace0dd48
    ctx->pc = 0x16a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294958408), GPR_U32(ctx, 0));
    // 0x16a450: 0x8e04b594
    ctx->pc = 0x16a450u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294948244)));
    // 0x16a454: 0x24820001
    ctx->pc = 0x16a454u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_16a458:
    // 0x16a458: 0xdfbf0010
    ctx->pc = 0x16a458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a45c: 0xae02b594
    ctx->pc = 0x16a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948244), GPR_U32(ctx, 2));
    // 0x16a460: 0xdfb00000
    ctx->pc = 0x16a460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a464: 0x3e00008
    ctx->pc = 0x16A464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A468u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A458u: goto label_16a458;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A46Cu;
}
