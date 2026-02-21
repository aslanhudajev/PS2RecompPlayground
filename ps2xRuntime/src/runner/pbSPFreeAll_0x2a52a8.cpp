#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSPFreeAll
// Address: 0x2a52a8 - 0x2a534c
void pbSPFreeAll_0x2a52a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a52a8u;

    // 0x2a52a8: 0x27bdffd0
    ctx->pc = 0x2a52a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a52ac: 0xffbf0020
    ctx->pc = 0x2a52acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a52b0: 0xffb10010
    ctx->pc = 0x2a52b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a52b4: 0xffb00000
    ctx->pc = 0x2a52b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a52b8: 0x3c020036
    ctx->pc = 0x2a52b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a52bc: 0x8c50dee0
    ctx->pc = 0x2a52bcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a52c0: 0x3c110036
    ctx->pc = 0x2a52c0u;
    SET_GPR_U32(ctx, 17, ((uint32_t)54 << 16));
    // 0x2a52c4: 0x8e237fb4
    ctx->pc = 0x2a52c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 32692)));
    // 0x2a52c8: 0x2402ffff
    ctx->pc = 0x2a52c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a52cc: 0x54620006
    ctx->pc = 0x2A52CCu;
    {
        const bool branch_taken_0x2a52cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2a52cc) {
            ctx->pc = 0x2A52D0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->pc = 0x2A52E8u;
            goto label_2a52e8;
        }
    }
    ctx->pc = 0x2A52D4u;
    // 0x2a52d4: 0x3c040036
    ctx->pc = 0x2a52d4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x2a52d8: 0xc0c0d78
    ctx->pc = 0x2A52D8u;
    SET_GPR_U32(ctx, 31, 0x2A52E0u);
    ctx->pc = 0x2A52DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32696));
    ctx->pc = 0x3035E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x3035e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A52E0u; }
    }
    if (ctx->pc != 0x2A52E0u) { return; }
    ctx->pc = 0x2A52E0u;
    // 0x2a52e0: 0xae227fb4
    ctx->pc = 0x2a52e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32692), GPR_U32(ctx, 2));
    // 0x2a52e4: 0x8e030034
    ctx->pc = 0x2a52e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2a52e8:
    // 0x2a52e8: 0x3c020036
    ctx->pc = 0x2a52e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a52ec: 0x8c427fb4
    ctx->pc = 0x2a52ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32692)));
    // 0x2a52f0: 0xac620000
    ctx->pc = 0x2a52f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a52f4: 0x8e030034
    ctx->pc = 0x2a52f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2a52f8: 0x3c027000
    ctx->pc = 0x2a52f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)28672 << 16));
    // 0x2a52fc: 0xac620004
    ctx->pc = 0x2a52fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2a5300: 0x282d
    ctx->pc = 0x2a5300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5304: 0x8e020034
    ctx->pc = 0x2a5304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_2a5308:
    // 0x2a5308: 0x8c430004
    ctx->pc = 0x2a5308u;
    SET_GPR_U32(ctx, 3, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4))); // MMIO: 0x70000004
    // 0x2a530c: 0x512c0
    ctx->pc = 0x2a530cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 11));
    // 0x2a5310: 0x432021
    ctx->pc = 0x2a5310u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5314: 0x24420800
    ctx->pc = 0x2a5314u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2a5318: 0x431021
    ctx->pc = 0x2a5318u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a531c: 0xac820000
    ctx->pc = 0x2a531cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2a5320: 0x24a50001
    ctx->pc = 0x2a5320u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a5324: 0x28a20007
    ctx->pc = 0x2a5324u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 7));
    // 0x2a5328: 0x1440fff7
    ctx->pc = 0x2A5328u;
    {
        const bool branch_taken_0x2a5328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A532Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 52)));
        if (branch_taken_0x2a5328) {
            ctx->pc = 0x2A5308u;
            goto label_2a5308;
        }
    }
    ctx->pc = 0x2A5330u;
    // 0x2a5330: 0x8c420004
    ctx->pc = 0x2a5330u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a5334: 0xac403800
    ctx->pc = 0x2a5334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14336), GPR_U32(ctx, 0));
    // 0x2a5338: 0xdfbf0020
    ctx->pc = 0x2a5338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a533c: 0xdfb10010
    ctx->pc = 0x2a533cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5340: 0xdfb00000
    ctx->pc = 0x2a5340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5344: 0x3e00008
    ctx->pc = 0x2A5344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5348u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A52E8u: goto label_2a52e8;
            case 0x2A5308u: goto label_2a5308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A534Cu;
}
