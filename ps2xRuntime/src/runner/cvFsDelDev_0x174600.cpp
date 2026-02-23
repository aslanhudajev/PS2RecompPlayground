#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsDelDev
// Address: 0x174600 - 0x1746cc
void cvFsDelDev_0x174600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsDelDev");


    ctx->pc = 0x174600u;

    // 0x174600: 0x27bdff90
    ctx->pc = 0x174600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x174604: 0xffb20020
    ctx->pc = 0x174604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x174608: 0xffbf0060
    ctx->pc = 0x174608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17460c: 0x80902d
    ctx->pc = 0x17460cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174610: 0xffb50050
    ctx->pc = 0x174610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x174614: 0xffb40040
    ctx->pc = 0x174614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x174618: 0xffb30030
    ctx->pc = 0x174618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17461c: 0xffb10010
    ctx->pc = 0x17461cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x174620: 0x16400010
    ctx->pc = 0x174620u;
    {
        const bool branch_taken_0x174620 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x174624u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x174620) {
            ctx->pc = 0x174664u;
            goto label_174664;
        }
    }
    ctx->pc = 0x174628u;
    // 0x174628: 0x3c04002c
    ctx->pc = 0x174628u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17462c: 0xdfbf0060
    ctx->pc = 0x17462cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x174630: 0xdfb50050
    ctx->pc = 0x174630u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x174634: 0x2484a488
    ctx->pc = 0x174634u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943880));
    // 0x174638: 0xdfb40040
    ctx->pc = 0x174638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17463c: 0xdfb30030
    ctx->pc = 0x17463cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174640: 0xdfb20020
    ctx->pc = 0x174640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174644: 0xdfb10010
    ctx->pc = 0x174644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174648: 0xdfb00000
    ctx->pc = 0x174648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17464c: 0x805d076
    ctx->pc = 0x17464Cu;
    ctx->pc = 0x174650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x174654u;
label_174654:
    // 0x174654: 0x26a2fffc
    ctx->pc = 0x174654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 4294967292));
    // 0x174658: 0x2621021
    ctx->pc = 0x174658u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x17465c: 0x10000012
    ctx->pc = 0x17465Cu;
    {
        const bool branch_taken_0x17465c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174660u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x17465c) {
            ctx->pc = 0x1746A8u;
            goto label_1746a8;
        }
    }
    ctx->pc = 0x174664u;
label_174664:
    // 0x174664: 0x240202d
    ctx->pc = 0x174664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174668: 0xc051554
    ctx->pc = 0x174668u;
    SET_GPR_U32(ctx, 31, 0x174670u);
    ctx->pc = 0x17466Cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174670u; }
        else if (ctx->pc != 0x174670u) { ctx->pc = 0x174670u; }
    }
    if (ctx->pc != 0x174670u) { return; }
    ctx->pc = 0x174670u;
    // 0x174670: 0x40a02d
    ctx->pc = 0x174670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174674: 0x3c02002e
    ctx->pc = 0x174674u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x174678: 0x2450f2ec
    ctx->pc = 0x174678u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294963948));
    // 0x17467c: 0x200a82d
    ctx->pc = 0x17467cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174680:
    // 0x174680: 0x119900
    ctx->pc = 0x174680u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 17), 4));
    // 0x174684: 0x240202d
    ctx->pc = 0x174684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174688: 0x200282d
    ctx->pc = 0x174688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17468c: 0xc05160e
    ctx->pc = 0x17468Cu;
    SET_GPR_U32(ctx, 31, 0x174694u);
    ctx->pc = 0x174690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145838u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncmp_0x145838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174694u; }
        else if (ctx->pc != 0x174694u) { ctx->pc = 0x174694u; }
    }
    if (ctx->pc != 0x174694u) { return; }
    ctx->pc = 0x174694u;
    // 0x174694: 0x1040ffef
    ctx->pc = 0x174694u;
    {
        const bool branch_taken_0x174694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174698u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x174694) {
            ctx->pc = 0x174654u;
            goto label_174654;
        }
    }
    ctx->pc = 0x17469Cu;
    // 0x17469c: 0x2e220020
    ctx->pc = 0x17469cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 32));
    // 0x1746a0: 0x1440fff7
    ctx->pc = 0x1746A0u;
    {
        const bool branch_taken_0x1746a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1746A4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x1746a0) {
            ctx->pc = 0x174680u;
            goto label_174680;
        }
    }
    ctx->pc = 0x1746A8u;
label_1746a8:
    // 0x1746a8: 0xdfbf0060
    ctx->pc = 0x1746a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1746ac: 0xdfb50050
    ctx->pc = 0x1746acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1746b0: 0xdfb40040
    ctx->pc = 0x1746b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1746b4: 0xdfb30030
    ctx->pc = 0x1746b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1746b8: 0xdfb20020
    ctx->pc = 0x1746b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1746bc: 0xdfb10010
    ctx->pc = 0x1746bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1746c0: 0xdfb00000
    ctx->pc = 0x1746c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746c4: 0x3e00008
    ctx->pc = 0x1746C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1746C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174654u: goto label_174654;
            case 0x174664u: goto label_174664;
            case 0x174680u: goto label_174680;
            case 0x1746A8u: goto label_1746a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1746CCu;
}
