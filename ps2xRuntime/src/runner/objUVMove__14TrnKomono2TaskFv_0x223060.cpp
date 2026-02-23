#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: objUVMove__14TrnKomono2TaskFv
// Address: 0x223060 - 0x223158
void objUVMove__14TrnKomono2TaskFv_0x223060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("objUVMove__14TrnKomono2TaskFv");


    ctx->pc = 0x223060u;

    // 0x223060: 0x27bdffd0
    ctx->pc = 0x223060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223064: 0x7fbf0020
    ctx->pc = 0x223064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x223068: 0x7fb10010
    ctx->pc = 0x223068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22306c: 0x7fb00000
    ctx->pc = 0x22306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x223070: 0x70808628
    ctx->pc = 0x223070u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x223074: 0x3c020050
    ctx->pc = 0x223074u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x223078: 0xc07ce18
    ctx->pc = 0x223078u;
    SET_GPR_U32(ctx, 31, 0x223080u);
    ctx->pc = 0x22307Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223080u; }
        else if (ctx->pc != 0x223080u) { ctx->pc = 0x223080u; }
    }
    if (ctx->pc != 0x223080u) { return; }
    ctx->pc = 0x223080u;
    // 0x223080: 0x1c400030
    ctx->pc = 0x223080u;
    {
        const bool branch_taken_0x223080 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x223080) {
            ctx->pc = 0x223144u;
            goto label_223144;
        }
    }
    ctx->pc = 0x223088u;
    // 0x223088: 0x8e05005c
    ctx->pc = 0x223088u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x22308c: 0x3c03002c
    ctx->pc = 0x22308cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x223090: 0x24631d20
    ctx->pc = 0x223090u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7456));
    // 0x223094: 0x52040
    ctx->pc = 0x223094u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x223098: 0x852021
    ctx->pc = 0x223098u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x22309c: 0x420c0
    ctx->pc = 0x22309cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x2230a0: 0x648021
    ctx->pc = 0x2230a0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2230a4: 0x10000006
    ctx->pc = 0x2230A4u;
    {
        const bool branch_taken_0x2230a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2230A8u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x2230a4) {
            ctx->pc = 0x2230C0u;
            goto label_2230c0;
        }
    }
    ctx->pc = 0x2230ACu;
label_2230ac:
    // 0x2230ac: 0xc60c0008
    ctx->pc = 0x2230acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2230b0: 0xc60d000c
    ctx->pc = 0x2230b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2230b4: 0xc24af3c
    ctx->pc = 0x2230B4u;
    SET_GPR_U32(ctx, 31, 0x2230BCu);
    ctx->pc = 0x2230B8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x92BCF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MorphUV__Fiff_0x92bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2230BCu; }
        else if (ctx->pc != 0x2230BCu) { ctx->pc = 0x2230BCu; }
    }
    if (ctx->pc != 0x2230BCu) { return; }
    ctx->pc = 0x2230BCu;
    // 0x2230bc: 0x26310001
    ctx->pc = 0x2230bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2230c0:
    // 0x2230c0: 0x8e030004
    ctx->pc = 0x2230c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2230c4: 0x71082a
    ctx->pc = 0x2230c4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 17)));
    // 0x2230c8: 0x1020fff8
    ctx->pc = 0x2230C8u;
    {
        const bool branch_taken_0x2230c8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2230c8) {
            ctx->pc = 0x2230ACu;
            goto label_2230ac;
        }
    }
    ctx->pc = 0x2230D0u;
    // 0x2230d0: 0x8f868c48
    ctx->pc = 0x2230d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2230d4: 0x8e030010
    ctx->pc = 0x2230d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2230d8: 0x8cc50004
    ctx->pc = 0x2230d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2230dc: 0x52040
    ctx->pc = 0x2230dcu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 1));
    // 0x2230e0: 0x852021
    ctx->pc = 0x2230e0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2230e4: 0x42080
    ctx->pc = 0x2230e4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x2230e8: 0x852021
    ctx->pc = 0x2230e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2230ec: 0x42100
    ctx->pc = 0x2230ecu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2230f0: 0x862821
    ctx->pc = 0x2230f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2230f4: 0x84a400d0
    ctx->pc = 0x2230f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 208)));
    // 0x2230f8: 0x14830012
    ctx->pc = 0x2230F8u;
    {
        const bool branch_taken_0x2230f8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x2230f8) {
            ctx->pc = 0x223144u;
            goto label_223144;
        }
    }
    ctx->pc = 0x223100u;
    // 0x223100: 0xc6000014
    ctx->pc = 0x223100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223104: 0xc4a200c0
    ctx->pc = 0x223104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223108: 0x46800060
    ctx->pc = 0x223108u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x22310c: 0x46011034
    ctx->pc = 0x22310cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223110: 0x0
    ctx->pc = 0x223110u;
    // NOP
    // 0x223114: 0x4501000b
    ctx->pc = 0x223114u;
    {
        const bool branch_taken_0x223114 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x223118u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16281 << 16));
        if (branch_taken_0x223114) {
            ctx->pc = 0x223144u;
            goto label_223144;
        }
    }
    ctx->pc = 0x22311Cu;
    // 0x22311c: 0x3463999a
    ctx->pc = 0x22311cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39322));
    // 0x223120: 0x44830000
    ctx->pc = 0x223120u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x223124: 0x0
    ctx->pc = 0x223124u;
    // NOP
    // 0x223128: 0x46010000
    ctx->pc = 0x223128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22312c: 0x46001034
    ctx->pc = 0x22312cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223130: 0x0
    ctx->pc = 0x223130u;
    // NOP
    // 0x223134: 0x45000003
    ctx->pc = 0x223134u;
    {
        const bool branch_taken_0x223134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223134) {
            ctx->pc = 0x223144u;
            goto label_223144;
        }
    }
    ctx->pc = 0x22313Cu;
    // 0x22313c: 0xc06898c
    ctx->pc = 0x22313Cu;
    SET_GPR_U32(ctx, 31, 0x223144u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223144u; }
        else if (ctx->pc != 0x223144u) { ctx->pc = 0x223144u; }
    }
    if (ctx->pc != 0x223144u) { return; }
    ctx->pc = 0x223144u;
label_223144:
    // 0x223144: 0x7bbf0020
    ctx->pc = 0x223144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223148: 0x7bb10010
    ctx->pc = 0x223148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22314c: 0x7bb00000
    ctx->pc = 0x22314cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223150: 0x3e00008
    ctx->pc = 0x223150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223154u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2230ACu: goto label_2230ac;
            case 0x2230C0u: goto label_2230c0;
            case 0x223144u: goto label_223144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223158u;
}
