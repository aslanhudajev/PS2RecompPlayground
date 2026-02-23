#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: read_SYNCH_pad__11GunMgrClassFi
// Address: 0x1edd80 - 0x1ee080
void read_SYNCH_pad__11GunMgrClassFi_0x1edd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("read_SYNCH_pad__11GunMgrClassFi");


    ctx->pc = 0x1edd80u;

    // 0x1edd80: 0x27bdffa0
    ctx->pc = 0x1edd80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1edd84: 0x7fbf0050
    ctx->pc = 0x1edd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1edd88: 0x7fb30040
    ctx->pc = 0x1edd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1edd8c: 0x51080
    ctx->pc = 0x1edd8cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1edd90: 0x451821
    ctx->pc = 0x1edd90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1edd94: 0x7fb20030
    ctx->pc = 0x1edd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1edd98: 0x31080
    ctx->pc = 0x1edd98u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1edd9c: 0x621021
    ctx->pc = 0x1edd9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1edda0: 0x7fb10020
    ctx->pc = 0x1edda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1edda4: 0x7fb00010
    ctx->pc = 0x1edda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1edda8: 0x21080
    ctx->pc = 0x1edda8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eddac: 0x828021
    ctx->pc = 0x1eddacu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eddb0: 0x51040
    ctx->pc = 0x1eddb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1eddb4: 0x451021
    ctx->pc = 0x1eddb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eddb8: 0x3c030050
    ctx->pc = 0x1eddb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1eddbc: 0xe7b50004
    ctx->pc = 0x1eddbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1eddc0: 0x28880
    ctx->pc = 0x1eddc0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eddc4: 0x2463feca
    ctx->pc = 0x1eddc4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966986));
    // 0x1eddc8: 0x2251021
    ctx->pc = 0x1eddc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1eddcc: 0xe7b40000
    ctx->pc = 0x1eddccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1eddd0: 0x70a09e28
    ctx->pc = 0x1eddd0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eddd4: 0x711821
    ctx->pc = 0x1eddd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1eddd8: 0x80650000
    ctx->pc = 0x1eddd8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1edddc: 0x2404000b
    ctx->pc = 0x1edddcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    // 0x1edde0: 0x21040
    ctx->pc = 0x1edde0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x1edde4: 0xa4001a
    ctx->pc = 0x1edde4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1edde8: 0x3c033f4c
    ctx->pc = 0x1edde8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16204 << 16));
    // 0x1eddec: 0x3463cccd
    ctx->pc = 0x1eddecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x1eddf0: 0x44830800
    ctx->pc = 0x1eddf0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x1eddf4: 0x3c033f80
    ctx->pc = 0x1eddf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1eddf8: 0x44830000
    ctx->pc = 0x1eddf8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1eddfc: 0x3c030050
    ctx->pc = 0x1eddfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ede00: 0x2463dc4c
    ctx->pc = 0x1ede00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958156));
    // 0x1ede04: 0x621821
    ctx->pc = 0x1ede04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ede08: 0x90640000
    ctx->pc = 0x1ede08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ede0c: 0x1810
    ctx->pc = 0x1ede0cu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x1ede10: 0x28810061
    ctx->pc = 0x1ede10u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 97));
    // 0x1ede14: 0x24630001
    ctx->pc = 0x1ede14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ede18: 0x44831000
    ctx->pc = 0x1ede18u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x1ede1c: 0x0
    ctx->pc = 0x1ede1cu;
    // NOP
    // 0x1ede20: 0x468010a0
    ctx->pc = 0x1ede20u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1ede24: 0x46020842
    ctx->pc = 0x1ede24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ede28: 0x14200008
    ctx->pc = 0x1EDE28u;
    {
        const bool branch_taken_0x1ede28 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDE2Cu;
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x1ede28) {
            ctx->pc = 0x1EDE4Cu;
            goto label_1ede4c;
        }
    }
    ctx->pc = 0x1EDE30u;
    // 0x1ede30: 0x288300a0
    ctx->pc = 0x1ede30u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 160));
    // 0x1ede34: 0x54600003
    ctx->pc = 0x1EDE34u;
    {
        const bool branch_taken_0x1ede34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ede34) {
            ctx->pc = 0x1EDE38u;
            SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1EDE44u;
            goto label_1ede44;
        }
    }
    ctx->pc = 0x1EDE3Cu;
    // 0x1ede3c: 0x10000004
    ctx->pc = 0x1EDE3Cu;
    {
        const bool branch_taken_0x1ede3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDE40u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967168));
        if (branch_taken_0x1ede3c) {
            ctx->pc = 0x1EDE50u;
            goto label_1ede50;
        }
    }
    ctx->pc = 0x1EDE44u;
