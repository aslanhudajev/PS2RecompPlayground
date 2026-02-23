#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: HFileAddOtherGallery__Fv
// Address: 0x1d3ab0 - 0x1d3b48
void HFileAddOtherGallery__Fv_0x1d3ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("HFileAddOtherGallery__Fv");


    ctx->pc = 0x1d3ab0u;

    // 0x1d3ab0: 0x27bdffc0
    ctx->pc = 0x1d3ab0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d3ab4: 0x7fbf0010
    ctx->pc = 0x1d3ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d3ab8: 0x7fb00000
    ctx->pc = 0x1d3ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3abc: 0x3c030050
    ctx->pc = 0x1d3abcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1d3ac0: 0x70008628
    ctx->pc = 0x1d3ac0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3ac4: 0x2465fd9e
    ctx->pc = 0x1d3ac4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 4294966686));
    // 0x1d3ac8: 0x70002628
    ctx->pc = 0x1d3ac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d3acc: 0x27a60020
    ctx->pc = 0x1d3accu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d3ad0: 0xa41821
    ctx->pc = 0x1d3ad0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1d3ad4:
    // 0x1d3ad4: 0x80630007
    ctx->pc = 0x1d3ad4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 7)));
    // 0x1d3ad8: 0x30630001
    ctx->pc = 0x1d3ad8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1d3adc: 0x54600005
    ctx->pc = 0x1D3ADCu;
    {
        const bool branch_taken_0x1d3adc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d3adc) {
            ctx->pc = 0x1D3AE0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x1D3AF4u;
            goto label_1d3af4;
        }
    }
    ctx->pc = 0x1D3AE4u;
    // 0x1d3ae4: 0xa0c40000
    ctx->pc = 0x1d3ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d3ae8: 0x24c60001
    ctx->pc = 0x1d3ae8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d3aec: 0x26100001
    ctx->pc = 0x1d3aecu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d3af0: 0x24840001
    ctx->pc = 0x1d3af0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1d3af4:
    // 0x1d3af4: 0x28830020
    ctx->pc = 0x1d3af4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 32));
    // 0x1d3af8: 0x1460fff6
    ctx->pc = 0x1D3AF8u;
    {
        const bool branch_taken_0x1d3af8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D3AFCu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        if (branch_taken_0x1d3af8) {
            ctx->pc = 0x1D3AD4u;
            goto label_1d3ad4;
        }
    }
    ctx->pc = 0x1D3B00u;
    // 0x1d3b00: 0x1a00000d
    ctx->pc = 0x1D3B00u;
    {
        const bool branch_taken_0x1d3b00 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1d3b00) {
            ctx->pc = 0x1D3B38u;
            goto label_1d3b38;
        }
    }
    ctx->pc = 0x1D3B08u;
    // 0x1d3b08: 0xc069fb8
    ctx->pc = 0x1D3B08u;
    SET_GPR_U32(ctx, 31, 0x1D3B10u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B10u; }
        else if (ctx->pc != 0x1D3B10u) { ctx->pc = 0x1D3B10u; }
    }
    if (ctx->pc != 0x1D3B10u) { return; }
    ctx->pc = 0x1D3B10u;
    // 0x1d3b10: 0x30427fff
    ctx->pc = 0x1d3b10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32767));
    // 0x1d3b14: 0x16000002
    ctx->pc = 0x1D3B14u;
    {
        const bool branch_taken_0x1d3b14 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D3B18u;
        { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x1d3b14) {
            ctx->pc = 0x1D3B20u;
            goto label_1d3b20;
        }
    }
    ctx->pc = 0x1D3B1Cu;
    // 0x1d3b1c: 0x1cd
    ctx->pc = 0x1d3b1cu;
    runtime->handleBreak(rdram, ctx);
label_1d3b20:
    // 0x1d3b20: 0x1010
    ctx->pc = 0x1d3b20u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x1d3b24: 0x24040004
    ctx->pc = 0x1d3b24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3b28: 0x5d1021
    ctx->pc = 0x1d3b28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1d3b2c: 0x80420020
    ctx->pc = 0x1d3b2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d3b30: 0xc074e84
    ctx->pc = 0x1D3B30u;
    SET_GPR_U32(ctx, 31, 0x1D3B38u);
    ctx->pc = 0x1D3B34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7));
    ctx->pc = 0x1D3A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        HFileAddPageG__Fii_0x1d3a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3B38u; }
        else if (ctx->pc != 0x1D3B38u) { ctx->pc = 0x1D3B38u; }
    }
    if (ctx->pc != 0x1D3B38u) { return; }
    ctx->pc = 0x1D3B38u;
label_1d3b38:
    // 0x1d3b38: 0x7bbf0010
    ctx->pc = 0x1d3b38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3b3c: 0x7bb00000
    ctx->pc = 0x1d3b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3b40: 0x3e00008
    ctx->pc = 0x1D3B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3B44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3AD4u: goto label_1d3ad4;
            case 0x1D3AF4u: goto label_1d3af4;
            case 0x1D3B20u: goto label_1d3b20;
            case 0x1D3B38u: goto label_1d3b38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3B48u;
}
