#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTMF_CreateCvfs
// Address: 0x1707b0 - 0x17085c
void ADXSTMF_CreateCvfs_0x1707b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTMF_CreateCvfs");


    ctx->pc = 0x1707b0u;

    // 0x1707b0: 0x27bdffe0
    ctx->pc = 0x1707b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1707b4: 0xa0582d
    ctx->pc = 0x1707b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707b8: 0xffb00000
    ctx->pc = 0x1707b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1707bc: 0x80502d
    ctx->pc = 0x1707bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707c0: 0x8f898218
    ctx->pc = 0x1707c0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1707c4: 0xc0602d
    ctx->pc = 0x1707c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707c8: 0xffbf0010
    ctx->pc = 0x1707c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1707cc: 0xe0402d
    ctx->pc = 0x1707ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707d0: 0x282d
    ctx->pc = 0x1707d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707d4: 0x19200014
    ctx->pc = 0x1707D4u;
    {
        const bool branch_taken_0x1707d4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1707D8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1707d4) {
            ctx->pc = 0x170828u;
            goto label_170828;
        }
    }
    ctx->pc = 0x1707DCu;
    // 0x1707dc: 0x8f828214
    ctx->pc = 0x1707dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x1707e0: 0x3c030023
    ctx->pc = 0x1707e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1707e4: 0x24637bc0
    ctx->pc = 0x1707e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 31680));
    // 0x1707e8: 0x21180
    ctx->pc = 0x1707e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x1707ec: 0x438021
    ctx->pc = 0x1707ecu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1707f0: 0x82040000
    ctx->pc = 0x1707f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1707f4: 0x1080000c
    ctx->pc = 0x1707F4u;
    {
        const bool branch_taken_0x1707f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1707f4) {
            ctx->pc = 0x170828u;
            goto label_170828;
        }
    }
    ctx->pc = 0x1707FCu;
    // 0x1707fc: 0x120302d
    ctx->pc = 0x1707fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170800: 0x200202d
    ctx->pc = 0x170800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170804: 0x200182d
    ctx->pc = 0x170804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170808:
    // 0x170808: 0x24a50001
    ctx->pc = 0x170808u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17080c: 0x24840040
    ctx->pc = 0x17080cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x170810: 0xa6102a
    ctx->pc = 0x170810u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x170814: 0x10400004
    ctx->pc = 0x170814u;
    {
        const bool branch_taken_0x170814 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x170818u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x170814) {
            ctx->pc = 0x170828u;
            goto label_170828;
        }
    }
    ctx->pc = 0x17081Cu;
    // 0x17081c: 0x80820000
    ctx->pc = 0x17081cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170820: 0x1440fff9
    ctx->pc = 0x170820u;
    {
        const bool branch_taken_0x170820 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x170824u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170820) {
            ctx->pc = 0x170808u;
            goto label_170808;
        }
    }
    ctx->pc = 0x170828u;
label_170828:
    // 0x170828: 0x14a90003
    ctx->pc = 0x170828u;
    {
        const bool branch_taken_0x170828 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 9));
        ctx->pc = 0x17082Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170828) {
            ctx->pc = 0x170838u;
            goto label_170838;
        }
    }
    ctx->pc = 0x170830u;
    // 0x170830: 0x10000006
    ctx->pc = 0x170830u;
    {
        const bool branch_taken_0x170830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170834u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170830) {
            ctx->pc = 0x17084Cu;
            goto label_17084c;
        }
    }
    ctx->pc = 0x170838u;
label_170838:
    // 0x170838: 0x160302d
    ctx->pc = 0x170838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17083c: 0x180382d
    ctx->pc = 0x17083cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170840: 0xc05c1ac
    ctx->pc = 0x170840u;
    SET_GPR_U32(ctx, 31, 0x170848u);
    ctx->pc = 0x170844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1706B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTMF_SetupHandleMember_0x1706b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170848u; }
        else if (ctx->pc != 0x170848u) { ctx->pc = 0x170848u; }
    }
    if (ctx->pc != 0x170848u) { return; }
    ctx->pc = 0x170848u;
    // 0x170848: 0x200102d
    ctx->pc = 0x170848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17084c:
    // 0x17084c: 0xdfbf0010
    ctx->pc = 0x17084cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170850: 0xdfb00000
    ctx->pc = 0x170850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170854: 0x3e00008
    ctx->pc = 0x170854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170858u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170808u: goto label_170808;
            case 0x170828u: goto label_170828;
            case 0x170838u: goto label_170838;
            case 0x17084Cu: goto label_17084c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17085Cu;
}