label_1ede44:
    // 0x1ede44: 0x10000002
    ctx->pc = 0x1EDE44u;
    {
        const bool branch_taken_0x1ede44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ede44) {
            ctx->pc = 0x1EDE50u;
            goto label_1ede50;
        }
    }
    ctx->pc = 0x1EDE4Cu;
label_1ede4c:
    // 0x1ede4c: 0x2484ff80
    ctx->pc = 0x1ede4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967168));
label_1ede50:
    // 0x1ede50: 0x3c030050
    ctx->pc = 0x1ede50u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1ede54: 0x2463dc4d
    ctx->pc = 0x1ede54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958157));
    // 0x1ede58: 0x621821
    ctx->pc = 0x1ede58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ede5c: 0x90650000
    ctx->pc = 0x1ede5cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ede60: 0x28a10061
    ctx->pc = 0x1ede60u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 97));
    // 0x1ede64: 0x14200009
    ctx->pc = 0x1EDE64u;
    {
        const bool branch_taken_0x1ede64 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDE68u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967168));
        if (branch_taken_0x1ede64) {
            ctx->pc = 0x1EDE8Cu;
            goto label_1ede8c;
        }
    }
    ctx->pc = 0x1EDE6Cu;
    // 0x1ede6c: 0x28a300a0
    ctx->pc = 0x1ede6cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 160));
    // 0x1ede70: 0x14600003
    ctx->pc = 0x1EDE70u;
    {
        const bool branch_taken_0x1ede70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDE74u;
        SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ede70) {
            ctx->pc = 0x1EDE80u;
            goto label_1ede80;
        }
    }
    ctx->pc = 0x1EDE78u;
    // 0x1ede78: 0x10000003
    ctx->pc = 0x1EDE78u;
    {
        const bool branch_taken_0x1ede78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ede78) {
            ctx->pc = 0x1EDE88u;
            goto label_1ede88;
        }
    }
    ctx->pc = 0x1EDE80u;
label_1ede80:
    // 0x1ede80: 0x10000002
    ctx->pc = 0x1EDE80u;
    {
        const bool branch_taken_0x1ede80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ede80) {
            ctx->pc = 0x1EDE8Cu;
            goto label_1ede8c;
        }
    }
    ctx->pc = 0x1EDE88u;
label_1ede88:
    // 0x1ede88: 0x24a3ff80
    ctx->pc = 0x1ede88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967168));
label_1ede8c:
    // 0x1ede8c: 0x44840000
    ctx->pc = 0x1ede8cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1ede90: 0x3c0542f0
    ctx->pc = 0x1ede90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)17136 << 16));
    // 0x1ede94: 0x46800020
    ctx->pc = 0x1ede94u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1ede98: 0x32023
    ctx->pc = 0x1ede98u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1ede9c: 0x3c030050
    ctx->pc = 0x1ede9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1edea0: 0x2463dc42
    ctx->pc = 0x1edea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958146));
    // 0x1edea4: 0x629021
    ctx->pc = 0x1edea4u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1edea8: 0x96430000
    ctx->pc = 0x1edea8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1edeac: 0x46020042
    ctx->pc = 0x1edeacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1edeb0: 0x44840000
    ctx->pc = 0x1edeb0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 4);
    // 0x1edeb4: 0x44851800
    ctx->pc = 0x1edeb4u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 5);
    // 0x1edeb8: 0x46800020
    ctx->pc = 0x1edeb8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1edebc: 0x306200f0
    ctx->pc = 0x1edebcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 240));
    // 0x1edec0: 0x46020002
    ctx->pc = 0x1edec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1edec4: 0x46030d03
    ctx->pc = 0x1edec4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[3];
    // 0x1edec8: 0x46030543
    ctx->pc = 0x1edec8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[21] = ctx->f[0] / ctx->f[3];
    // 0x1edecc: 0x0
    ctx->pc = 0x1edeccu;
    // NOP
    // 0x1eded0: 0x0
    ctx->pc = 0x1eded0u;
    // NOP
    // 0x1eded4: 0x10400012
    ctx->pc = 0x1EDED4u;
    {
        const bool branch_taken_0x1eded4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1eded4) {
            ctx->pc = 0x1EDF20u;
            goto label_1edf20;
        }
    }
    ctx->pc = 0x1EDEDCu;
    // 0x1ededc: 0x4480a800
    ctx->pc = 0x1ededcu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x1edee0: 0x30620020
    ctx->pc = 0x1edee0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 32));
    // 0x1edee4: 0x10400002
    ctx->pc = 0x1EDEE4u;
    {
        const bool branch_taken_0x1edee4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDEE8u;
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x1edee4) {
            ctx->pc = 0x1EDEF0u;
            goto label_1edef0;
        }
    }
    ctx->pc = 0x1EDEECu;
    // 0x1edeec: 0x46001506
    ctx->pc = 0x1edeecu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_1edef0:
    // 0x1edef0: 0x30620080
    ctx->pc = 0x1edef0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 128));
    // 0x1edef4: 0x10400003
    ctx->pc = 0x1EDEF4u;
    {
        const bool branch_taken_0x1edef4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDEF8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1edef4) {
            ctx->pc = 0x1EDF04u;
            goto label_1edf04;
        }
    }
    ctx->pc = 0x1EDEFCu;
    // 0x1edefc: 0x46001507
    ctx->pc = 0x1edefcu;
    ctx->f[20] = FPU_NEG_S(ctx->f[2]);
    // 0x1edf00: 0x30620010
    ctx->pc = 0x1edf00u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
