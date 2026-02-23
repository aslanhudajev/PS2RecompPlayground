#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankMotImm__13EntryDatClassFi
// Address: 0x218fd0 - 0x219050
void entryBankMotImm__13EntryDatClassFi_0x218fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankMotImm__13EntryDatClassFi");


    ctx->pc = 0x218fd0u;

    // 0x218fd0: 0x27bdffe0
    ctx->pc = 0x218fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x218fd4: 0x7fbf0010
    ctx->pc = 0x218fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x218fd8: 0x7fb00000
    ctx->pc = 0x218fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218fdc: 0x70a08628
    ctx->pc = 0x218fdcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x218fe0: 0x84831000
    ctx->pc = 0x218fe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x218fe4: 0x84851002
    ctx->pc = 0x218fe4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x218fe8: 0xa3082a
    ctx->pc = 0x218fe8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x218fec: 0x14200002
    ctx->pc = 0x218FECu;
    {
        const bool branch_taken_0x218fec = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x218FF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x218fec) {
            ctx->pc = 0x218FF8u;
            goto label_218ff8;
        }
    }
    ctx->pc = 0x218FF4u;
    // 0x218ff4: 0x70001628
    ctx->pc = 0x218ff4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_218ff8:
    // 0x218ff8: 0xa21021
    ctx->pc = 0x218ff8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x218ffc: 0x1062000e
    ctx->pc = 0x218FFCu;
    {
        const bool branch_taken_0x218ffc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x219000u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218ffc) {
            ctx->pc = 0x219038u;
            goto label_219038;
        }
    }
    ctx->pc = 0x219004u;
    // 0x219004: 0x31100
    ctx->pc = 0x219004u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x219008: 0x821021
    ctx->pc = 0x219008u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21900c: 0x8c430000
    ctx->pc = 0x21900cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x219010: 0x24020004
    ctx->pc = 0x219010u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x219014: 0x10620005
    ctx->pc = 0x219014u;
    {
        const bool branch_taken_0x219014 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x219018u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x219014) {
            ctx->pc = 0x21902Cu;
            goto label_21902c;
        }
    }
    ctx->pc = 0x21901Cu;
    // 0x21901c: 0x10620003
    ctx->pc = 0x21901Cu;
    {
        const bool branch_taken_0x21901c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x21901c) {
            ctx->pc = 0x21902Cu;
            goto label_21902c;
        }
    }
    ctx->pc = 0x219024u;
    // 0x219024: 0x10000003
    ctx->pc = 0x219024u;
    {
        const bool branch_taken_0x219024 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x219024) {
            ctx->pc = 0x219034u;
            goto label_219034;
        }
    }
    ctx->pc = 0x21902Cu;
label_21902c:
    // 0x21902c: 0xc0863a8
    ctx->pc = 0x21902Cu;
    SET_GPR_U32(ctx, 31, 0x219034u);
    ctx->pc = 0x218EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flushCur__13EntryDatClassFv_0x218ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219034u; }
        else if (ctx->pc != 0x219034u) { ctx->pc = 0x219034u; }
    }
    if (ctx->pc != 0x219034u) { return; }
    ctx->pc = 0x219034u;
label_219034:
    // 0x219034: 0x72002e28
    ctx->pc = 0x219034u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_219038:
    // 0x219038: 0xc07f148
    ctx->pc = 0x219038u;
    SET_GPR_U32(ctx, 31, 0x219040u);
    ctx->pc = 0x21903Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC520u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankImm__11MotMgrClassFi_0x1fc520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219040u; }
        else if (ctx->pc != 0x219040u) { ctx->pc = 0x219040u; }
    }
    if (ctx->pc != 0x219040u) { return; }
    ctx->pc = 0x219040u;
    // 0x219040: 0x7bbf0010
    ctx->pc = 0x219040u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219044: 0x7bb00000
    ctx->pc = 0x219044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219048: 0x3e00008
    ctx->pc = 0x219048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21904Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218FF8u: goto label_218ff8;
            case 0x21902Cu: goto label_21902c;
            case 0x219034u: goto label_219034;
            case 0x219038u: goto label_219038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219050u;
}
