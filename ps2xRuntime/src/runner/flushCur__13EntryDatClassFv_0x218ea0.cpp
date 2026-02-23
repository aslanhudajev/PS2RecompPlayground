#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: flushCur__13EntryDatClassFv
// Address: 0x218ea0 - 0x218f30
void flushCur__13EntryDatClassFv_0x218ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("flushCur__13EntryDatClassFv");


    ctx->pc = 0x218ea0u;

    // 0x218ea0: 0x27bdffd0
    ctx->pc = 0x218ea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218ea4: 0x7fbf0020
    ctx->pc = 0x218ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x218ea8: 0x7fb10010
    ctx->pc = 0x218ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218eac: 0x7fb00000
    ctx->pc = 0x218eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218eb0: 0x84901000
    ctx->pc = 0x218eb0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x218eb4: 0x70808e28
    ctx->pc = 0x218eb4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x218eb8: 0x84841002
    ctx->pc = 0x218eb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x218ebc: 0x90082a
    ctx->pc = 0x218ebcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 16)));
    // 0x218ec0: 0x14200002
    ctx->pc = 0x218EC0u;
    {
        const bool branch_taken_0x218ec0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x218EC4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x218ec0) {
            ctx->pc = 0x218ECCu;
            goto label_218ecc;
        }
    }
    ctx->pc = 0x218EC8u;
    // 0x218ec8: 0x70001e28
    ctx->pc = 0x218ec8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_218ecc:
    // 0x218ecc: 0x831821
    ctx->pc = 0x218eccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x218ed0: 0x12030012
    ctx->pc = 0x218ED0u;
    {
        const bool branch_taken_0x218ed0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 3));
        ctx->pc = 0x218ED4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218ed0) {
            ctx->pc = 0x218F1Cu;
            goto label_218f1c;
        }
    }
    ctx->pc = 0x218ED8u;
    // 0x218ed8: 0xc086454
    ctx->pc = 0x218ED8u;
    SET_GPR_U32(ctx, 31, 0x218EE0u);
    ctx->pc = 0x218EDCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219150u;
    {
        const uint32_t __entryPc = ctx->pc;
        execCore__13EntryDatClassFi_0x219150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EE0u; }
        else if (ctx->pc != 0x218EE0u) { ctx->pc = 0x218EE0u; }
    }
    if (ctx->pc != 0x218EE0u) { return; }
    ctx->pc = 0x218EE0u;
    // 0x218ee0: 0x2403ffff
    ctx->pc = 0x218ee0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218ee4: 0x1043000b
    ctx->pc = 0x218EE4u;
    {
        const bool branch_taken_0x218ee4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x218EE8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218ee4) {
            ctx->pc = 0x218F14u;
            goto label_218f14;
        }
    }
    ctx->pc = 0x218EECu;
label_218eec:
    // 0x218eec: 0xc07a720
    ctx->pc = 0x218EECu;
    SET_GPR_U32(ctx, 31, 0x218EF4u);
    ctx->pc = 0x1E9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_UpdateStatus__Fv_0x1e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218EF4u; }
        else if (ctx->pc != 0x218EF4u) { ctx->pc = 0x218EF4u; }
    }
    if (ctx->pc != 0x218EF4u) { return; }
    ctx->pc = 0x218EF4u;
    // 0x218ef4: 0x72202628
    ctx->pc = 0x218ef4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x218ef8: 0xc086454
    ctx->pc = 0x218EF8u;
    SET_GPR_U32(ctx, 31, 0x218F00u);
    ctx->pc = 0x218EFCu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219150u;
    {
        const uint32_t __entryPc = ctx->pc;
        execCore__13EntryDatClassFi_0x219150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F00u; }
        else if (ctx->pc != 0x218F00u) { ctx->pc = 0x218F00u; }
    }
    if (ctx->pc != 0x218F00u) { return; }
    ctx->pc = 0x218F00u;
    // 0x218f00: 0x2403ffff
    ctx->pc = 0x218f00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218f04: 0x1443fff9
    ctx->pc = 0x218F04u;
    {
        const bool branch_taken_0x218f04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x218f04) {
            ctx->pc = 0x218EECu;
            goto label_218eec;
        }
    }
    ctx->pc = 0x218F0Cu;
    // 0x218f0c: 0x0
    ctx->pc = 0x218f0cu;
    // NOP
    // 0x218f10: 0x72202628
    ctx->pc = 0x218f10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_218f14:
    // 0x218f14: 0xc0864e8
    ctx->pc = 0x218F14u;
    SET_GPR_U32(ctx, 31, 0x218F1Cu);
    ctx->pc = 0x2193A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        incReqRdPtr__13EntryDatClassFv_0x2193a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218F1Cu; }
        else if (ctx->pc != 0x218F1Cu) { ctx->pc = 0x218F1Cu; }
    }
    if (ctx->pc != 0x218F1Cu) { return; }
    ctx->pc = 0x218F1Cu;
label_218f1c:
    // 0x218f1c: 0x7bbf0020
    ctx->pc = 0x218f1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218f20: 0x7bb10010
    ctx->pc = 0x218f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218f24: 0x7bb00000
    ctx->pc = 0x218f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218f28: 0x3e00008
    ctx->pc = 0x218F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218F2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218ECCu: goto label_218ecc;
            case 0x218EECu: goto label_218eec;
            case 0x218F14u: goto label_218f14;
            case 0x218F1Cu: goto label_218f1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218F30u;
}