label_1edf04:
    // 0x1edf04: 0x10400003
    ctx->pc = 0x1EDF04u;
    {
        const bool branch_taken_0x1edf04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDF08u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x1edf04) {
            ctx->pc = 0x1EDF14u;
            goto label_1edf14;
        }
    }
    ctx->pc = 0x1EDF0Cu;
    // 0x1edf0c: 0x46001546
    ctx->pc = 0x1edf0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[2]);
    // 0x1edf10: 0x30620040
    ctx->pc = 0x1edf10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 64));
label_1edf14:
    // 0x1edf14: 0x10400002
    ctx->pc = 0x1EDF14u;
    {
        const bool branch_taken_0x1edf14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1edf14) {
            ctx->pc = 0x1EDF20u;
            goto label_1edf20;
        }
    }
    ctx->pc = 0x1EDF1Cu;
    // 0x1edf1c: 0x46001547
    ctx->pc = 0x1edf1cu;
    ctx->f[21] = FPU_NEG_S(ctx->f[2]);
label_1edf20:
    // 0x1edf20: 0x3c020050
    ctx->pc = 0x1edf20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1edf24: 0x2442fed0
    ctx->pc = 0x1edf24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966992));
    // 0x1edf28: 0x511021
    ctx->pc = 0x1edf28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1edf2c: 0x94420000
    ctx->pc = 0x1edf2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edf30: 0x431024
    ctx->pc = 0x1edf30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edf34: 0x10400006
    ctx->pc = 0x1EDF34u;
    {
        const bool branch_taken_0x1edf34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1edf34) {
            ctx->pc = 0x1EDF50u;
            goto label_1edf50;
        }
    }
    ctx->pc = 0x1EDF3Cu;
    // 0x1edf3c: 0x3c024000
    ctx->pc = 0x1edf3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1edf40: 0x44820000
    ctx->pc = 0x1edf40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1edf44: 0x0
    ctx->pc = 0x1edf44u;
    // NOP
    // 0x1edf48: 0x4600a502
    ctx->pc = 0x1edf48u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1edf4c: 0x4600ad42
    ctx->pc = 0x1edf4cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1edf50:
    // 0x1edf50: 0x3c020050
    ctx->pc = 0x1edf50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1edf54: 0xc07ce18
    ctx->pc = 0x1EDF54u;
    SET_GPR_U32(ctx, 31, 0x1EDF5Cu);
    ctx->pc = 0x1EDF58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDF5Cu; }
        else if (ctx->pc != 0x1EDF5Cu) { ctx->pc = 0x1EDF5Cu; }
    }
    if (ctx->pc != 0x1EDF5Cu) { return; }
    ctx->pc = 0x1EDF5Cu;
    // 0x1edf5c: 0x1c400011
    ctx->pc = 0x1EDF5Cu;
    {
        const bool branch_taken_0x1edf5c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1EDF60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16281 << 16));
        if (branch_taken_0x1edf5c) {
            ctx->pc = 0x1EDFA4u;
            goto label_1edfa4;
        }
    }
    ctx->pc = 0x1EDF64u;
    // 0x1edf64: 0x3442999a
    ctx->pc = 0x1edf64u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x1edf68: 0x44820800
    ctx->pc = 0x1edf68u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1edf6c: 0x0
    ctx->pc = 0x1edf6cu;
    // NOP
    // 0x1edf70: 0x46140802
    ctx->pc = 0x1edf70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1edf74: 0x86020008
    ctx->pc = 0x1edf74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1edf78: 0x46000024
    ctx->pc = 0x1edf78u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1edf7c: 0x44030000
    ctx->pc = 0x1edf7cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1edf80: 0x46150842
    ctx->pc = 0x1edf80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1edf84: 0x431021
    ctx->pc = 0x1edf84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edf88: 0xa6020008
    ctx->pc = 0x1edf88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x1edf8c: 0x8602000a
    ctx->pc = 0x1edf8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1edf90: 0x46000824
    ctx->pc = 0x1edf90u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1edf94: 0x44030000
    ctx->pc = 0x1edf94u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1edf98: 0x0
    ctx->pc = 0x1edf98u;
    // NOP
    // 0x1edf9c: 0x431021
    ctx->pc = 0x1edf9cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edfa0: 0xa602000a
    ctx->pc = 0x1edfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_1edfa4:
    // 0x1edfa4: 0x86020008
    ctx->pc = 0x1edfa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1edfa8: 0x2841fec0
    ctx->pc = 0x1edfa8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294966976));
    // 0x1edfac: 0x10200002
    ctx->pc = 0x1EDFACu;
    {
        const bool branch_taken_0x1edfac = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDFB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294966976));
        if (branch_taken_0x1edfac) {
            ctx->pc = 0x1EDFB8u;
            goto label_1edfb8;
        }
    }
    ctx->pc = 0x1EDFB4u;
    // 0x1edfb4: 0xa6020008
    ctx->pc = 0x1edfb4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_1edfb8:
    // 0x1edfb8: 0x86020008
    ctx->pc = 0x1edfb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1edfbc: 0x28410141
    ctx->pc = 0x1edfbcu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 321));
    // 0x1edfc0: 0x14200002
    ctx->pc = 0x1EDFC0u;
    {
        const bool branch_taken_0x1edfc0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDFC4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
        if (branch_taken_0x1edfc0) {
            ctx->pc = 0x1EDFCCu;
            goto label_1edfcc;
        }
    }
    ctx->pc = 0x1EDFC8u;
    // 0x1edfc8: 0xa6020008
    ctx->pc = 0x1edfc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_1edfcc:
    // 0x1edfcc: 0x8602000a
    ctx->pc = 0x1edfccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1edfd0: 0x2841ff20
    ctx->pc = 0x1edfd0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967072));
    // 0x1edfd4: 0x10200002
    ctx->pc = 0x1EDFD4u;
    {
        const bool branch_taken_0x1edfd4 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDFD8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967072));
        if (branch_taken_0x1edfd4) {
            ctx->pc = 0x1EDFE0u;
            goto label_1edfe0;
        }
    }
    ctx->pc = 0x1EDFDCu;
    // 0x1edfdc: 0xa602000a
    ctx->pc = 0x1edfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_1edfe0:
    // 0x1edfe0: 0x8602000a
    ctx->pc = 0x1edfe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1edfe4: 0x284100e1
    ctx->pc = 0x1edfe4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 225));
    // 0x1edfe8: 0x14200003
    ctx->pc = 0x1EDFE8u;
    {
        const bool branch_taken_0x1edfe8 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDFECu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1edfe8) {
            ctx->pc = 0x1EDFF8u;
            goto label_1edff8;
        }
    }
    ctx->pc = 0x1EDFF0u;
    // 0x1edff0: 0x240200e0
    ctx->pc = 0x1edff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1edff4: 0xa602000a
    ctx->pc = 0x1edff4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
