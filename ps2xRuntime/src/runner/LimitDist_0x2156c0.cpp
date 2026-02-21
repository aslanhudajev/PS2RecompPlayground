#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: LimitDist
// Address: 0x2156c0 - 0x215788
void LimitDist_0x2156c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2156c0u;

    // 0x2156c0: 0x44801000
    ctx->pc = 0x2156c0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 0);
    // 0x2156c4: 0x808501a4
    ctx->pc = 0x2156c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x2156c8: 0x3c020032
    ctx->pc = 0x2156c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2156cc: 0x8c8301a4
    ctx->pc = 0x2156ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x2156d0: 0x60402d
    ctx->pc = 0x2156d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156d4: 0x8c42f778
    ctx->pc = 0x2156d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965112)));
    // 0x2156d8: 0x621821
    ctx->pc = 0x2156d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2156dc: 0xa3182a
    ctx->pc = 0x2156dcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x2156e0: 0x10600016
    ctx->pc = 0x2156E0u;
    {
        const bool branch_taken_0x2156e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2156E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2156e0) {
            ctx->pc = 0x21573Cu;
            goto label_21573c;
        }
    }
    ctx->pc = 0x2156E8u;
    // 0x2156e8: 0x8c46f778
    ctx->pc = 0x2156e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294965112)));
    // 0x2156ec: 0x482d
    ctx->pc = 0x2156ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156f0: 0x24870180
    ctx->pc = 0x2156f0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 384));
    // 0x2156f4: 0xc48100f4
    ctx->pc = 0x2156f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2156f8: 0x1061821
    ctx->pc = 0x2156f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2156fc: 0x0
    ctx->pc = 0x2156fcu;
    // NOP
label_215700:
    // 0x215700: 0xa6001a
    ctx->pc = 0x215700u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x215704: 0x1010
    ctx->pc = 0x215704u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x215708: 0x50c90001
    ctx->pc = 0x215708u;
    {
        const bool branch_taken_0x215708 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 9));
        if (branch_taken_0x215708) {
            ctx->pc = 0x21570Cu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x215710u;
            goto label_215710;
        }
    }
    ctx->pc = 0x215710u;
label_215710:
    // 0x215710: 0x21080
    ctx->pc = 0x215710u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x215714: 0xe21021
    ctx->pc = 0x215714u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x215718: 0xc4400000
    ctx->pc = 0x215718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21571c: 0x46010001
    ctx->pc = 0x21571cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x215720: 0x24a20001
    ctx->pc = 0x215720u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1));
    // 0x215724: 0x21600
    ctx->pc = 0x215724u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x215728: 0x22e03
    ctx->pc = 0x215728u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
    // 0x21572c: 0xa3102a
    ctx->pc = 0x21572cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 3)));
    // 0x215730: 0x1440fff3
    ctx->pc = 0x215730u;
    {
        const bool branch_taken_0x215730 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x215734u;
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x215730) {
            ctx->pc = 0x215700u;
            goto label_215700;
        }
    }
    ctx->pc = 0x215738u;
    // 0x215738: 0x3c020032
    ctx->pc = 0x215738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_21573c:
    // 0x21573c: 0xc441f778
    ctx->pc = 0x21573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215740: 0x46800860
    ctx->pc = 0x215740u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x215744: 0x3c013f80
    ctx->pc = 0x215744u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x215748: 0x44810000
    ctx->pc = 0x215748u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21574c: 0x0
    ctx->pc = 0x21574cu;
    // NOP
    // 0x215750: 0x0
    ctx->pc = 0x215750u;
    // NOP
    // 0x215754: 0x46010003
    ctx->pc = 0x215754u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x215758: 0x46001082
    ctx->pc = 0x215758u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21575c: 0xc48000f4
    ctx->pc = 0x21575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215760: 0x46001000
    ctx->pc = 0x215760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x215764: 0xe48000f4
    ctx->pc = 0x215764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x215768: 0x44800000
    ctx->pc = 0x215768u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21576c: 0x46001032
    ctx->pc = 0x21576cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215770: 0x0
    ctx->pc = 0x215770u;
    // NOP
    // 0x215774: 0x45000002
    ctx->pc = 0x215774u;
    {
        const bool branch_taken_0x215774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215778u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x215774) {
            ctx->pc = 0x215780u;
            goto label_215780;
        }
    }
    ctx->pc = 0x21577Cu;
    // 0x21577c: 0x102d
    ctx->pc = 0x21577cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215780:
    // 0x215780: 0x3e00008
    ctx->pc = 0x215780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215700u: goto label_215700;
            case 0x215710u: goto label_215710;
            case 0x21573Cu: goto label_21573c;
            case 0x215780u: goto label_215780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215788u;
}
