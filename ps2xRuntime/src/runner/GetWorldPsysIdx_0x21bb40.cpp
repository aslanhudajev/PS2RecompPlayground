#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetWorldPsysIdx
// Address: 0x21bb40 - 0x21bbb8
void GetWorldPsysIdx_0x21bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21bb40u;

    // 0x21bb40: 0x27bdfff0
    ctx->pc = 0x21bb40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21bb44: 0xffbf0000
    ctx->pc = 0x21bb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21bb48: 0x42600
    ctx->pc = 0x21bb48u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x21bb4c: 0x42e03
    ctx->pc = 0x21bb4cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 24));
    // 0x21bb50: 0x3c020032
    ctx->pc = 0x21bb50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21bb54: 0x8c42fa98
    ctx->pc = 0x21bb54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965912)));
    // 0x21bb58: 0x18400010
    ctx->pc = 0x21BB58u;
    {
        const bool branch_taken_0x21bb58 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21BB5Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21bb58) {
            ctx->pc = 0x21BB9Cu;
            goto label_21bb9c;
        }
    }
    ctx->pc = 0x21BB60u;
    // 0x21bb60: 0x3c020032
    ctx->pc = 0x21bb60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21bb64: 0x2442f9f8
    ctx->pc = 0x21bb64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x21bb68: 0x8c48009c
    ctx->pc = 0x21bb68u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x21bb6c: 0x24060138
    ctx->pc = 0x21bb6cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 312));
    // 0x21bb70: 0x8c4400a0
    ctx->pc = 0x21bb70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x21bb74: 0x663818
    ctx->pc = 0x21bb74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_21bb78:
    // 0x21bb78: 0xe81021
    ctx->pc = 0x21bb78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x21bb7c: 0x80420006
    ctx->pc = 0x21bb7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x21bb80: 0x54450003
    ctx->pc = 0x21BB80u;
    {
        const bool branch_taken_0x21bb80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x21bb80) {
            ctx->pc = 0x21BB84u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x21BB90u;
            goto label_21bb90;
        }
    }
    ctx->pc = 0x21BB88u;
    // 0x21bb88: 0x10000008
    ctx->pc = 0x21BB88u;
    {
        const bool branch_taken_0x21bb88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BB8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21bb88) {
            ctx->pc = 0x21BBACu;
            goto label_21bbac;
        }
    }
    ctx->pc = 0x21BB90u;
label_21bb90:
    // 0x21bb90: 0x64102a
    ctx->pc = 0x21bb90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x21bb94: 0x1440fff8
    ctx->pc = 0x21BB94u;
    {
        const bool branch_taken_0x21bb94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21BB98u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x21bb94) {
            ctx->pc = 0x21BB78u;
            goto label_21bb78;
        }
    }
    ctx->pc = 0x21BB9Cu;
label_21bb9c:
    // 0x21bb9c: 0x3c04003a
    ctx->pc = 0x21bb9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21bba0: 0xc0b492e
    ctx->pc = 0x21BBA0u;
    SET_GPR_U32(ctx, 31, 0x21BBA8u);
    ctx->pc = 0x21BBA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25520));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BBA8u; }
    }
    if (ctx->pc != 0x21BBA8u) { return; }
    ctx->pc = 0x21BBA8u;
    // 0x21bba8: 0x2402ffff
    ctx->pc = 0x21bba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_21bbac:
    // 0x21bbac: 0xdfbf0000
    ctx->pc = 0x21bbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21bbb0: 0x3e00008
    ctx->pc = 0x21BBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BBB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21BB78u: goto label_21bb78;
            case 0x21BB90u: goto label_21bb90;
            case 0x21BB9Cu: goto label_21bb9c;
            case 0x21BBACu: goto label_21bbac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21BBB8u;
}