label_1edff8:
    // 0x1edff8: 0xc080978
    ctx->pc = 0x1EDFF8u;
    SET_GPR_U32(ctx, 31, 0x1EE000u);
    ctx->pc = 0x2025E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PullTrigger__Fi_0x2025e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EE000u; }
        else if (ctx->pc != 0x1EE000u) { ctx->pc = 0x1EE000u; }
    }
    if (ctx->pc != 0x1EE000u) { return; }
    ctx->pc = 0x1EE000u;
    // 0x1ee000: 0x24030001
    ctx->pc = 0x1ee000u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee004: 0x2180a
    ctx->pc = 0x1ee004u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x1ee008: 0xa203000e
    ctx->pc = 0x1ee008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ee00c: 0x3c010050
    ctx->pc = 0x1ee00cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ee010: 0x8424e504
    ctx->pc = 0x1ee010u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1ee014: 0x24030007
    ctx->pc = 0x1ee014u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee018: 0x14830004
    ctx->pc = 0x1EE018u;
    {
        const bool branch_taken_0x1ee018 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1EE01Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)80 << 16));
        if (branch_taken_0x1ee018) {
            ctx->pc = 0x1EE02Cu;
            goto label_1ee02c;
        }
    }
    ctx->pc = 0x1EE020u;
    // 0x1ee020: 0x83838cd4
    ctx->pc = 0x1ee020u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937812)));
    // 0x1ee024: 0x1460000b
    ctx->pc = 0x1EE024u;
    {
        const bool branch_taken_0x1ee024 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EE028u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ee024) {
            ctx->pc = 0x1EE054u;
            goto label_1ee054;
        }
    }
    ctx->pc = 0x1EE02Cu;
