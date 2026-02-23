#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFPTS_WritePtsQue
// Address: 0x19c050 - 0x19c0c8
void SFPTS_WritePtsQue_0x19c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFPTS_WritePtsQue");


    ctx->pc = 0x19c050u;

    // 0x19c050: 0x27bdffe0
    ctx->pc = 0x19c050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c054: 0x8cc20000
    ctx->pc = 0x19c054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19c058: 0xffb00000
    ctx->pc = 0x19c058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19c05c: 0xffbf0010
    ctx->pc = 0x19c05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c060: 0x4400014
    ctx->pc = 0x19C060u;
    {
        const bool branch_taken_0x19c060 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19C064u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c060) {
            ctx->pc = 0x19C0B4u;
            goto label_19c0b4;
        }
    }
    ctx->pc = 0x19C068u;
    // 0x19c068: 0x24020388
    ctx->pc = 0x19c068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x19c06c: 0x26030d34
    ctx->pc = 0x19c06cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 3380));
    // 0x19c070: 0xa21018
    ctx->pc = 0x19c070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x19c074: 0x621821
    ctx->pc = 0x19c074u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c078: 0x8c620040
    ctx->pc = 0x19c078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x19c07c: 0x1040000d
    ctx->pc = 0x19C07Cu;
    {
        const bool branch_taken_0x19c07c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C080u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x19c07c) {
            ctx->pc = 0x19C0B4u;
            goto label_19c0b4;
        }
    }
    ctx->pc = 0x19C084u;
    // 0x19c084: 0xc067032
    ctx->pc = 0x19C084u;
    SET_GPR_U32(ctx, 31, 0x19C08Cu);
    ctx->pc = 0x19C088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfpts_WritePtsQueSub_0x19c0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C08Cu; }
        else if (ctx->pc != 0x19C08Cu) { ctx->pc = 0x19C08Cu; }
    }
    if (ctx->pc != 0x19C08Cu) { return; }
    ctx->pc = 0x19C08Cu;
    // 0x19c08c: 0x3c03ffff
    ctx->pc = 0x19c08cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x19c090: 0x3463ffff
    ctx->pc = 0x19c090u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x19c094: 0x14430008
    ctx->pc = 0x19C094u;
    {
        const bool branch_taken_0x19c094 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x19C098u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19c094) {
            ctx->pc = 0x19C0B8u;
            goto label_19c0b8;
        }
    }
    ctx->pc = 0x19C09Cu;
    // 0x19c09c: 0x3c05ff00
    ctx->pc = 0x19c09cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19c0a0: 0x200202d
    ctx->pc = 0x19c0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0a4: 0xc064ea0
    ctx->pc = 0x19C0A4u;
    SET_GPR_U32(ctx, 31, 0x19C0ACu);
    ctx->pc = 0x19C0A8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 1057));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0ACu; }
        else if (ctx->pc != 0x19C0ACu) { ctx->pc = 0x19C0ACu; }
    }
    if (ctx->pc != 0x19C0ACu) { return; }
    ctx->pc = 0x19C0ACu;
    // 0x19c0ac: 0x10000003
    ctx->pc = 0x19C0ACu;
    {
        const bool branch_taken_0x19c0ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C0B0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19c0ac) {
            ctx->pc = 0x19C0BCu;
            goto label_19c0bc;
        }
    }
    ctx->pc = 0x19C0B4u;
label_19c0b4:
    // 0x19c0b4: 0x102d
    ctx->pc = 0x19c0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c0b8:
    // 0x19c0b8: 0xdfbf0010
    ctx->pc = 0x19c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19c0bc:
    // 0x19c0bc: 0xdfb00000
    ctx->pc = 0x19c0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c0c0: 0x3e00008
    ctx->pc = 0x19C0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C0C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C0B4u: goto label_19c0b4;
            case 0x19C0B8u: goto label_19c0b8;
            case 0x19C0BCu: goto label_19c0bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C0C8u;
}
