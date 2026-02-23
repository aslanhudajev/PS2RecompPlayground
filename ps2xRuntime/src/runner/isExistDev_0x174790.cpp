#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isExistDev
// Address: 0x174790 - 0x17480c
void isExistDev_0x174790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isExistDev");


    ctx->pc = 0x174790u;

    // 0x174790: 0x27bdffb0
    ctx->pc = 0x174790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x174794: 0x3c02002e
    ctx->pc = 0x174794u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x174798: 0xffb30030
    ctx->pc = 0x174798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17479c: 0xffb20020
    ctx->pc = 0x17479cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1747a0: 0x80982d
    ctx->pc = 0x1747a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747a4: 0xffb10010
    ctx->pc = 0x1747a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1747a8: 0xa0902d
    ctx->pc = 0x1747a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747ac: 0xffb00000
    ctx->pc = 0x1747acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1747b0: 0x2451f2ec
    ctx->pc = 0x1747b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294963948));
    // 0x1747b4: 0xffbf0040
    ctx->pc = 0x1747b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1747b8: 0x802d
    ctx->pc = 0x1747b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747bc: 0x0
    ctx->pc = 0x1747bcu;
    // NOP
label_1747c0:
    // 0x1747c0: 0x260202d
    ctx->pc = 0x1747c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747c4: 0x220282d
    ctx->pc = 0x1747c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1747c8: 0xc05160e
    ctx->pc = 0x1747C8u;
    SET_GPR_U32(ctx, 31, 0x1747D0u);
    ctx->pc = 0x1747CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145838u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x145838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1747D0u; }
        else if (ctx->pc != 0x1747D0u) { ctx->pc = 0x1747D0u; }
    }
    if (ctx->pc != 0x1747D0u) { return; }
    ctx->pc = 0x1747D0u;
    // 0x1747d0: 0x14400003
    ctx->pc = 0x1747D0u;
    {
        const bool branch_taken_0x1747d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1747D4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1747d0) {
            ctx->pc = 0x1747E0u;
            goto label_1747e0;
        }
    }
    ctx->pc = 0x1747D8u;
    // 0x1747d8: 0x10000005
    ctx->pc = 0x1747D8u;
    {
        const bool branch_taken_0x1747d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1747DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1747d8) {
            ctx->pc = 0x1747F0u;
            goto label_1747f0;
        }
    }
    ctx->pc = 0x1747E0u;
label_1747e0:
    // 0x1747e0: 0x2a020020
    ctx->pc = 0x1747e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 32));
    // 0x1747e4: 0x1440fff6
    ctx->pc = 0x1747E4u;
    {
        const bool branch_taken_0x1747e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1747E8u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
        if (branch_taken_0x1747e4) {
            ctx->pc = 0x1747C0u;
            goto label_1747c0;
        }
    }
    ctx->pc = 0x1747ECu;
    // 0x1747ec: 0x102d
    ctx->pc = 0x1747ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1747f0:
    // 0x1747f0: 0xdfbf0040
    ctx->pc = 0x1747f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1747f4: 0xdfb30030
    ctx->pc = 0x1747f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1747f8: 0xdfb20020
    ctx->pc = 0x1747f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1747fc: 0xdfb10010
    ctx->pc = 0x1747fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174800: 0xdfb00000
    ctx->pc = 0x174800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174804: 0x3e00008
    ctx->pc = 0x174804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1747C0u: goto label_1747c0;
            case 0x1747E0u: goto label_1747e0;
            case 0x1747F0u: goto label_1747f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17480Cu;
}