label_1ee02c:
    // 0x1ee02c: 0x2484fed2
    ctx->pc = 0x1ee02cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966994));
    // 0x1ee030: 0x912021
    ctx->pc = 0x1ee030u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1ee034: 0x96430000
    ctx->pc = 0x1ee034u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ee038: 0x94840000
    ctx->pc = 0x1ee038u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee03c: 0x831824
    ctx->pc = 0x1ee03cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ee040: 0x10600003
    ctx->pc = 0x1EE040u;
    {
        const bool branch_taken_0x1ee040 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ee040) {
            ctx->pc = 0x1EE050u;
            goto label_1ee050;
        }
    }
    ctx->pc = 0x1EE048u;
    // 0x1ee048: 0xa6000008
    ctx->pc = 0x1ee048u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee04c: 0xa600000a
    ctx->pc = 0x1ee04cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_1ee050:
    // 0x1ee050: 0x24030001
    ctx->pc = 0x1ee050u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1ee054:
    // 0x1ee054: 0xa603000c
    ctx->pc = 0x1ee054u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee058: 0xa6030004
    ctx->pc = 0x1ee058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee05c: 0x7bbf0050
    ctx->pc = 0x1ee05cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ee060: 0x7bb30040
    ctx->pc = 0x1ee060u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee064: 0x7bb20030
    ctx->pc = 0x1ee064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee068: 0x7bb10020
    ctx->pc = 0x1ee068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee06c: 0x7bb00010
    ctx->pc = 0x1ee06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee070: 0xc7b50004
    ctx->pc = 0x1ee070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ee074: 0xc7b40000
    ctx->pc = 0x1ee074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ee078: 0x3e00008
    ctx->pc = 0x1EE078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE07Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDE44u: goto label_1ede44;
            case 0x1EDE4Cu: goto label_1ede4c;
            case 0x1EDE50u: goto label_1ede50;
            case 0x1EDE80u: goto label_1ede80;
            case 0x1EDE88u: goto label_1ede88;
            case 0x1EDE8Cu: goto label_1ede8c;
            case 0x1EDEF0u: goto label_1edef0;
            case 0x1EDF04u: goto label_1edf04;
            case 0x1EDF14u: goto label_1edf14;
            case 0x1EDF20u: goto label_1edf20;
            case 0x1EDF50u: goto label_1edf50;
            case 0x1EDFA4u: goto label_1edfa4;
            case 0x1EDFB8u: goto label_1edfb8;
            case 0x1EDFCCu: goto label_1edfcc;
            case 0x1EDFE0u: goto label_1edfe0;
            case 0x1EDFF8u: goto label_1edff8;
            case 0x1EE02Cu: goto label_1ee02c;
            case 0x1EE050u: goto label_1ee050;
            case 0x1EE054u: goto label_1ee054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EE080u;
}
