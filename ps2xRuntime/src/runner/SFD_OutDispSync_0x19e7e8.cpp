#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_OutDispSync
// Address: 0x19e7e8 - 0x19e864
void SFD_OutDispSync_0x19e7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_OutDispSync");


    ctx->pc = 0x19e7e8u;

    // 0x19e7e8: 0x27bdffc0
    ctx->pc = 0x19e7e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e7ec: 0xffb00000
    ctx->pc = 0x19e7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e7f0: 0xffb20020
    ctx->pc = 0x19e7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19e7f4: 0x80802d
    ctx->pc = 0x19e7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7f8: 0xffb10010
    ctx->pc = 0x19e7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19e7fc: 0xa0902d
    ctx->pc = 0x19e7fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e800: 0xffbf0030
    ctx->pc = 0x19e800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19e804: 0xc064f1e
    ctx->pc = 0x19E804u;
    SET_GPR_U32(ctx, 31, 0x19E80Cu);
    ctx->pc = 0x19E808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E80Cu; }
        else if (ctx->pc != 0x19E80Cu) { ctx->pc = 0x19E80Cu; }
    }
    if (ctx->pc != 0x19E80Cu) { return; }
    ctx->pc = 0x19E80Cu;
    // 0x19e80c: 0x10400006
    ctx->pc = 0x19E80Cu;
    {
        const bool branch_taken_0x19e80c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E810u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e80c) {
            ctx->pc = 0x19E828u;
            goto label_19e828;
        }
    }
    ctx->pc = 0x19E814u;
    // 0x19e814: 0x3c05ff00
    ctx->pc = 0x19e814u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19e818: 0xc064ea0
    ctx->pc = 0x19E818u;
    SET_GPR_U32(ctx, 31, 0x19E820u);
    ctx->pc = 0x19E81Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 293));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E820u; }
        else if (ctx->pc != 0x19E820u) { ctx->pc = 0x19E820u; }
    }
    if (ctx->pc != 0x19E820u) { return; }
    ctx->pc = 0x19E820u;
    // 0x19e820: 0x1000000b
    ctx->pc = 0x19E820u;
    {
        const bool branch_taken_0x19e820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19E824u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x19e820) {
            ctx->pc = 0x19E850u;
            goto label_19e850;
        }
    }
    ctx->pc = 0x19E828u;
label_19e828:
    // 0x19e828: 0x26030a94
    ctx->pc = 0x19e828u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2708));
    // 0x19e82c: 0x24050001
    ctx->pc = 0x19e82cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e830: 0x8c64025c
    ctx->pc = 0x19e830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 604)));
    // 0x19e834: 0x102d
    ctx->pc = 0x19e834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e838: 0xac710264
    ctx->pc = 0x19e838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 612), GPR_U32(ctx, 17));
    // 0x19e83c: 0x24840001
    ctx->pc = 0x19e83cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x19e840: 0xac720260
    ctx->pc = 0x19e840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 608), GPR_U32(ctx, 18));
    // 0x19e844: 0xac64025c
    ctx->pc = 0x19e844u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 604), GPR_U32(ctx, 4));
    // 0x19e848: 0xae05003c
    ctx->pc = 0x19e848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
    // 0x19e84c: 0xdfbf0030
    ctx->pc = 0x19e84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19e850:
    // 0x19e850: 0xdfb20020
    ctx->pc = 0x19e850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e854: 0xdfb10010
    ctx->pc = 0x19e854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e858: 0xdfb00000
    ctx->pc = 0x19e858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e85c: 0x3e00008
    ctx->pc = 0x19E85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E860u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19E828u: goto label_19e828;
            case 0x19E850u: goto label_19e850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19E864u;
}
