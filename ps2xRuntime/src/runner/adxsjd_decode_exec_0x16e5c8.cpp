#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsjd_decode_exec
// Address: 0x16e5c8 - 0x16e650
void adxsjd_decode_exec_0x16e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsjd_decode_exec");


    ctx->pc = 0x16e5c8u;

    // 0x16e5c8: 0x27bdffd0
    ctx->pc = 0x16e5c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e5cc: 0xffb10010
    ctx->pc = 0x16e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16e5d0: 0xffbf0020
    ctx->pc = 0x16e5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16e5d4: 0x80882d
    ctx->pc = 0x16e5d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5d8: 0xffb00000
    ctx->pc = 0x16e5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e5dc: 0x8e300004
    ctx->pc = 0x16e5dcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16e5e0: 0xc05a02e
    ctx->pc = 0x16E5E0u;
    SET_GPR_U32(ctx, 31, 0x16E5E8u);
    ctx->pc = 0x16E5E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1680B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetStat_0x1680b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5E8u; }
        else if (ctx->pc != 0x16E5E8u) { ctx->pc = 0x16E5E8u; }
    }
    if (ctx->pc != 0x16E5E8u) { return; }
    ctx->pc = 0x16E5E8u;
    // 0x16e5e8: 0x14400003
    ctx->pc = 0x16E5E8u;
    {
        const bool branch_taken_0x16e5e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16e5e8) {
            ctx->pc = 0x16E5F8u;
            goto label_16e5f8;
        }
    }
    ctx->pc = 0x16E5F0u;
    // 0x16e5f0: 0xc05b862
    ctx->pc = 0x16E5F0u;
    SET_GPR_U32(ctx, 31, 0x16E5F8u);
    ctx->pc = 0x16E5F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E188u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsjd_decexec_start_0x16e188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5F8u; }
        else if (ctx->pc != 0x16E5F8u) { ctx->pc = 0x16E5F8u; }
    }
    if (ctx->pc != 0x16E5F8u) { return; }
    ctx->pc = 0x16E5F8u;
label_16e5f8:
    // 0x16e5f8: 0xc05a198
    ctx->pc = 0x16E5F8u;
    SET_GPR_U32(ctx, 31, 0x16E600u);
    ctx->pc = 0x16E5FCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168660u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_ExecHndl_0x168660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E600u; }
        else if (ctx->pc != 0x16E600u) { ctx->pc = 0x16E600u; }
    }
    if (ctx->pc != 0x16E600u) { return; }
    ctx->pc = 0x16E600u;
    // 0x16e600: 0xc05a02e
    ctx->pc = 0x16E600u;
    SET_GPR_U32(ctx, 31, 0x16E608u);
    ctx->pc = 0x16E604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1680B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXB_GetStat_0x1680b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E608u; }
        else if (ctx->pc != 0x16E608u) { ctx->pc = 0x16E608u; }
    }
    if (ctx->pc != 0x16E608u) { return; }
    ctx->pc = 0x16E608u;
    // 0x16e608: 0x24030003
    ctx->pc = 0x16e608u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16e60c: 0x54430004
    ctx->pc = 0x16E60Cu;
    {
        const bool branch_taken_0x16e60c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x16e60c) {
            ctx->pc = 0x16E610u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
            ctx->pc = 0x16E620u;
            goto label_16e620;
        }
    }
    ctx->pc = 0x16E614u;
    // 0x16e614: 0xc05b8d4
    ctx->pc = 0x16E614u;
    SET_GPR_U32(ctx, 31, 0x16E61Cu);
    ctx->pc = 0x16E618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16E350u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsjd_decexec_end_0x16e350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E61Cu; }
        else if (ctx->pc != 0x16E61Cu) { ctx->pc = 0x16E61Cu; }
    }
    if (ctx->pc != 0x16E61Cu) { return; }
    ctx->pc = 0x16E61Cu;
    // 0x16e61c: 0x860300a8
    ctx->pc = 0x16e61cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
label_16e620:
    // 0x16e620: 0x2402000a
    ctx->pc = 0x16e620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x16e624: 0x14620006
    ctx->pc = 0x16E624u;
    {
        const bool branch_taken_0x16e624 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16E628u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x16e624) {
            ctx->pc = 0x16E640u;
            goto label_16e640;
        }
    }
    ctx->pc = 0x16E62Cu;
    // 0x16e62c: 0x220202d
    ctx->pc = 0x16e62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e630: 0xdfb10010
    ctx->pc = 0x16e630u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e634: 0xdfb00000
    ctx->pc = 0x16e634u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e638: 0x805b94e
    ctx->pc = 0x16E638u;
    ctx->pc = 0x16E63Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x16E538u;
    adxsjd_decexec_ahx_0x16e538(rdram, ctx, runtime); return;
    ctx->pc = 0x16E640u;
label_16e640:
    // 0x16e640: 0xdfb10010
    ctx->pc = 0x16e640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e644: 0xdfb00000
    ctx->pc = 0x16e644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e648: 0x3e00008
    ctx->pc = 0x16E648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E64Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E5F8u: goto label_16e5f8;
            case 0x16E620u: goto label_16e620;
            case 0x16E640u: goto label_16e640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E650u;
}
