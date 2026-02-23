#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: releaseMuteSound__13SoundMgrClassFv
// Address: 0x217bd0 - 0x217c4c
void releaseMuteSound__13SoundMgrClassFv_0x217bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("releaseMuteSound__13SoundMgrClassFv");


    ctx->pc = 0x217bd0u;

    // 0x217bd0: 0x3c024688
    ctx->pc = 0x217bd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)18056 << 16));
    // 0x217bd4: 0x27bdffd0
    ctx->pc = 0x217bd4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217bd8: 0x34428889
    ctx->pc = 0x217bd8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 34953));
    // 0x217bdc: 0x7fbf0020
    ctx->pc = 0x217bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x217be0: 0x7fb10010
    ctx->pc = 0x217be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217be4: 0x44826000
    ctx->pc = 0x217be4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x217be8: 0xc053146
    ctx->pc = 0x217BE8u;
    SET_GPR_U32(ctx, 31, 0x217BF0u);
    ctx->pc = 0x217BECu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BF0u; }
        else if (ctx->pc != 0x217BF0u) { ctx->pc = 0x217BF0u; }
    }
    if (ctx->pc != 0x217BF0u) { return; }
    ctx->pc = 0x217BF0u;
    // 0x217bf0: 0x34018000
    ctx->pc = 0x217bf0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 0), 32768));
    // 0x217bf4: 0x41082a
    ctx->pc = 0x217bf4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 1)));
    // 0x217bf8: 0x14200002
    ctx->pc = 0x217BF8u;
    {
        const bool branch_taken_0x217bf8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x217BFCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x217bf8) {
            ctx->pc = 0x217C04u;
            goto label_217c04;
        }
    }
    ctx->pc = 0x217C00u;
    // 0x217c00: 0x24027fff
    ctx->pc = 0x217c00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32767));
label_217c04:
    // 0x217c04: 0x70402e28
    ctx->pc = 0x217c04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x217c08: 0xc06b42c
    ctx->pc = 0x217C08u;
    SET_GPR_U32(ctx, 31, 0x217C10u);
    ctx->pc = 0x217C0Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetStreamVolume_0x1ad0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C10u; }
        else if (ctx->pc != 0x217C10u) { ctx->pc = 0x217C10u; }
    }
    if (ctx->pc != 0x217C10u) { return; }
    ctx->pc = 0x217C10u;
    // 0x217c10: 0x3c010050
    ctx->pc = 0x217c10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x217c14: 0x9031fee2
    ctx->pc = 0x217c14u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294967010)));
    // 0x217c18: 0x24100002
    ctx->pc = 0x217c18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
label_217c1c:
    // 0x217c1c: 0x72002628
    ctx->pc = 0x217c1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x217c20: 0xc06b460
    ctx->pc = 0x217C20u;
    SET_GPR_U32(ctx, 31, 0x217C28u);
    ctx->pc = 0x217C24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD180u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetBankVolume_0x1ad180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C28u; }
        else if (ctx->pc != 0x217C28u) { ctx->pc = 0x217C28u; }
    }
    if (ctx->pc != 0x217C28u) { return; }
    ctx->pc = 0x217C28u;
    // 0x217c28: 0x26100001
    ctx->pc = 0x217c28u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x217c2c: 0x2a030007
    ctx->pc = 0x217c2cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 7));
    // 0x217c30: 0x1460fffa
    ctx->pc = 0x217C30u;
    {
        const bool branch_taken_0x217c30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x217c30) {
            ctx->pc = 0x217C1Cu;
            goto label_217c1c;
        }
    }
    ctx->pc = 0x217C38u;
    // 0x217c38: 0x7bbf0020
    ctx->pc = 0x217c38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217c3c: 0x7bb10010
    ctx->pc = 0x217c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217c40: 0x7bb00000
    ctx->pc = 0x217c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217c44: 0x3e00008
    ctx->pc = 0x217C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217C48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217C04u: goto label_217c04;
            case 0x217C1Cu: goto label_217c1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217C4Cu;
}
