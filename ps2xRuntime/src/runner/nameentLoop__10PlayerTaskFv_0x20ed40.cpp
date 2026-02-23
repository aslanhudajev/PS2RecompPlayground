#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nameentLoop__10PlayerTaskFv
// Address: 0x20ed40 - 0x20ee44
void nameentLoop__10PlayerTaskFv_0x20ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nameentLoop__10PlayerTaskFv");


    ctx->pc = 0x20ed40u;

    // 0x20ed40: 0x27bdff90
    ctx->pc = 0x20ed40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20ed44: 0x7fbf0010
    ctx->pc = 0x20ed44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20ed48: 0x7fb00000
    ctx->pc = 0x20ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ed4c: 0x8c851cb8
    ctx->pc = 0x20ed4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x20ed50: 0x70808628
    ctx->pc = 0x20ed50u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20ed54: 0x27838ff0
    ctx->pc = 0x20ed54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 28), 4294938608));
    // 0x20ed58: 0x52080
    ctx->pc = 0x20ed58u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x20ed5c: 0x641821
    ctx->pc = 0x20ed5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20ed60: 0x8c630000
    ctx->pc = 0x20ed60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20ed64: 0x14600033
    ctx->pc = 0x20ED64u;
    {
        const bool branch_taken_0x20ed64 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20ED68u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        if (branch_taken_0x20ed64) {
            ctx->pc = 0x20EE34u;
            goto label_20ee34;
        }
    }
    ctx->pc = 0x20ED6Cu;
    // 0x20ed6c: 0x31080
    ctx->pc = 0x20ed6cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20ed70: 0x621021
    ctx->pc = 0x20ed70u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ed74: 0x21880
    ctx->pc = 0x20ed74u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20ed78: 0x3c020050
    ctx->pc = 0x20ed78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20ed7c: 0x2442db70
    ctx->pc = 0x20ed7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x20ed80: 0x433821
    ctx->pc = 0x20ed80u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20ed84: 0x84e2000c
    ctx->pc = 0x20ed84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x20ed88: 0x10400023
    ctx->pc = 0x20ED88u;
    {
        const bool branch_taken_0x20ed88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ED8Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1567));
        if (branch_taken_0x20ed88) {
            ctx->pc = 0x20EE18u;
            goto label_20ee18;
        }
    }
    ctx->pc = 0x20ED90u;
    // 0x20ed90: 0xafa20068
    ctx->pc = 0x20ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x20ed94: 0x84e30008
    ctx->pc = 0x20ed94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x20ed98: 0x3c0243a0
    ctx->pc = 0x20ed98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17312 << 16));
    // 0x20ed9c: 0x44820800
    ctx->pc = 0x20ed9cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x20eda0: 0x3c053f80
    ctx->pc = 0x20eda0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)16256 << 16));
    // 0x20eda4: 0x3c024360
    ctx->pc = 0x20eda4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)17248 << 16));
    // 0x20eda8: 0x44820000
    ctx->pc = 0x20eda8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x20edac: 0x44831000
    ctx->pc = 0x20edacu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x20edb0: 0x3c023c54
    ctx->pc = 0x20edb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15444 << 16));
    // 0x20edb4: 0x468010a0
    ctx->pc = 0x20edb4u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x20edb8: 0x3446fdf4
    ctx->pc = 0x20edb8u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 65012));
    // 0x20edbc: 0x2403ffff
    ctx->pc = 0x20edbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20edc0: 0x2402020a
    ctx->pc = 0x20edc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 522));
    // 0x20edc4: 0x27a40020
    ctx->pc = 0x20edc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x20edc8: 0x46020840
    ctx->pc = 0x20edc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x20edcc: 0xe7a1002c
    ctx->pc = 0x20edccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x20edd0: 0x84e7000a
    ctx->pc = 0x20edd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x20edd4: 0x44870800
    ctx->pc = 0x20edd4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 7);
    // 0x20edd8: 0x0
    ctx->pc = 0x20edd8u;
    // NOP
    // 0x20eddc: 0x46800860
    ctx->pc = 0x20eddcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x20ede0: 0x46010001
    ctx->pc = 0x20ede0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20ede4: 0xe7a00030
    ctx->pc = 0x20ede4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20ede8: 0xafa60034
    ctx->pc = 0x20ede8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x20edec: 0xafa50038
    ctx->pc = 0x20edecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x20edf0: 0xafa5003c
    ctx->pc = 0x20edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
    // 0x20edf4: 0xafa00044
    ctx->pc = 0x20edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x20edf8: 0xafa00040
    ctx->pc = 0x20edf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x20edfc: 0xafa5004c
    ctx->pc = 0x20edfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
    // 0x20ee00: 0xafa50048
    ctx->pc = 0x20ee00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x20ee04: 0xafa00050
    ctx->pc = 0x20ee04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x20ee08: 0xafa50054
    ctx->pc = 0x20ee08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x20ee0c: 0xafa30058
    ctx->pc = 0x20ee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x20ee10: 0xc085bd8
    ctx->pc = 0x20EE10u;
    SET_GPR_U32(ctx, 31, 0x20EE18u);
    ctx->pc = 0x20EE14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE18u; }
        else if (ctx->pc != 0x20EE18u) { ctx->pc = 0x20EE18u; }
    }
    if (ctx->pc != 0x20EE18u) { return; }
    ctx->pc = 0x20EE18u;
label_20ee18:
    // 0x20ee18: 0x8e021cbc
    ctx->pc = 0x20ee18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 7356)));
    // 0x20ee1c: 0x24030008
    ctx->pc = 0x20ee1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20ee20: 0x72002628
    ctx->pc = 0x20ee20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x20ee24: 0xc083f08
    ctx->pc = 0x20EE24u;
    SET_GPR_U32(ctx, 31, 0x20EE2Cu);
    ctx->pc = 0x20EE28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    ctx->pc = 0x20FC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        gunExe__10PlayerTaskFv_0x20fc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE2Cu; }
        else if (ctx->pc != 0x20EE2Cu) { ctx->pc = 0x20EE2Cu; }
    }
    if (ctx->pc != 0x20EE2Cu) { return; }
    ctx->pc = 0x20EE2Cu;
    // 0x20ee2c: 0xc0840a8
    ctx->pc = 0x20EE2Cu;
    SET_GPR_U32(ctx, 31, 0x20EE34u);
    ctx->pc = 0x20EE30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2102A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        bullet__10PlayerTaskFv_0x2102a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EE34u; }
        else if (ctx->pc != 0x20EE34u) { ctx->pc = 0x20EE34u; }
    }
    if (ctx->pc != 0x20EE34u) { return; }
    ctx->pc = 0x20EE34u;
label_20ee34:
    // 0x20ee34: 0x7bbf0010
    ctx->pc = 0x20ee34u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ee38: 0x7bb00000
    ctx->pc = 0x20ee38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ee3c: 0x3e00008
    ctx->pc = 0x20EE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EE40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EE18u: goto label_20ee18;
            case 0x20EE34u: goto label_20ee34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20EE44u;
}
