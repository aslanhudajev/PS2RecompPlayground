#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsGetDevName
// Address: 0x175890 - 0x17591c
void cvFsGetDevName_0x175890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsGetDevName");


    ctx->pc = 0x175890u;

    // 0x175890: 0x27bdfff0
    ctx->pc = 0x175890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175894: 0x14800006
    ctx->pc = 0x175894u;
    {
        const bool branch_taken_0x175894 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x175898u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x175894) {
            ctx->pc = 0x1758B0u;
            goto label_1758b0;
        }
    }
    ctx->pc = 0x17589Cu;
    // 0x17589c: 0x3c04002c
    ctx->pc = 0x17589cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1758a0: 0xc05d076
    ctx->pc = 0x1758A0u;
    SET_GPR_U32(ctx, 31, 0x1758A8u);
    ctx->pc = 0x1758A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946000));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1758A8u; }
        else if (ctx->pc != 0x1758A8u) { ctx->pc = 0x1758A8u; }
    }
    if (ctx->pc != 0x1758A8u) { return; }
    ctx->pc = 0x1758A8u;
    // 0x1758a8: 0x10000019
    ctx->pc = 0x1758A8u;
    {
        const bool branch_taken_0x1758a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1758ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1758a8) {
            ctx->pc = 0x175910u;
            goto label_175910;
        }
    }
    ctx->pc = 0x1758B0u;
label_1758b0:
    // 0x1758b0: 0x3c07002e
    ctx->pc = 0x1758b0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)46 << 16));
    // 0x1758b4: 0x8c840000
    ctx->pc = 0x1758b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1758b8: 0x8ce2f2e8
    ctx->pc = 0x1758b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294963944)));
    // 0x1758bc: 0x1044000e
    ctx->pc = 0x1758BCu;
    {
        const bool branch_taken_0x1758bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x1758C0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1758bc) {
            ctx->pc = 0x1758F8u;
            goto label_1758f8;
        }
    }
    ctx->pc = 0x1758C4u;
    // 0x1758c4: 0x3c08002e
    ctx->pc = 0x1758c4u;
    SET_GPR_U32(ctx, 8, ((uint32_t)46 << 16));
    // 0x1758c8: 0x24c60001
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1758cc: 0x0
    ctx->pc = 0x1758ccu;
    // NOP
label_1758d0:
    // 0x1758d0: 0x28c20020
    ctx->pc = 0x1758d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 32));
    // 0x1758d4: 0x1040000b
    ctx->pc = 0x1758D4u;
    {
        const bool branch_taken_0x1758d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1758D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 7), 4294963944));
        if (branch_taken_0x1758d4) {
            ctx->pc = 0x175904u;
            goto label_175904;
        }
    }
    ctx->pc = 0x1758DCu;
    // 0x1758dc: 0x62900
    ctx->pc = 0x1758dcu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1758e0: 0xa21021
    ctx->pc = 0x1758e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1758e4: 0x8c430000
    ctx->pc = 0x1758e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1758e8: 0x1464fff9
    ctx->pc = 0x1758E8u;
    {
        const bool branch_taken_0x1758e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1758ECu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x1758e8) {
            ctx->pc = 0x1758D0u;
            goto label_1758d0;
        }
    }
    ctx->pc = 0x1758F0u;
    // 0x1758f0: 0x10000006
    ctx->pc = 0x1758F0u;
    {
        const bool branch_taken_0x1758f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1758F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 4294963948));
        if (branch_taken_0x1758f0) {
            ctx->pc = 0x17590Cu;
            goto label_17590c;
        }
    }
    ctx->pc = 0x1758F8u;
label_1758f8:
    // 0x1758f8: 0x282d
    ctx->pc = 0x1758f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758fc: 0x10000002
    ctx->pc = 0x1758FCu;
    {
        const bool branch_taken_0x1758fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175900u;
        SET_GPR_U32(ctx, 8, ((uint32_t)46 << 16));
        if (branch_taken_0x1758fc) {
            ctx->pc = 0x175908u;
            goto label_175908;
        }
    }
    ctx->pc = 0x175904u;
label_175904:
    // 0x175904: 0x62900
    ctx->pc = 0x175904u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 4));
label_175908:
    // 0x175908: 0x2502f2ec
    ctx->pc = 0x175908u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 4294963948));
label_17590c:
    // 0x17590c: 0xa21021
    ctx->pc = 0x17590cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_175910:
    // 0x175910: 0xdfbf0000
    ctx->pc = 0x175910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175914: 0x3e00008
    ctx->pc = 0x175914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175918u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1758B0u: goto label_1758b0;
            case 0x1758D0u: goto label_1758d0;
            case 0x1758F8u: goto label_1758f8;
            case 0x175904u: goto label_175904;
            case 0x175908u: goto label_175908;
            case 0x17590Cu: goto label_17590c;
            case 0x175910u: goto label_175910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17591Cu;
}
